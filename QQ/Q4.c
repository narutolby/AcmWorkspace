/*************************************************************************
  > File Name: Q4.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月21日 星期四 21时14分04秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int max=0,sum=0;
void f(int input[100][2],int m,int N,int map[]){
	int i;
	int flag=0;
	for(i=0;i<N;i++){
		if(map[input[i][1]]>input[i][0]){
			continue;
		}
		if(input[i][1]<=m) {
			flag=1;
			sum+=input[i][0];
			f(input,m-input[i][1],N,map);
			sum-=input[i][0];
		}
	}
	if(flag==0){
		if(max<sum){
			max=sum;
		}
	}

}
int main(){
	int input[100][2],N,i,m,map[100000]={0};
	while(scanf("%d",&N)!=EOF){
		memset(map,0,sizeof(int)*100000);
		max=0;sum=0;
		for(i=0;i<N;i++){
			scanf("%d %d",&input[i][0],&input[i][1]);
			if(map[input[i][1]]<input[i][0]){
				map[input[i][1]]=input[i][0];
			}
		}
		scanf("%d",&m);
		f(input,m,N,map);
		printf("%d\n",max);
	}

	return 0;
}
