/*************************************************************************
  > File Name: quanpailie.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年01月07日 星期一 11时40分34秒
 ************************************************************************/

#include<stdio.h>
int num[1024];
void swap(int*a1,int*a2){
//printf("%d,%d\n",*a1,*a2);
	int t;
	t=*a1;
	*a1=*a2;
	*a2=t;
}
void perm(int*point,int len){
	//	while(*point!=-1){
	//	printf("%d",*point);
	//    point++;
	//}
	if(*(point+1)==-1){
		while(len-->0){
			printf("%d ",num[len]);
		}
		printf("\n");
		return;
	}
	int *p1 = point,*t1=point;
	while(*point!=-1){
		//printf("%d",1);
		swap(p1,point);
		perm(t1+1,len);
		swap(p1,point);
		point++;
	}
}
int main(){
	int len=0;
	scanf("%d",&num[len]);
	while(num[len]!=-1){
		len++; 
		scanf("%d",&num[len]);
	}
	perm(num,len);
	return 0;
}
