/*************************************************************************
  > File Name: 1080.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月06日 星期三 22时49分55秒
 ************************************************************************/

#include<stdio.h>
int main(){
	char p[401],c;int n=0,o=0,t=0,i=0;
	scanf("%s",p);
	while(*(p+i)!='\0'){
      c=*(p+i);
	  if(c=='9'){
	   n++;
	  }else if(c=='1'){
	   o++;
	  }else if(c=='2'){
	   t++;
	  }
      i++;
	}
    printf("%d\n",n);
    printf("%d\n",o);
    printf("%d\n",t);
	return 0;
}
