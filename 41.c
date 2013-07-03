/*************************************************************************
  > File Name: 41.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年02月25日 星期一 19时54分18秒
 ************************************************************************/
#include<stdio.h>
long pow1(int d,int n){
	long m=1,j=0;
	for(j=0;j<n;j++){
	   m=m*d; 
	}
	return m;
}
int main(){
	int i=0,p,j=0,d=1,c=0; long m=0;
	while(scanf("%d",&i)!=EOF){
		if(i==1){printf("%d\n",1);}
		else if(i==2){printf("%d\n",10);}
		else{
			i=i-2;
			p=10;
			for(j=0;j<i;j++){
				m=0;c=0;
				while(p>9){
					p=p-9;
					m+=pow1(10,c)*9;
					c++;
				}
				m+=p*pow1(10,c);
				p=m;
			}
			printf("%ld\n",m);
		}
	}
	return 0;
}
