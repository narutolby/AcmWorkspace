/*************************************************************************
  > File Name: 377.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年02月21日 星期四 09时36分12秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int indexOf(char *str1,char*str2){
	char *p;int i=0;p=strstr(str1,str2);
	if(p==NULL){
		return -1;
	}else{
		while(str1!=p){str1++;i++;}
	}
	return i;
}
int f(char str[200][200],int N,char buff[]){
	int ml,j,k,l,max=1,x=0;char *p;
	for(j=N-1;j>=x;j--){
		if(buff[j]==1){
		  continue;
		}
		p=str[j];ml=1;
		for(k=j-1;k>=0;k--){
			if(buff[k]==1){
			  continue;
			}
			if(indexOf(p,str[k])==0 && strlen(str[k])<strlen(p)){
				buff[k]==1;
				ml++;
				p=str[k];
			}
		} 
		if(ml>max){
		  max=ml;
		  x=max-1;
		}
	}
	return max;
}
int main(){
	int T=0,N,i,j,c[50];char str[200][200],buff[200]={0};
	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%d",&N);
		for(j=0;j<N;j++){
			scanf("%s",str[j]);
		}
		c[i]=f(str,N,buff);
		memset(buff,0,200);
	}
	for(i=0;i<T;i++){
	 printf("Case #%d:\n",i+1);
	 printf("%d\n",c[i]);
	}
	return 0;

}
