/*************************************************************************
  > File Name: 11.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年02月18日 星期一 11时16分53秒
 ************************************************************************/

#include<stdio.h>
void quan(short p[],short bu[],short r[],short l){
	int i=0;
	if(l==4){
		for(i=0;i<4;i++){
			printf("%d ",r[i]);
		}
		printf("\n");
	}
	for(i=0;i<4;i++){
		if(bu[i]==1){
			continue;
		}
		bu[i]=1;
		r[l]=p[i];
		quan(p,bu,r,l+1);
		bu[i]=0;
	}

}
int main(){
	short buff[4]={0},b[4]={1,2,3,4},r[4]={0},l=0;
	quan(b,buff,r,l);
	return 0;
}
