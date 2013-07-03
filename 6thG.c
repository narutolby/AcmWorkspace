/*************************************************************************
  > File Name: 6thG.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月19日 星期二 18时41分42秒
 ************************************************************************/

#include<stdio.h>
double c=0;
void count(int level,int f,double sum){
	if(level==8){
		if(f==sum){
			c++;
		}
		return;
	}
	int i;
	for(i=1;i<=6;i++){
		count(level+1,f+i,sum);
	} 
}
int main(){
	int C;double mod=6*6*6*6*6*6*6;
	while(scanf("%d",&C)!=EOF){
		c=0;
		if(C>42 || C<7){
			printf("%.4f\n",0.0);
		}else{
			count(1,0,C);
			printf("%0.4f\n",c/mod);
		}
	}
	return 0;
}
