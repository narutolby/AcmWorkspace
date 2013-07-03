/*************************************************************************
  > File Name: 425.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年02月08日 星期五 23时33分55秒
 ************************************************************************/

#include<stdio.h>
int main(){
	int n=0,a[20000]={0},cur=0,last=0,temp,temp1=0,op=2;a[0]=1;scanf("%d",&n);
	while(cur<n-1){
		temp1=a[cur]*op+1;temp=last;
		while(temp1<a[temp]){
			a[temp+1]=a[temp];temp--;
		}
		if(temp1==a[temp]){
	     while(temp<last){
		   a[temp+1]=a[temp+2];temp++;
		 }	
		}else{
	     last++;	
		 a[temp+1]=temp1;
		}
		if(op==2){
			op=3;
		}else{
			op=2;
			cur++;
		}
	}
	printf("%d\n",a[n-1]);
	return 0;
}
