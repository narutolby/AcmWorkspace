/*************************************************************************
  > File Name: 576.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年02月27日 星期三 22时17分08秒
 ************************************************************************/

#include<stdio.h>
double f(int i){
	int m=1;
	do{
		m*=i; 
	}while(i-->1);
 return m;
}
int main(){
	int i;double r=0;
	for(i=1;i<=10;i++){
	   r=r+1/f(i);
	}
	printf("%.5f\n",r);
   return 0;
}
