/*************************************************************************
  > File Name: 909.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年02月16日 星期六 19时47分03秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n=0,temp,i=0;short index=0;float min=100000.0;
	scanf("%d",&n);
	float *p=(float*)calloc(n,sizeof(float));
	temp=n;
	for(i=0;i<temp;i++){
		scanf("%f",p+i);
	}
	temp=n;
	for(i=0;i<temp;i++){
		min=100000.0;
		for(n=0;n<temp;n++){
			if((int)p[n]==0)continue;
			if(p[n]<min){
				min=p[n];
				index=n;
			}
		}
		p[index]=0;
		printf("%d",index+1);
		if(i!=temp-1){
			printf(" ");
		}
	}
      printf("\n");
	return 0;
}
