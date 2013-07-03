/*************************************************************************
  > File Name: xiaosai1.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月23日 星期六 12时49分00秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
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
int main(){
	int T,N,i,input[100],count,jishu;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&N);
		count=0;jishu=1;
		for(i=0;i<N;i++){
			scanf("%d",&input[i]);
		}
		quick_sort(input,0,N-1);
		for(i=1;i<N;i++){
			if(input[i]==input[i-1]){
				jishu++;
				if(i==N-1){
				  if(jishu>=3){
				    count++;
				  }
				}
			}else{
				if(jishu>=3){
					count++;	
				}
				jishu=1;
			}
		}
		memset(input,0,sizeof(int)*100);
		printf("%d\n",count);
	}
	return 0;
}
