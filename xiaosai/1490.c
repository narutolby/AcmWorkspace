/*************************************************************************
  > File Name: 1490.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月26日 星期二 10时25分44秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#include<string.h>
double compare(double x1,double x2,double y1,double y2){
	double com=0;
	com=x1*y2-x2*y1; 
	if(com!=0){
		return com;
	}else{
		return x1*x1+y1*y1-x2*x2-y2*y2;
	}

}
void multi_sort(double point[2][100],int N){
	int i,j;double x1,y1,x2,y2,x0=point[0][0],y0=point[1][0],xT,yT; 
	for(i=N-1;i>=1;i--){
		for(j=1;j<=i-1;j++){
			x1=point[0][j]-x0;
			y1=point[1][j]-y0;
			x2=point[0][j+1]-x0;
			y2=point[1][j+1]-y0;
			if(compare(x1,x2,y1,y2)<0){
				xT=point[0][j];yT=point[1][j];
				point[0][j]=point[0][j+1];
				point[1][j]=point[1][j+1];
				point[0][j+1]=xT;
				point[1][j+1]=yT;
			}
		} 
	}
} 
int main(){
	int N,j;double point[2][100]={0},sum=0,t;
	while(scanf("%d",&N)!=EOF){
		sum=0;
		for(j=0;j<N;j++){
			scanf("%lf%lf",&point[0][j],&point[1][j]);
		}
		multi_sort(point,N);
		for(j=1;j<N-1;j++){
			t=(point[0][j]-point[0][0])*(point[1][j+1]-point[1][0])-(point[0][j+1]-point[0][0])*(point[1][j]-point[1][0]);
			sum=0.5*t+sum;
		}
		printf("%.1lf\n",sum);
		memset(point[0],0,sizeof(double)*100);
		memset(point[1],0,sizeof(double)*100);
	}
	return 0;
}
