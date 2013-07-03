/*************************************************************************
  > File Name: next_permutation.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年01月08日 星期二 09时26分34秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int num[1024];
typedef struct test1{
	int len;
	int nextP;
	int num[1024];
}Test;
void printfArray(int num[],int len){
	int	i=0;
	for(;i<=len;i++){
		printf("%d",num[i]);
		if(i<len){
			printf(" ");
		}
	} 
		printf("\n");
}
void swap(int num[],int i,int j){
	int t=0;
	t=num[i];
	num[i]=num[j];
	num[j]= t;
}
void reverse(int num[],int start,int end){
	for(;start<end;start++,end--){
		swap(num,start,end); 
	}
}
void next_permutation(int num[],int len,int k){
	int j=len;
	int loop = 0;
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
			reverse(num,f,g);
			loop++;
			if(loop==k){
				printfArray(num,len);	
				break;
			}
			j=len;
		}else{
			j--;
		} 
	}
	if(loop<k){
		reverse(num,0,len);
		loop++;
		if(loop==k){
			printfArray(num,len);	
		}else{
			next_permutation(num,len,k-loop);
		}
	}

}
int main(){
	int times,time=0;
	scanf("%d",&times);
	Test *testArray[times] ;
//	printf("times:%d\n",times);
	for(;time<times;time++){
//		printf("current time:%d\n",time);
		Test *test = (Test*)malloc(sizeof(Test));
		scanf("%d %d",&test->len,&test->nextP);
//		printf("%d %d\n",test->len,test->nextP);
		int m =0;
		for(;m<test->len;m++){
			scanf("%d",&test->num[m]) ;
//			printf("%d ",test->num[m]);
		}
	//	printf("\n");
		testArray[time] = test;
	}
//	printf("end\n");
	time=0;
	for(;time<times;time++){
		Test *t1 = testArray[time];
		next_permutation(t1->num,t1->len-1,t1->nextP);
		free(t1);
	}
	return 0;
}
