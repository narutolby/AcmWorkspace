/*************************************************************************
  > File Name: 62.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月07日 星期四 09时35分52秒
 ************************************************************************/

#include<stdio.h>
 void erbu(int a,int b,int c){
  
 }

int main(){
	int N,input[20][3]={{0}},i,j,l;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d %d %d",&input[i][0],&input[i][1],&input[i][2]);
	}
	for(i=0;i<N;i++){
		l=input[i][0]%10;     
		for(j=1;j<10;j++){
			if((l*j)%10==input[i][2]){
				erbu(input[i][0],input[i][1],input[i][2]);
			}
		}
		if(j==10){
			printf("%s","No such number!");
		}
	}
	return 0;
}

