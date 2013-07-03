/*************************************************************************
  > File Name: 7thA.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月20日 星期三 19时10分26秒
 ************************************************************************/

#include<stdio.h>
int main(){
	int m,n,matrix[50][50],i,j,sum;
	while(scanf("%d %d",m,n)!=EOF){
		sum=0;
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				scanf("%d",&matrix[i][j]);
				sum+=matrix[i][j];
			} 
		} 
		if(sum%(m*n)!=0){
			printf("%s\n","NO");
			continue;
		}

	}

	return 0;
}
