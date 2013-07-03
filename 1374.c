/************************************************************************
  > File Name: 1374.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年02月05日 星期二 21时20分28秒
 ************************************************************************/

#include<stdio.h>
int main(){
	int n,i,x=-1,y=0;
	int a[100][100]={{0}};
	puts("Please input order of the rotation matrix:");
	scanf("%d",&n);
	int flag = 0;
	for(i=1;i<=n*n;i++){
		if(flag==0){
			x++;
			a[x][y] = i;
			if(x+1==n || a[x+1][y]!=0){
				flag = 1; 
				a[x][y] = i;
			}
		}else if(flag==1){
			y++;
			a[x][y] = i;
			if(y+1==n || a[x][y+1]!=0){
				flag = 2; 
				a[x][y] = i;
			}
		}else if(flag==2){
			x--;
			a[x][y] = i;
			if(x==0 || a[x-1][y]!=0){
				flag = 3;
				a[x][y] = i;
			}
		}else if(flag==3){
			y--;
			a[x][y] = i;
			if(y==0 || a[x][y-1]!=0){
				flag = 0;
				a[x][y] = i;
			}
		}
	}
	puts("The rotation matrix is:");
	for(y=0;y<n;y++){
		for(x=0;x<n;x++){
			if(x==n-1){
				printf("%d\n",a[x][y]);
				break;
			}
			printf("%d ",a[x][y]);
		}
	}
	return 0;
}
