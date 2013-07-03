/*************************************************************************
  > File Name: Q5.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月21日 星期四 19时43分27秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(){
	int sum=24*60,N=0,start,end,HH,MM;char times[24*60]={0};int i=0,j=0,count=0;
	while(scanf("%d",&N)!=EOF){
		for(i=0;i<N;i++){
			start=0;end=0;
			scanf("%d:%d",&HH,&MM);
			start=HH*60+MM;
			scanf("%d:%d",&HH,&MM);
			end=HH*60+MM;
			for(j=start+1;j<=end;j++){
				times[j]=1;
			} 
		}
		count=0;
		for(j=0;j<1440;j++){
			if(times[j]==0){
				count++;
			}
		}
		memset(times,0,sizeof(char)*24*60);
		printf("%d\n",count);
	}
	return 0;
}
