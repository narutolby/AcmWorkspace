/*************************************************************************
  > File Name: 376.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年02月21日 星期四 20时29分26秒
 ************************************************************************/
#include<stdio.h>
#include<string.h>
int main(){
	char str[1000][20];int x,y,num=0,max,l,len;short b[1000]={0};
	while(scanf("%s",str[num])!=EOF){num++;}
	for(x=0;x<num;x++){
		for(y=x+1;y<num;y++){
			if(b[y]<=b[x]){
				l=1;len=1;
				while(l<strlen(str[x]) && l<strlen(str[y])){
					if(str[x][len]==str[y][len]){len++;}l++;
				}
				if(len>b[y]){b[y]=len;}
				if(len>b[x]){b[x]=len;}
			}
		}
		str[x][b[x]+1]='\0';printf("%s\n",str[x]);
	}
	return 0;
}
