/*************************************************************************
  > File Name: 375.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年02月16日 星期六 10时18分52秒
 ************************************************************************/

#include<stdio.h>
int sqr(int a){
	int i=1;
	for(i=i;i<=a;i++){
       if(i*i>=a){
	     break;
	   }
	}
   if(i*i==a){
	   return i;
   }else{
     return i-1;
   }
}
int prim(int a){
	int i=0;	if(a==1){return 0;}
	if(a==2){return 1;}
	if(a%2==0){return 0;}
	for(i=3;i<=sqr(a);i+=2){
		if(a%i==0){
			return 0;
		} 
	}
	return 1;
}
int main(){
	int s=0,t=0,m=0,temp=0,in=0;
	int r[500000];
	scanf("%d %d",&s,&t);
	scanf("%d",&m);
	temp=m;
	while(temp--){
		scanf("%d",&in);
		if(in>=s && in<=t){
			r[temp]=prim(in);
		}else{
			r[temp]=2;
		}
	}
	while(m--){
		switch(r[m]){
			case 1: printf("%s\n","YES");break;
			case 0: printf("%s\n","NO");break;
			case 2: printf("%s\n","ERROR");break;
		}
	}
	return 0;
}
