/*************************************************************************
  > File Name: 165.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年02月27日 星期三 14时29分28秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(){
	char input[100][1000];int T,x,y,len;
	scanf("%d",&T);
	for(x=0;x<T;x++){
		scanf("%s",input[x]);
	}
	for(x=0;x<T;x++){
		len=strlen(input[x]);
		for(y=len-1;y>=0;y--){
			printf("%c",input[x][y]);
		}
		printf("\n");
	}

}
