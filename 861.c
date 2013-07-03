/*************************************************************************
  > File Name: 86.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年01月28日 星期一 21时18分42秒
 ************************************************************************/

#include<stdio.h>
#define MAX_SIZE 1000000
void calc(char sub[],char* result){int i=0,j=0,t=0,temp_len=0;for(i=0;sub[i]!='\0';i++){if(i==0){sub[i]=sub[i];}else{t=sub[i]-48;t=t+(int)(sub[0]-48);j=0;while(t>=10){sub[j]=t%10+48;j++;j>temp_len?(temp_len=j,sub[j]='0'):(temp_len=temp_len);t=t/10+(int)(sub[j]-48);}if(t<10){sub[j]=t+48;}}}sub[temp_len+1]='\0';if(temp_len>0){calc(sub,result);}else{*result=sub[0];}} int main(){int T=0,i=0;scanf("%d",&T);char result[T];char input[MAX_SIZE];for(i=0;i<T;i++){scanf("%s",input);calc(input,result+i);}for(i=0;i<T;i++){printf("%c\n",result[i]);}return 0;}
