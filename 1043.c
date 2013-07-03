/*************************************************************************
  > File Name: 1043.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年02月17日 星期日 12时06分21秒
 ************************************************************************/

#include<stdio.h>
void ct(int n,short *p,short *q){
	short d[10]={0},i,t;
	while(n>0){
		t=n%10;
		if(t==9 || t==6){
			d[6]++;
		}else{
			d[t]++;
		}
		n/=10;
	}
	d[6]=(d[6]%2==0?d[6]/2:d[6]/2+1);
	for(i=0;i<9;i++){
		if(d[i]==0)continue;
		if(d[i]>*p){
			*p=d[i];
			*q=i;
		}
	}
}
int main(){
	int n=0,num=0;short r[1000]={0},a=0,b=0,*p=&a,*q=&b;
	scanf("%d",&n);
	while(n!=0){
		a=0;b=0;
		ct(n,p,q);
		r[num]=*p;
		num++;
		scanf("%d",&n);
	}
	for(n=0;n<num;n++){
		printf("%d\n",r[n]);
	}
	return 0;
}
