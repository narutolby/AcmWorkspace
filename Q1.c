/*************************************************************************
  > File Name: Q1.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月21日 星期四 18时58分21秒
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
	int C,N,P[15],Ai,i,times,count=1;
	scanf("%d",&C);
	while(C--){
		times=0;	
		scanf("%d",&N);
		for(i=0;i<N;i++){
			scanf("%d",&P[i]);
		}
		if(N==0){
			printf("%d\n",0);
			continue;
		}
		quick_sort(P,0,N-1);
		count=1;
		for(i=0;i<N;i++){
          if(i==0 || P[i]==P[i-1]){
		    continue;
		  }
		    count++; 
		}
		times=times+(4+6)*P[N-1]+N+count*5;
		printf("%d\n",times);
	}

	return 0;
}
