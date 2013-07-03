/*************************************************************************
  > File Name: 652.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月19日 星期二 09时53分18秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int count(char L[],char R[],char A[],char B[]){
	int lenL,lenR,lenA
		lenL=strlen(L),lenR=strlen(R),lenA=strlen(A),lenB=strlen(B);
  

}
int main(){
	int T;char L[19],R[19],A[19],B[19];
	scanf("%d",&T);
	while(T--){
		scanf("%s %s\n",L,R);
		scanf("%s %s",A,B);
		printf("%d\n",count(L,R,A)+count(L,R,B));
	}
	return 0;
}
