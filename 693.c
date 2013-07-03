/*************************************************************************
  > File Name: 693.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年02月17日 星期日 19时38分30秒
 ************************************************************************/

#include<stdio.h>
int nu(int max,int min,int n,int p[],int len){
	int i,c=2,j=0;
	for(i=0;i<len;i++){
		if(p[i]>min && p[i]<max){
			for(j=0;j<len;j++){
				if(p[j]>p[i] && p[j]<max){
					c++;
				}
			}
			if(c==n){
				return p[i];
			}else if(c>n){
				return nu(max,p[i],n,p,len);
			}else if(c<n){
				return nu(p[i],min,n-c+1,p,len);
			}
		}

	}
}
int main(){
	int N=0,len=0,temp=0,p[201]={};int max=0,min=65535;
	scanf("%d",&N);
	len=2*N+1;
	temp=len;
	while(len--){
		scanf("%d",&p[len]);
		if(min>p[len]){
			min=p[len];
		}
		if(max<p[len]){
			max=p[len];
		}
	}
	printf("%d\n",nu(max,min,N+1,p,temp));
	return 0;
}
