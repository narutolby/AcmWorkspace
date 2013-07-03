/*************************************************************************
  > File Name: 10_1.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月27日 星期三 19时13分07秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int main(){
	long long in[50],i,sum=0;int N;
	for(i=0;i<50;i++){
		in[i]=3*pow(2,i);
		if(i==0 || i==1){
			continue;
		}
		in[i]=in[i]-in[i-1];
	}	
	while(scanf("%d",&N)!=EOF){
		printf("%lld\n",in[N-1]);
	}
	return 0;
}
