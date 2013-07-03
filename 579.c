/*************************************************************************
  > File Name: 579.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年02月12日 星期二 00时16分08秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(){
	char c[5][100],*r;int i=0;
	for(i=0;i<5;i++){
		scanf("%s",c[i]);
	}
	r=c[0];
	for(i=1;i<5;i++){
       if(strcmp(r,c[i])<0){
	      r=c[i];
	   }
	}
	printf("%s\n",r);
	return 0;
}
