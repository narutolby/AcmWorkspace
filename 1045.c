/*************************************************************************
  > File Name: 1045.
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年02月14日 星期四 12时30分10秒
 ************************************************************************/

#include<stdio.h>
void quick_sort(int d[],int l,int h){
	if(l<h){
		int mid = d[l],temp=0,b=l,e=h;char flag='l';
		while(l<h){
			if(flag=='l'){
				if(d[h]<mid){
                  temp=d[h];d[h]=d[l];d[l]=temp; 
				  flag='r';
				}else{
                   h--;
				}
			}else{
		       if(d[l]>=mid){
                  temp=d[h];d[h]=d[l];d[l]=temp; 
				  flag='l';
			   }else{
			      l++;
			   }	
			}
		}
		quick_sort(d,b,l-1);
		quick_sort(d,l+1,e);
	}
}
int main(){
	int n=0,s=0,d[20000]={0},r[100]={0},i=0,j=0,temp=0,c=0,num=-1;
	scanf("%d %d",&n,&s);
	while(n!=0 && s!=0){
		c=0;
		temp=n;
		num++;
		while(temp--){
			scanf("%d",&d[temp]);
		}
		quick_sort(d,0,n-1);
		for(i=0;i<n;i++){
			for(j=n-1;d[i]+d[j]>s && j>i;j--){}
			c += j-i;
		}
		r[num]=c;
		scanf("%d %d",&n,&s);
	}
	for(i=0;i<=num;i++){
		printf("%d\n",r[i]);
	}
	return 0;
}
