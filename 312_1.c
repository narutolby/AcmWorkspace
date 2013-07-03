/*************************************************************************
  > File Name: 312.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年02月12日 星期二 11时47分09秒
 ************************************************************************/

#include<stdio.h>
int i=0,n=0,k=0,a=0,b=0,m=0,count=0,c[100]={0},d[50000]={0},rr[1000]={0};
int find(int f){
	if(c[f]==f)return f;
	return c[f]=find(c[f]);
}
int main(){
	scanf("%d %d",&n,&m);
	while(n!=0 && m!=0){
		for(i=1;i<=m;i++){
		   c[i]=i;
		}
		for(i=0;i<n;i++){
			scanf("%d",&d[i]);	
		} 
		scanf("%d",&k);
		while(k--){
			scanf("%d %d",&a,&b);
			a=find(a);b=find(b);
            if(a!=b){
			  c[a]=b;
			}
		}
		m=1;
		for(i=1;i<n;i++){
			//printf("di:%d,di-:%d\n",find(d[i]),find(d[i-1]));
			if(d[i]!=d[i-1] && find(d[i])!=find(d[i-1])){
				m++;	
			}
		} 
	rr[count]=m;
	count++;
	scanf("%d %d",&n,&m);
	}
	for(i=0;i<count;i++){
		printf("%d\n",rr[i]);
	}
	return 0;
}


