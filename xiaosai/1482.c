/*************************************************************************
	> File Name: 1482.c
	> Author: narutolby
	> Mail:willianlby@yahoo.cn
	> Created Time: 2013年03月26日 星期二 10时19分31秒
 ************************************************************************/

#include<stdio.h>
int main(){
   int T,N;
   scanf("%d",&T);
   while(T--){
      scanf("%d",&N);
      if(N%2==0 && N==2 || N%2==1){
	    printf("No\n");
	  }else{
	    printf("Yes\n");
	  }
   
   }
	return 0;
}

