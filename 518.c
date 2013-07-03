/*************************************************************************
  > File Name: 518.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月12日 星期二 15时55分57秒
 ************************************************************************/

#include<stdio.h>
int main(){
	int N,K,c;
	while(scanf("%d %d",&N,&K)!=EOF){
		if(N<=K){
		  printf("%d\n",2);
		  continue;
		}
          c=2*N;
			printf("%d\n",c%K==0?c/K:c/K+1);
		}
	return 0;
}
