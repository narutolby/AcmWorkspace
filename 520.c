/*************************************************************************
  > File Name: 520.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月26日 星期二 22时20分53秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
void print_post_order(long long input[],long long start,long long end){
	if(start>end){
		return;
	}
	if(start==end){
		if(start==0){
			printf("%lld",input[start]);
		}else{
			printf("%lld ",input[start]);
		}
		return;
	}
	long long i=0,s=start+1,e=0;
	for(i=s;i<=end;i++){
		if(input[i]>input[start]) {
			break;
		}
		e++;
	}
	e=start+e;
	if(input[s]<input[start]){
		print_post_order(input,s,e);
	}
	print_post_order(input,e+1,end);
	if(start==0){
		printf("%lld",input[start]);
	}else{
		printf("%lld ",input[start]);
	}
}
long long main(){
	long long T,N,j,input[100]={0};
	scanf("%lld",&T);
	while(T--){
		scanf("%lld",&N);
		for(j=0;j<N;j++){
			scanf("%lld",&input[j]);
		}
		print_post_order(input,0,N-1);
		printf("\n");
		memset(input,0,sizeof(long long)*100);
	}
	return 0;
}
