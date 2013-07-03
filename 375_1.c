/*************************************************************************
  > File Name: 375_1.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年02月16日 星期六 12时18分03秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int s=0,t=0,m=0,temp=0,i=0,j=0;short r[500000],d[20000]={0};scanf("%d %d",&s,&t);d[0]=1;d[1]=1;
	for(i=2;i<=sqrt(t);i++){
		if(d[i]==1)continue;
		for(j=2*i;j<=t;j+=i){
			d[j]=1;
		}
	}
	scanf("%d",&temp);m=temp;
	while(temp--){
		scanf("%d",&i);
		if(i>=s && i<=t){
			r[temp]=d[i];}
		else{r[temp]=2;}}
		while(m--){
			switch(r[m]){case 0: printf("%s\n","YES");break;case 1: printf("%s\n","NO");break;case 2: printf("%s\n","ERROR");break;}}
		return 0;}

