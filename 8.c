/************************************************************************* > File Name: 8.c > Author: narutolby > Mail:willianlby@yahoo.cn
  > Created Time: 2013年02月08日 星期五 11时14分30秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
short jisuan(long n){
	short last=n%10;short temp=last;
	if(last==0||last==1||last==5||last==6){return last;}else if(last==4||last==9){temp=n%2;
        if(temp==0){ return ((short)pow(last,2))%10;}else{return last;}}else{temp=n%4;
	if(temp==0){return ((short)pow(last,4))%10;}else{return ((short)pow(last,temp))%10;}}
	return temp;}
int main(){long input=0;int n,i=0;short nu[100]={0};scanf("%d",&n);for(i=0;i<n;i++){scanf("%ld",&input);nu[i]=jisuan(input);}
	for(i=0;i<n;i++){printf("%d\n",nu[i]);}
	return 0;}
