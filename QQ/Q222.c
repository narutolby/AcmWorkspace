/*************************************************************************
  > File Name: Q222.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月22日 星期五 19时15分44秒
 ************************************************************************/

#include<stdio.h>
int main(){
	int T,l,r,ct,n,i,p[200],last;int flag=1;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&p[i]);
		}
		l=0;r=n-1;ct=0;last=0;

		flag=1;
		while(flag==1 && l<=r){
			while(l<=r){
				if(p[l]<=last){
					l++;
					continue;
				}
				if(p[l]!=p[r]){
					r--;
				}else{
					flag=0;
					last=p[l];
					if(l==r){
						if(ct==0){
						   flag=1;
						   last=0;
						   break;
						}else{
							ct++;
						}
					}else{
						ct+=2;
					}
					r--;
					l++;
				}
			}
			l++;r=n-1;
		}
		printf("%d\n",ct);
	}



	return 0;
}
