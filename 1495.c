/*************************************************************************
  > File Name: 1495.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月30日 星期六 23时28分12秒
 ************************************************************************/

#include<stdio.h>
int in[20000]={0};
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
				if(a[r]<=a[l]){
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
int  partition(int low, int high)
{
	int tmp=in[low];
	int pivotkey=in[low];
	while(low<high)
	{
		while(low<high && in[high]>pivotkey) 
			--high;
		in[low]=in[high];
		while(low<high && in[low]<pivotkey)
			++low;
		in[high]=in[low];
	}
	in[low]=tmp;
	return low;
} 

void qSort(int low,int high)
{    
	if(low<high)
	{
		int pivotloc=partition(low,high);
		qSort(low,pivotloc -1);   
		qSort(pivotloc +1,high);         
	}         
}
int main(){
	int T,N,M,V,count=0,sumV=0,i,j,temp;
	scanf("%d",&T);
	while(T--){
		count=0;sumV=0;
		scanf("%d%d%d",&N,&M,&V);
		//printf("%d %d %d")
		for(i=0;i<N;i++){
			scanf("%d",&in[i]);
		}
		for(j=i;j<N+M;j++){
			scanf("%d",&temp);
			in[j]=temp/2;
		}
		//qsort(in,N+M,sizeof(int),compare);
		quick_sort(in,0,M+N-1);
		//qSort(0,M+N-1);
		for(i=0;i<M+N && in[i]<=(V-sumV);i++){
			count++;
			sumV+=in[i];
		}
		printf("%d\n",count);
	}
	return 0;
}
