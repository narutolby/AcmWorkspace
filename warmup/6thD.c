/*************************************************************************
  > File Name: 6thD.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月19日 星期二 20时42分34秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int find(int p[],int x){
	if(p[x]==x)return x;
	else return p[x]=find(p,p[x]);
}
int main(){
	int T,N,p[1001],p1[1001]={0},i,j,x,c=0,count=0,times,hh,mm;int map[2500]={0};
	int max=-1,q,t=0;
	scanf("%d",&T);
	while(T--){
		for(i=1;i<=1001;i++){
			p[i]=i;
		} 
		scanf("%d",&N);
		memset(map,0,sizeof(int)*2500);
		memset(p1,0,sizeof(int)*1001);
		for(i=1;i<=N;i++){
			scanf("%d",&times);
			for(j=0;j<times;j++){
				scanf("%d:%d",&hh,&mm);
				c=hh*60+mm;
				if(map[c]==0){
					map[c]=i;
				}else{
					p[find(p,i)]=find(p,map[c]);
				}
			} 
		} 
		for(i=1;i<=N;i++){
			p1[find(p,p[i])]++;
		}
		max=-1;t=0;
		for(i=N;i>=1;i--){
			max=-1;
			for(j=1;j<=i;j++){
				if(max<p1[j]){
					max=p1[j];
					q=j;
				} 
			}
			t=p1[i];p1[i]=p1[q];p1[q]=t;
		}
		j=1;
		count=0;
		for(j=1;j<=N;j++){
			if(p1[j]>0){
				count++;
			}
		}
		printf("%d\n",count);
		int flag=0;
		for(j=1;j<=N;j++){
			if(p1[j]>0){
				if(flag==0){
					printf("%d",p1[j]);
					flag=1;
				}else{
					printf(" %d",p1[j]);
				}
			}
		}
		printf("\n");
	}
	return 0;
}
