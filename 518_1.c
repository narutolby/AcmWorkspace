/*************************************************************************
  > File Name: 518.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月12日 星期二 15时55分57秒
 ************************************************************************/

#include<stdio.h>
int main(){
	int N,K,i,j,t,c,buff[40000]={0};
	while(scanf("%d %d",&N,&K)!=EOF){
		if(K>=N){
			printf("%d\n",2);
		}else{
			for(i=0;i<N;i++){
				buff[i]=0;
			}
			c=2*N;i=0;j=1;t=0;
			while(c>0){
				if(i==N-1){
					i==0;
				}
				if(buff[i]==-2){
					i++;
					continue;
				}
				buff[i]--;
				c--;
				if(j%K==0){
					t++;
				}
				i++;j++;
			}
			printf("%d\n",t);
		}
	}
	return 0;
}
