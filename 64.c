/*************************************************************************
  > File Name: 64.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月10日 星期日 16时05分49秒
 ************************************************************************/

#include<stdio.h>
int main(){
	int T,i,j,n,children[30],rt[2]={0},a,sum=0;float result[30]={0.0},temp;
	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%d",&n);
		for(j=0;j<n;j++){
			scanf("%d",&children[j]);
		}
		scanf("%d %d %d",&rt[0],&rt[1],&a);
		sum=rt[0]+rt[1];
        temp=1.0;
		for(j=0;j<n;j++){
			temp=temp*rt[children[j]]/sum;
			sum+=a;
			rt[1-children[j]]+=a;
		}
		result[i]=temp;
	}
	for(i=0;i<T;i++){
         printf("%.3f\n",result[i]);
	}
	return 0;
}
