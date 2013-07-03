/*************************************************************************
  > File Name: 1126.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月07日 星期四 19时32分14秒
 ************************************************************************/

#include<stdio.h>
int GCD(int a,int b){
   if(b==0){
     return a;
   }else{
     return GCD(b,a%b);
   }
}
int main(){
	int a,b,min,max;
	scanf("%d %d",&a,&b);
	if(a<=b){
      min=a;max=b;
	}else{
	  min=b;max=a;
	}
    printf("GCD(%d,%d) = %d\n",a,b,GCD(max,min));
	return 0;
}
