/*************************************************************************
  > File Name: 594.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月09日 星期六 22时47分43秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
void f_del(char str[],char a){
	int i=0;
	while(str[i]!='\0'){
		if(str[i]==a){
			i++;
			continue;
		}
		printf("%c",str[i]);
		i++;
	}
	printf("\n");
}
int main(){
	char str[100],c;
	scanf("%s\n%c",str,&c);
	f_del(str,c);
	return 0;
}
