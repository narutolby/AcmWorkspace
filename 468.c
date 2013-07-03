/*************************************************************************
  > File Name: 468.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年02月23日 星期六 21时29分54秒
 ************************************************************************/

#include<stdio.h>
int line(int matrix[100][100],int s,int e,int x){
	int i,sum=0;
	for(i=s;i<=e;i++){
		sum+=matrix[x][i];
	}
	return sum;
}
int main(){
	int m,n,i,j,x,matrix[100][100]={{0}},max=0,MAX=0,p=0,t,c=0,r[1000]={0},num=0;
	while(scanf("%d %d",&n,&m)!=EOF){
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				scanf("%d",&matrix[i][j]);
			}
		}
		c=0;
		for(i=0;i<m;i++){
			for(x=i;x<m;x++){
				max=line(matrix,i,x,0);
				p=max;
				for(j=1;j<n;j++){
					if(p<0){
						p=0;
					}
					t=line(matrix,i,x,j);
					p=p+t;
					if(p>max){
						max=p;
					}
				}
				if(c==0){
					MAX=max;
				}else{
					if(max>MAX){
						MAX=max;
					}
				}
				c++;
			}
		}
		r[num]=MAX;
		num++;
	}
	for(i=0;i<num;i++){
		printf("%d\n",r[i]);
	}
	return 0;
}
