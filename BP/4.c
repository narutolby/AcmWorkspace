/*************************************************************************
  > File Name: 4.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年04月13日 星期六 15时40分05秒
 ************************************************************************/

#include<stdio.h>
void getNext(char *p,int next[])
{
	int len,i,j;
	len=strlen(p);
	next[0]=0;
	for(i=1;i<len;i++)
	{
		j=next[i-1];
		while((p[i-1]!=p[j-1])&&(j!=0))
		{
			j=next[j-1];
		}
		next[i]=j+1;
	}
}
void kmp(char *t,char *p,int next[])
{
	int lent,lenp,i,j;
	lent=strlen(t);
	lenp=strlen(p);
	i=0;
	j=0;
	while(i<(lent))
	{
		if((j==-1)||(t[i]==p[j]))
		{
			i++;
			j++;
		}
		else
		{
			j=next[j]-1;
		}
	}
}
int main(){
	int T,i=1;
	char S1[50000],S2[50000];int next[5000];
	for(i=1;i<=T;i++){
       scanf("%s",S1);
       scanf("%s",S2);
       getNext(S2,next);
	   kmp(S1,S2,next);
	} 
	return 0;
}
