/*************************************************************************
  > File Name: 5.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年04月13日 星期六 16时00分55秒
 ************************************************************************/

#include<stdio.h>
int main(){
	int T,N,ca,cb,i;
	scanf("%d",&T);
	for(i=1;i<=T;i++){
		scanf("%d%d%d",&N,&ca,&cb);
        if(N==0 ||(ca==0 && cb==0)){
	      printf("Case #%d: %d",i,0);
		}else if(ca==cb){
	      printf("Case #%d: %d",i,1);
		}
	}	
	return 0;
}
