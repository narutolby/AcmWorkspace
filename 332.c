/*************************************************************************
  > File Name: 332.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年04月05日 星期五 18时51分38秒
 ************************************************************************/

#include<stdio.h>
#define N 100000
int main(){
	int n,data[N]={0},i=0,j=0,m,count=0,sum=0,a,b;char s[6];
	while(scanf("%d",&n)!=EOF){
		count++;
		printf("Case %d:\n",count);
		for(i=0;i<n;i++){
			scanf("%d",&data[i]);
		}
		scanf("%d",&m);
		for(i=0;i<m;i++){
			sum=0;
			scanf("%s",s);
			scanf("%d%d",&a,&b);
			if(s[0]=='a'){
              for(j=a-1;j<b;j++){
			     sum+=data[j];
			  } 
			  printf("%d\n",sum);
			}else{
			  data[a-1]=b;
			}
		}
	}
	return 0;
}
