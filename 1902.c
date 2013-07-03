/*************************************************************************
  > File Name: 1902.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月07日 星期四 20时17分45秒
 ************************************************************************/

#include<stdio.h>
int root(int n){
	if(n<10)return n;
	int sum=n,p=0;
	while(sum>=10){
		p=0;
		while(sum!=0){
			p=p+sum%10;
			sum/=10;
		}
		sum=p;
	}
	return sum;
}
int fx(int input[],int n){
	int i,p=1;
	for(i=n-1;i>=0;i--){
		p=root(input[i])*root(p)+1;
	}
	return p-1;
}
int main(){
	int n=0,input[100000]={0},r[1000]={0},num=0,i;
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
		  scanf("%d",&input[i]);
		}
		r[num]=fx(input,n);
        num++;
	}
	for(i=0;i<num;i++){
	  printf("%d\n",root(r[i]));
	}
	return 0;
}
