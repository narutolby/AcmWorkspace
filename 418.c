/*************************************************************************
  > File Name: 418.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年02月18日 星期一 20时18分44秒
 ************************************************************************/

#include<stdio.h>
int main(){
	int N,a=0,i=0,c=0,k=0,num=0;
	while(scanf("%d",&N)!=EOF){
		num++;
		for(i=0;i<N;i++){
			scanf("%d",&a);
			if(k==a){
				c++;
			}else{
				if(c==0){
					k=a;
					c++;
				}else{
					c--;
				}
			}
		}
		printf("Case %d: %d\n",num,k);
		printf("\n");
	}
	return 0;
}
