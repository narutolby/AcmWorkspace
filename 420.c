/*************************************************************************
  > File Name: 420.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月12日 星期二 15时04分59秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
void build_max_heap(int in[],int i,int len){
	int left=2*i+1,right=2*i+2,largest,temp;
	if(left<len && in[left]>in[i]){
		largest=left;
	}else{
		largest=i;
	}
	if(right<len && in[right]>in[largest]){
		largest=right;
	}
	if(largest!=i){
		temp=in[i];in[i]=in[largest];in[largest]=temp;
		build_max_heap(in,largest,len);
	}

}
int main(){
	int N,K,*in,i,j,t;
	in=(int*)malloc(sizeof(int)*5000000);
	while(scanf("%d %d",&N,&K)!=EOF){
		for(i=0;i<N;i++){
			scanf("%d",&t);
			if(i<K-1){
				in[i]=t;
			}else if(i==K-1){
				in[i]=t;
				for(j=(i-1)/2;j>=0;j--){
					build_max_heap(in,j,K);
				} 
			}else{
				if(t<in[0]){
					in[0]=t;
					build_max_heap(in,0,K);
				}
			}
		}
		printf("%d\n",in[0]);
	}
	return 0;
}
