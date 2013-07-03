/*************************************************************************
  > File Name: 693.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年02月17日 星期日 19时38分30秒
 ************************************************************************/

#include<stdio.h>
void quick_sort(int p[],int l,int r){
	if(l<r){
	int a=p[l],l1=l,r1=r,t=0;char flag='l';
	while(l<r){
		if(flag=='l'){
			if(p[r]<a){
				t=p[r];p[r]=p[l];p[l]=t;
				flag='r';
				l++;
			}else{
				r--;
			}
		}else{
			if(p[l]>=a){
				t=p[r];p[r]=p[l];p[l]=t;
				flag='l';
				r--;
			}else{
				l++;
			}
		}
	}
	 quick_sort(p,l1,l-1);
	 quick_sort(p,l+1,r1);
	}
}
int main(){
	int N=0,len=0,temp=0,p[201]={};int max=0,min=65535;
	scanf("%d",&N);
	len=2*N+1;
	temp=len;
	while(len--){
		scanf("%d",&p[len]);
	}
	quick_sort(p,0,temp-1);
	printf("%d\n",p[N]);
	return 0;
}
