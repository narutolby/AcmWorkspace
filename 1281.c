/*************************************************************************
	> File Name: 1281.c
	> Author: narutolby
	> Mail:willianlby@yahoo.cn
	> Created Time: 2013年02月11日 星期一 23时59分09秒
 ************************************************************************/

#include<stdio.h>
int main(){
  int a[3]={0},i=0,j=0,max=0;
  scanf("%d,%d,%d",&a[0],&a[1],&a[2]);
  for(i=0;i<3;i++){
    for(j=i+1;j<3;j++){
	  if((a[i]+a[j])*a[3-i-j]>max) {
	      max=(a[i]+a[j])*a[3-i-j];
	  }
	}
  }
  printf("%d\n",max);
  return 0;
}
