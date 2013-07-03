/*************************************************************************
  > File Name: 6th.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月19日 星期二 17时47分45秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(){
	int T,N,i,j,len,left,maxLen;char s[1000][1001]={{0}};
	scanf("%d",&T);
	while(T--){
		scanf("%d",&N);
		len=0;maxLen=0;
		for(i=0;i<N;i++){
			scanf("%s",s[i]);
			len=strlen(s[i]);
			if(maxLen<len){
				maxLen=len;
			}
		}
		left=0;
		maxLen=(maxLen%2==0?maxLen/2:(maxLen/2+1));
		for(j=0;j<N;j++){
			if(strlen(s[j])>=maxLen){
				left++; 
			}
		}
		printf("%d\n",left);
	}

	return 0;
}
