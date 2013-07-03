/*************************************************************************
  > File Name: testScanf.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年04月04日 星期四 21时28分14秒
 ************************************************************************/

#include<stdio.h>
int main(){
	char c;int i;
	scanf("%d",&i);
	for(i=0;i<10;i++){
		getchar();
		scanf("%c",&c);
		printf("%c",c);
	}

	return 0;
}
