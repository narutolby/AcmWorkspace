/*************************************************************************
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年02月05日 星期二 17时11分09秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int main(){
	int start=100,end=990,i=0,temp=0,sum=0; 
	int a[10];
	for(i=start;i<=end;i++){
           temp = i;
		   while(temp){
            sum +=(int)pow(temp%10,3);
		    temp=temp/10;	
		   }
		   if(i==sum){
		     printf("%d ",i);
		   }
	
	}
	return 0;
}

