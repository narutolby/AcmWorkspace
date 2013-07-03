/*************************************************************************
  > File Name: baidu1.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年04月13日 星期六 20时09分40秒
 ************************************************************************/

#include<stdio.h>
#include<stdio.h>
int main(){
	int T,x,y,dp[1000][1000],i,j;
	scanf("%d",&T);
	for(i=1;i<1000;i++){
	  for(j=1;j<1000;j++){
	    dp[i][j]=dp[i-1][j]+dp[i][j-1];
	  }
	}
	while(T--){
       scanf("%d%d",&x,&Y);
       
	}




	return 0;
}
