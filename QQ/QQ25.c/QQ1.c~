/*************************************************************************
  > File Name: QQ1.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月25日 星期一 18时42分03秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
long long getW(long long sum, float k1,float k2){
	return (k1+k2)*sum;
}
int main(){
	int T,i,n;float k1,k2;int j,input[10001]={0},days=1;long long k,sum=0;
	scanf("%d",&T);
	for(i=0;i<T;i++){
		days=1;sum=0;
		scanf("%d %f %f %lld",&n,&k1,&k2,&k);
		for(j=0;j<n;j++){
			scanf("%d",&input[j]);
			sum+=input[j];
		}
		if(sum>k){
			printf("Case #%d: %d\n",i+1,0);
		}else if(k1+k2==1 || k1+k2==0){
			printf("Case #%d: %d\n",i+1,1);
		}else if((k1+k2)<1 && (k1+k2)>=-1 && (k1+k2)!=0){
			printf("Case #%d: inf\n",i+1);
		}else{
			sum=getW(sum,k1,k2);
			while(sum<=k && sum!=0){
				days++;
				sum=getW(sum,k1,k2);
			}
			printf("Case #%d: %d\n",i+1,days);
		}
		memset(input,0,sizeof(int)*10001);
	}
	return 0;
}
