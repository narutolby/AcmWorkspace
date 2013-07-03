/*************************************************************************
  > File Name: 61.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月28日 星期四 21时28分46秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
void reverse(char i[],int start,int end){
	char temp;
	while(start<end){
		temp=i[start];i[start]=i[end];i[end]=temp;
		start++;
		end--;
	}
}
int main(){
	char input[1200];int i=0,start=-1,end=-1;
	scanf("%s",input);
	int len=strlen(input);
	while(input[i]!='\0'){
		if(input[i]=='#'){
			i++;
			reverse(input,start,end);
			start=-1;
			end=-1;
			continue;
		}else if((input[i]>='a' && input[i]<='z'|| input[i]>='A' && input[i]<='Z') && start==-1 || start!=-1){
			if(start==-1){
				start=i;
				end=i;
			}else{
				end++;
			}
			if(i==len-1){
				reverse(input,start,end);
			}
		}
		i++;
	}
	reverse(input,0,len-1);
	printf("%s\n",input);
	return 0;
}

