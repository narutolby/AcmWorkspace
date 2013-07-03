/*************************************************************************
  > File Name: 307.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年02月16日 星期六 14时13分57秒
 ************************************************************************/

#include<stdio.h>
int main(){
	int a,b,d[100][10]={{0}},i=0,num=0,t1=0;
	while(scanf("%d %d",&a,&b)!=EOF){
		for(i=a;i<=b;i++){
			t1=i;
			while(t1>0){
				d[num][t1%10]++;
				t1/=10;
			}
		}
		num++;
	}
	for(i=0;i<num;i++){
		for(a=0;a<10;a++){
			printf("%d",d[i][a]);
			if(a!=9){
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
