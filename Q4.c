/*************************************************************************
  > File Name: Q4.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月21日 星期四 21时14分04秒
 ************************************************************************/

#include<stdio.h>
int max=0,sum=0;
void f(int input[100][2],int m,int N){
	int i;
	int flag=0;
	for(i=0;i<N;i++){
		if(input[i][1]<=m) {
			flag=1;
			sum+=input[i][0];
			f(input,m-input[i][1],N);
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
	int input[100][2],N,i,m;
	while(scanf("%d",&N)!=EOF){
		max=0;sum=0;
		for(i=0;i<N;i++){
			scanf("%d %d",&input[i][0],&input[i][1]);
		}
		scanf("%d",&m);
		f(input,m,N);
		printf("%d\n",max);
	}

	return 0;
}
