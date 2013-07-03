/*************************************************************************
  > File Name: 581.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年02月12日 星期二 01时02分21秒
 ************************************************************************/

#include<stdio.h>
int main(){
	char s[1000];int i=0,max=0,sum=0;
	scanf("%s",s);
	while(s[i]!='\0') {
		sum=0;
		while(s[i]!='.' && s[i]!='\0'){
			sum++;	
			i++;
		}
		if(sum>max){
			max=sum;
		}
		if(s[i]=='\0')break;
		i++;
	}
	printf("%d\n",max);
	return 0;
}
