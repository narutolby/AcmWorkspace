/*************************************************************************
  > File Name: 352.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月09日 星期六 15时53分21秒
 ************************************************************************/

#include<stdio.h>
int main(){
	int N,S,i,j,matrix[20][20]={{0}};
	scanf("%d %d",&N,&S);
	for(i=0;i<N;i++){
		for(j=0;j<=i;j++){
			matrix[j][i]=S%9==0?9:S%9;
			S++;
		}
	}
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(matrix[i][j]==0){
				printf("  ");
			}else{
				if(j==N-1){
					printf("%d",matrix[i][j]);
				}else{
					printf("%d ",matrix[i][j]);
				}
			}
		}
		printf("\n");
	}
	return 0;
}
