/*************************************************************************
  > File Name: 7thG.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月20日 星期三 19时35分51秒
 ************************************************************************/

#include<stdio.h>
void yuefen(int a1,int b1,int *a,int *b){
	if(b1==0 && a1!=1){
		*a=*a/a1;
		*b=*b/a1;
		return;
	}else if(b1==0 && a1==1){
		return;
	}
	yuefen(b1,a1%b1,a,b);
}
int main(){
	int n,*a=NULL,*b=NULL,a1,b1,i,r,x=1,y=1;
	scanf("%d",&n);
	while(n!=0){
    a=&x;b=&y;
	r=1;a1=1;b1=1;
			for(i=1;i<n;i++){
				if((a1+1)%b1==0 && (a1+1)/b1==2) {
					b1++;
				}
				a1++;
				*b=b1;*a=a1;
				if((*a)%(*b)==0){
					*b=1;
					*a=(*a)/(*b);
				}else{
					yuefen(a1,b1,a,b);
				}
				r+=*b;
			}
		printf("%d\n",r);
		scanf("%d",&n);
	}

	return 0;
}
