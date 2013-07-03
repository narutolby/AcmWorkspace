/*************************************************************************
  > File Name: next_permutation.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年01月08日 星期二 09时26分34秒
 ************************************************************************/

#include<stdio.h>
int num[1024];
void swap(int num[],int i,int j){
	int t=0;
	t=num[i];
	num[i]=num[j];
	num[j]= t;
}
void next_permutation(int num[],int len){
	int i=0,j=len;
	for(;i<=len;i++){
		printf("%d",num[i]);
	} 
	printf("\n");

	while(j>0){
		if(num[j]>num[j-1]){
			int minMax = num[j],n=j+1,minMaxIndex=j;
			for(;n<=len;n++){
				if(num[n]<minMax && num[n]>num[j-1]){
					minMax = num[n];	
					minMaxIndex = n;
				}
			}
			swap(num,j-1,minMaxIndex);
			int f=j,g=len;
			for(;f<g;f++,g--){
				swap(num,f,g); 
			}
			i=0;
			for(;i<=len;i++){
				printf("%d",num[i]);
			} 
			printf("\n");
           j=len;
		}else{
		  j--;
		} 
	}

}
int main(){
	int len=0;
	scanf("%d",&num[len]);
	while(num[len]!=-1){
		len++;
		scanf("%d",&num[len]);
	}
	next_permutation(num,len-1);
	return 0;
}
