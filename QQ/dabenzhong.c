/*************************************************************************
  > File Name: dabenzhong.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月29日 星期五 18时31分45秒
 ************************************************************************/

#include<stdio.h>
int main(){
	int T,Q,qs=0,i=0;double times,x,t;
	scanf("%d",&T);
	while(T--){
		scanf("%lf",&x);
		i=0;
		scanf("%d",&Q);
		for(i=0;i<Q;i++){
			scanf("%d%lf",&qs,&t);
			if(qs==1){
				times=60*t-x*t; 
				printf("%.2lf\n",times);
			}else if(qs==2){
				times=t*60*60/(60-x);
				printf("%.2lf\n",times);
			}else{
				times=60*t*3600*12/x;
				printf("%.2lf\n",times);
			}
		}
	}
	return 0;
}
