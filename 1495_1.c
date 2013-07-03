
/*************************************************************************
  > File Name: 1495_1.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月30日 星期六 23时54分26秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int a[20005];
int compare(const void *a,const void *b){
	return (*(int*)a)-(*(int*)b);
}
void quick_sort(int a[],int l,int r){
	int s=l,e=r,temp;char flag='l';
	if(l<r){
		while(l<r){
			if(flag=='l'){
				if(a[r]<=a[l]){
					temp=a[r];a[r]=a[l];a[l]=temp;
					l++;
					flag='r';
				}else{
					r--;
				}	
			}else{
				if(a[r]<a[l]){
					temp=a[r];a[r]=a[l];a[l]=temp;
					r--;
					flag='l';
				}else{
					l++;
				}
			}
		}	
		quick_sort(a,s,l-1);
		quick_sort(a,l+1,e);
	}
}
int main() {
	int T,i,n,m,v,nm,vol;
	scanf("%d",&T);
	while(T--){
		scanf("%d %d %d",&n,&m,&v);
		nm=n+m;
		for(i=0;i<nm;i++){
			scanf("%d",&a[i]);
			if(i>=n){
				a[i]/=2;
			}
		}
		qsort(a,nm,sizeof(int),compare);
		vol=0;
		for(i=0;i<nm && vol+a[i]<=v;i++){
			vol+=a[i];
		}
		printf("%d\n",i);
	}
	return 0;
}
