/*************************************************************************
  > File Name: 278.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月09日 星期六 16时18分23秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
void reverse(char c[],int s,int e){
	int i=s,j=e;char temp;
	while(i<j){
		temp=c[i];c[i]=c[j];c[j]=temp; 
		i++;
		j--;
	}
}
int minChar(char *p,int len){
	int min=0,i=0,j=0;char minC='z';
	while(*(p+i)!='\0'){
		if(*(p+i)<minC){
			min=i;
			minC=*(p+i);
		}else if(*(p+i)==minC){
			j=0;
			while(*(p+(min+j)%len)==*(p+(i+j)%len) && j<len){
				j++;
			}
			if(*(p+(min+j)%len)>*(p+(i+j)%len)){
				min=i;
			}
		}
		i++;
	}
	return min;
}
int main(){
	int T,i,min,len;char str[30][100000];
	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%s",str[i]);
	}
	for(i=0;i<T;i++){
		len=strlen(str[i]);
		min=minChar(str[i],len);
		reverse(str[i],0,min-1);
		reverse(str[i],min,len-1);
		reverse(str[i],0,len-1);
		printf("%s\n",str[i]);
	}
	return 0;
}
