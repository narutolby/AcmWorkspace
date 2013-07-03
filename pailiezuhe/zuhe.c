/*************************************************************************
  > File Name: quanpailie.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年01月07日 星期一 11时40分34秒
 ************************************************************************/

#include<stdio.h>
int num[1024],buffer[1024],out[1024];
void take(int num[],int len,int index){
	int i=0;
	if(index>len){
      int j=0;
	  for(;j<=len;j++){
	     printf("%d",out[j]);
	  }
	  printf("\n");
	}
    for(;i<=len;i++){
		if(buffer[i]==1){
	        continue;	
		}
	    buffer[i]=1;
		out[index] = num[i];
		take(num,len,index+1);
		buffer[i]=0;
	
	} 

}
int main(){
	int len=0;
	scanf("%d",&num[len]);
	while(num[len]!=-1){
		buffer[len]=0;
		out[len]=-1;
		len++; 
		scanf("%d",&num[len]);
	}
	take(num,len-1,0);
	return 0;
}
