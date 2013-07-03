/*************************************************************************
  > File Name: 2.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年04月07日 星期日 16时35分15秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
long long cal(long long m,long long n){
	return (m-1)*m*(n-1)*n/4;
}
int main(){
	long long T,i,N,M,K,j,k,max,q,x,y,temp,sum;
	scanf("%lld",&T);
	for(i=0;i<T;i++){
		scanf("%lld%lld%lld",&N,&M,&K);
		if(M<N){
			temp=M;M=N;N=temp;
		}
		if(K<4 || M*N<4){
			printf("Case #%lld: %lld\n",(i+1),0LL);
			continue;
		}else if(K>=M*N){
			printf("Case #%lld: %lld\n",(i+1),cal(M,N));
			continue;
		}else {
			max=0;
			sum=0;
			for(j=1;j<=M;j++){
				for(k=1;k<=N;k++){
					q=K-k*j;
					if((q>=0 && q<k && q<j) || (q==k && j==M && q<j) || (q==j && k==N && q<k)){
						x=j;y=k;
						sum=cal(x,y);
						if(x<y){
							temp=x;x=y;y=temp;
						}
						if(x==M){
							x=y;
						}
						if(q!=0){
							sum+=x*(q-1)*q/2;
						}
						if(max<sum){
							max=sum;
						}
					}
				}
			}
		}
		printf("Case #%lld: %lld\n",(i+1),max);
	}
	return 0;
}
