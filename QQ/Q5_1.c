/*************************************************************************
  > File Name: Q5_1.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月22日 星期五 18时30分35秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int max(int a,int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}
int main(){
	int n,input[100][2],i,j,m,f[100000]={0};
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			scanf("%d %d",&input[i][0],&input[i][1]);
		}
		scanf("%d",&m);
		for(i=0;i<n;i++){
			for(j=input[i][1];j<=m;j++){
				f[j]=max(f[j],f[j-input[i][1]]+input[i][0]);
			}
		}
		printf("%d\n",f[m]);
		memset(f,0,sizeof(int)*100000);
	}
	return 0;
}
