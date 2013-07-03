/*************************************************************************
  > File Name: Q221.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月22日 星期五 18时58分23秒
 ************************************************************************/

#include<stdio.h>
int main(){
	int N,HH,MM,SS,hh,mm,ss,zhouqi=12*3600,s1,s2,s3;
	scanf("%d",&N);
	while(N--){
       scanf("%d:%d:%d",&HH,&MM,&SS);
       scanf("%d:%d:%d",&hh,&mm,&ss);
       s1=3600*HH+MM*60+SS;
       s2=(3600*hh+mm*60+ss)%zhouqi;
	   if(s2>s1){
	    s1+=zhouqi;
	   }
       s3=s1-s2;
	   HH=s3/3600;
       s3=s3%3600;
	   MM=s3/60;
	   s3=s3%60;
	   SS=s3;
	   if(HH<10){
	     printf("0%d",HH);
	   }else{
	     printf("%d",HH);
	   }
	   printf("%c",':');
	   if(MM<10){
	     printf("0%d",MM);
	   }else{
	     printf("%d",MM);
	   }
	   printf("%c",':');
	   if(SS<10){
	     printf("0%d",SS);
	   }else{
	     printf("%d",SS);
	   }
	   printf("\n");
	}

	return 0;
}
