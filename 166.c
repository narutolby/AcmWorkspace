/*************************************************************************
  > File Name: 166.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月10日 星期日 20时32分45秒
 ************************************************************************/

#include<stdio.h>
int main(){
	int T,n,i,j,r[100][100],r1[100],max,c,w[100];
	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%d",&n);
		c=0;max=0;
		for(j=0;j<n;j++){
			scanf("%d",&w[j]);
			if(max<w[j]){
				max=w[j];
				c=0;
				r[i][c]=j;
			}else if(max==w[j]){
				c++;
				r[i][c]=j;
			}
		}
		r1[i]=c+1;
	}
	for(i=0;i<T;i++){
		printf("%d\n",r1[i]);
		for(j=0;j<r1[i];j++){
			printf("%d",r[i][j]);
			if(j!=r1[i]-1){
				printf(" ");
			}else{
				printf("\n");
			}
		}
	}
}
