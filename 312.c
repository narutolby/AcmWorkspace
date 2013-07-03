/*************************************************************************
  > File Name: 312.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年02月12日 星期二 11时47分09秒
 ************************************************************************/

#include<stdio.h>
int l[100][100]={{0}},m=0;
int dfs(int x,int y,int visit[]){
	int t=-1;
	if(l[x][y]==1){
		return 1; 
	}
	int i=1;
	visit[x]=1;
	for(i=1;i<=m;i++){
	//printf("x%d i%d:lxi%d:vist%d\n",x,i,l[x][i],visit[i]);
		if(l[x][i]==1 && visit[i]!=1){
			t = dfs(i,y,visit);
			if(t==1){
				return 1;
			}
		}  
	}
	return 0;
}
int p(int d[],int n,int m){
	int num=1,i=0;
	for(i=1;i<n;i++){
		if(d[i]!=d[i-1]){
			int visit[100]={0};
            //printf("dfs%d,di%d,di-%d\n",dfs(d[i],d[i-1],visit),d[i],d[i-1]);
			if(!dfs(d[i],d[i-1],visit)){
				num++; 
			}
		}
	}
	return num;
}
int main(){
	int i=0,n=0,k=0,a=0,b=0,count=0,d[50000]={0},rr[1000]={0};
	scanf("%d %d",&n,&m);
	while(n!=0 && m!=0){
		for(i=0;i<n;i++){
			scanf("%d",&d[i]);	
		} 
		scanf("%d",&k);
		while(k--){
			scanf("%d %d",&a,&b);
			l[a][b]=1;
			l[b][a]=1;
		}
		rr[count]=p(d,n,m);
		count++;
		scanf("%d %d",&n,&m);
	}
	for(i=0;i<count;i++){
	   printf("%d\n",rr[i]);
	}
	return 0;
}


