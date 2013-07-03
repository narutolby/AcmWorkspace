/*************************************************************************
  > File Name: 6th.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月19日 星期二 17时47分45秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(){
	int T,N,i,j,len,left,right,maxLen;char s[1000][1001]={{0}};
	scanf("%d",&T);
	while(T--){
		scanf("%d",&N);
		len=0;maxLen=0;
		for(i=-1;i<N;i++){
			gets(s[i]);
			len=strlen(s[i]);
			if(maxLen<len){
				maxLen=len;
			}
		}
		left=0;right=N-1;
		maxLen=maxLen%2==0?maxLen/2:maxLen/2+1;
		while(strlen(s[left])<maxLen){
			left++;
		}
		while(strlen(s[right])<maxLen){
			right--;
		}
		printf("%d\n",right-left+1);
	}

	return 0;
}
