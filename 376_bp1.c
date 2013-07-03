/*************************************************************************
  > File Name: 376.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年02月21日 星期四 20时29分26秒
 ************************************************************************/
#include<stdio.h>
#include<string.h>
int main(){
	char str[1000][20];int x,num=0,max,l,len;short b[1000]={0},flag;
	while(scanf("%s",str[num])!=EOF){num++;
		flag=0;
		for(x=num-2;x>=0;x--){
			if(flag==1 && b[num-1]!=b[x]){
			 continue;
			}
			l=1;len=1;
			while(l<strlen(str[x]) && l<strlen(str[num-1])){
				if(str[x][len]==str[num-1][len]){len++;}l++;
			}
			if(len>b[num-1]){b[num-1]=len;}
			if(len>b[x]){b[x]=len;}
			if(x==num-2){
			   if(b[x]<b[num-1]){
			     break;
			   }else if(b[x]==b[num-1]){
			        flag==1;
			   }
			}
		}
	}
	for(x=0;x<num;x++){
		str[x][b[x]+1]='\0';printf("%s\n",str[x]);
	}
	return 0;
}
