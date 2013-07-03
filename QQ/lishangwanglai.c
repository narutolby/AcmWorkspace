/*************************************************************************
  > File Name: lishangwanglai.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月30日 星期六 19时34分12秒
 ************************************************************************/

#include<stdio.h>
unsigned long long jiecheng[101]={0};
unsigned long long xuanqu[101][101]={{0}};
long long xuanqu1(){
	int i,j;
	for(i=1;i<=100;i++){
		xuanqu[i][0]=1;
		for(j=1;j<=i;j++){
			xuanqu[i][j]=xuanqu[i-1][j]+xuanqu[i-1][j-1];
		}	
	}

}
void jiecheng1(){
	unsigned long long sum=1;int i=1;
	jiecheng[0]=1;
	for(i=1;i<=100;i++){
		jiecheng[i]=i*jiecheng[i-1];
	} 
}
int main(){
	xuanqu[1][1]=1;
	xuanqu[1][0]=1;
	xuanqu[0][0]=1;
	xuanqu[0][1]=0;
	int T,n,i,j;
	unsigned long long sum,F[101];
	F[2]=1;F[1]=1;
	jiecheng1(); 
	xuanqu1();
	for(i=3;i<=100;i++){
		sum=jiecheng[i];
		for(j=1;j<i-1;j++){
			sum-=xuanqu[i][j]*F[i-j];
		}
		F[i]=sum-1;
	}
	scanf("%d",&T);
	while(T--){
		scanf("%d",&n);
		if(n==1){
	      printf("%d\n",0);
		  continue;
		}
		printf("%llu\n",F[n]%(1000000000+7));
	}
	return 0;
}
