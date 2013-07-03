/*************************************************************************
  > File Name: 252.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年02月08日 星期五 00时03分13秒
 ************************************************************************/

#include<stdio.h>
void kuaipai(int*n,int len){
	if(len==0){
		return;	
	}
	int l=0,h=len-1,temp=0;
	char flag='l';
	while(l<h){
		if(flag=='l'){
			if(*(n+h)<=*(n+l)){
				temp=*(n+h);
				*(n+h)=*(n+l);
				*(n+l)=temp;
				l++;
				flag='h';
			}else{
				h--;	
			} 
		}else{
			if(*(n+l)>*(n+h)){
				temp=*(n+h);
				*(n+h)=*(n+l);
				*(n+l)=temp;
				h--;
				flag='l';
			}else{
				l++; 
			}
		}
	}
	kuaipai(n,l);
	kuaipai(n+l+1,len-l-1);
}
int main(){
	int c=0,len=0,r[100]={0},temp,count=0; 
	scanf("%d",&c);
	len=c;
	while(c--){
	    scanf("%d",&temp);
	    r[c]=temp;
	}
	kuaipai(r,len);
	for(c=1;c<len;c++){
		if(r[c]==r[c-1]){
	        count++;	
			r[c-1]=-1;
		}
	}
	printf("%d\n",len-count);
	for(c=0;c<len;c++){
		if(r[c]==-1){
		  continue;
		}
        printf("%d",r[c]);     
		if(c!=len-1){
	      putchar(' ');	
		}
	}
	printf("\n");
	return 0;
}

