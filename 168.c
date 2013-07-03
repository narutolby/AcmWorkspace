/*************************************************************************
  > File Name: 168.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年04月05日 星期五 18时12分29秒
 ************************************************************************/

#include<stdio.h>
#define Max 15
char stack[Max];int top=-1;
char A32[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V'};
void push(char a){
	top++;
	stack[top]=a;
}
char pop(){
	char v=stack[top];
	top--;
	return v;
}
int isEmpty(){
	return top==-1?0:1;
}
int main(){
	long long n;
	while(scanf("%lld",&n)!=EOF){
		if(n==0){
			printf("%d\n",0);
			continue;
		}
		while(n>0){
			push(A32[n%32]);
			n=n/32;
		}
		while(isEmpty()){
			printf("%c",pop());
		}
		printf("\n");
	}
	return 0;
}
