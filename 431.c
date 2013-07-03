/*************************************************************************
  > File Name: 431.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月14日 星期四 22时36分23秒
 ************************************************************************/

#include<stdio.h>
int main(){
	int N,i,sum,j;long long I[80000];char f='0';
	scanf("%d",&N);
	while(N!=0){
		i=0;
		for(i=0;i<N;i++){
			scanf("%lld",&I[i]);
		}
		if(N==1){
			printf("%d\n",0);
			scanf("%d",&N);
			continue;
		}
		sum=0;
		for(i=N-1;i>=0;i--){
			j=1;
			f='0';
			while(I[i]>I[i-j] && (i-j)==0){
				sum++;
				f='1';
				j++;
			}
			if(f=='1'){
			   j--;
			}
			if(I[i]<=I[i-j]){
				sum++;
			}
			i=i-j+1;
		}
		printf("%d\n",sum);
		scanf("%d",&N);
	}


	return 0;
}
