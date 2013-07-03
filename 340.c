/*************************************************************************
  > File Name: 340.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年02月11日 星期一 17时32分59秒
 ************************************************************************/

#include<stdio.h>
int main(){
	int n=-1,a[100]={0},num=0,f=0,s=0,min=8,i=0;
	scanf("%d",&n);
	while(n!=0){
		num++;
		min=8;
        for(i=1;i<=n;i++){
	      scanf("%d %d",&f,&s);
		  if((f+s)>min){
		     min=f+s;
			 a[num-1]=i;
		  }
		}
		scanf("%d",&n);
	}
	for(i=0;i<num;i++){
	  printf("%d\n",a[i]);
	}
  return 0;
}
