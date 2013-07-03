/*************************************************************************
  > File Name: 330.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月14日 星期四 10时24分37秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int main(){
	int N,i[10000],j,y;long long sum=0;
	scanf("%d",&N);
	for(j=0;j<N;j++){
		scanf("%d",&i[j]);
	}
	for(j=0;j<N;j++){
		for(y=j+1;y<N;y++){
		  sum+=abs(i[j]-i[y]); 
		}
	}
    printf("%lld\n",2*sum);
	return 0;
}
