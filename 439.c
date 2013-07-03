/*************************************************************************
  > File Name: 439.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年02月15日 星期五 19时29分47秒
 ************************************************************************/

#include<stdio.h>
int main(){
	int N,m,max=0,maxt=1,temp=-1,t,f=0,j,re[100];
	scanf("%d",&N);
	j=N;
	while(N--){
		temp=-1;max=0;maxt=1;f=0;
		scanf("%d",&m);
		if(m==1){
			scanf("%d",&t);
			re[N]=1;
			continue;	
		}
		while(m--){
			scanf("%d",&t);
			if(temp==-1){
				temp=t;
			}else{
				if(f==0){
					if(t-temp==1){
						f=1;
						maxt++;
					}else if(t-temp==-1){
						f=-1;
						maxt++;
					}
					temp=t;
					if(m==0){
						if(max<maxt){
							max=maxt;
						}
					}
				}else{
					if(t-temp==f){
						maxt++;
						if(m==0){
							if(max<maxt){
								max=maxt;
							}
						}
						temp=t;
					}else if(t-temp==(0-f)){
						f=0-f;
						if(max<maxt){
							max=maxt;
						}
						maxt=1;
						temp=t;
					}else{
						if(max<maxt){
							max=maxt;
						}
						temp=t;
						f=0;
						maxt=1;	
					}
				}
			}
		}
		re[N]=max;
	}
	while(j--){
		printf("%d\n",re[j]);
	}
	return 0;
}
