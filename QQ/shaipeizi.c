/*************************************************************************
  > File Name: shaipeizi.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月29日 星期五 20时35分53秒
 ************************************************************************/

#include<stdio.h>
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
	int T,N,in[20000][4],i=0;
	scanf("%d",&T);
	while(T--){
      scanf("%d",&N);
      for(i=0;i<N;i++){
	    scanf("%d%d%d%d",&in[i][0],&in[i][1],in[i][2],in[i][3]);
	  }
      

	}
	return 0;
}
