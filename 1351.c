/*************************************************************************
  > File Name: 1351.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年02月06日 星期三 20时13分34秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
typedef struct qq{
	int Qgg; int Qmm; struct qq *next; } *QQ,Q;  
int main(){
	int count=1,flag=0,i=0; 
	char sum[101];
	QQ head=NULL,cur=NULL,temp=NULL;
	while(1){
		scanf("%d",&count);
		if(count==0){
			break;
		}
		temp = cur;
		cur = (QQ)malloc(sizeof(Q));
		cur->Qgg=-1;
		cur->Qmm=0;
		if(temp){
			temp->next = cur; 
		}
		if(flag==0){
			head = cur;
		}
		scanf("%s",sum);
		i=0;
		while(*(sum+i)!='\0'){
			*(sum+i)=='G'?cur->Qgg++:cur->Qmm++;
			i++;
		}
		flag++;
	}
	while(head){
		printf("%dQGG",head->Qgg);
		if(head->Qgg!=0 && head->Qgg!=1){
			printf("%c",'s');
		}
		printf(" %dQMM",head->Qmm);
		if(head->Qmm!=0 && head->Qmm!=1){
			printf("%c",'s');
		}
		printf("\n");
		temp = head;
		head = head->next;
		free(temp);
	}
	return 0;
}
