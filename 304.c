/*************************************************************************
  > File Name: 304.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月09日 星期六 00时03分22秒
 ************************************************************************/

#include<stdio.h>
void all1(int input[],int len,int weight[],int *max){
	int i,j,x,M;
	for(i=0;i<len;i++){
		for(j=i+1;j<len;j++) {
			while(input[i]-input[j]>1){
				input[i]--;
				input[j]++;
				M=0;
				for(x=0;x<len;x++){
					M+=weight[input[x]-1];
				}
				if(M>*max){
					*max=M;
				}
			}
		}

	}
}
int main(){
	int weight[50]={0},input[51]={0},n,num=0,i,p=0,*max=&p,r[1000]={0};
	while(scanf("%d",&n)!=EOF){
		*max=0;
		if(n==1){
			r[num]=0;
			num++;
			continue;
		}
		for(i=0;i<n-1;i++){
			scanf("%d",&weight[i]);
		}
		for(i=0;i<n;i++){
			if(i==0){
				input[i]=n-1;
				*max+=weight[input[i]-1];
			}else{
				input[i]=1;
				*max+=weight[0];
			}
		}
		all1(input,n,weight,max);
		r[num]=*max;
		num++;
	}
	for(i=0;i<num;i++){
		printf("%d\n",r[i]);
	}
	return 0;
}
