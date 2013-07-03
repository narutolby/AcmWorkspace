/*************************************************************************
  > File Name: test1.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年05月08日 星期三 17时32分32秒
 ************************************************************************/

#include<stdio.h>
int main(){
	int max=0,N,a,b,array[10000]={0};
	scanf("%d",&N);
	while(N--){
		scanf("%d%d",&a,&b);
		int i=a;
		for(i=a;i<=b;i++){
			array[i]++;
		}
	}
	int j=0,temp=0;
	for(j=0;j<10000;j++){
	   if(array[j]==0){
		   if(max<temp){
		     max=temp;
		   }
		   temp=0;
	   }else{
	     temp++;
	   }
	}
	if(max<temp){
	  max=temp;
	}
	printf("%d\n",max-1);

	return 0;
}
