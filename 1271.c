/*************************************************************************
	> File Name: 1271.c
	> Author: narutolby
	> Mail:willianlby@yahoo.cn
	> Created Time: 2013年02月06日 星期三 22时42分16秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int main(){
    int n=0,m=0;
	scanf("%d",&n);
    m=(int)sqrt(n);
	while(m*(m+1)<=n){
       m++;	
	}
	printf("%d\n",--m);
	return 0;
}
