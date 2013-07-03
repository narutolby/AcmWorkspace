/*************************************************************************
  > File Name: 377_1.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月15日 星期五 19时27分56秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int N,m,i,j=0,t,input[200001],maxT=1,max=1,map[200001]={0},mod=200000;
	scanf("%d",&N);
	while(N--){
		j=1;max=1;maxT=1;
		scanf("%d",&m);
		memset(map,0,200001);
		for(i=1;i<=m;i++){
			scanf("%d",&input[i]);
			if(i==1){
				map[input[i]%mod+1]=1;
				continue;
			}
			if(map[input[i]%mod+1]<j || map[input[i]%mod+1]>=j && input[map[input[i]%mod+1]]!=input[i]){
				map[input[i]%mod+1]=i;
				if(i==m){
					maxT=i-j+1;
				}
			}else{
				maxT=i-j;
				j=map[input[i]%mod+1]+1;
			}
			if(max<maxT){
				max=maxT;
			}
		}
		printf("%d\n",max);
	}
	return 0;
}
