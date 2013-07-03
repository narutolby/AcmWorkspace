/*************************************************************************
  > File Name: 6thF.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月19日 星期二 19时19分40秒
 ************************************************************************/

#include<stdio.h>
int flag=0;
int mutl(int x){
	int n,o=1;
	for(n=0;n<x;n++){
		o=o*10; 
	}
	return o;
}
void qpl(int in[],int x,int level,int buff[],char temp[]){
	int j,count=0;
	if(level==8){
		if(buff[0]==0){
		  return;
		}
		for(j=0;j<8;j++){
			count=count+buff[j]*mutl(7-j);
		}
		if(count%x==0){
			flag=1;
		}
		return;
	}
	int i;
	for(i=0;i<8;i++){
		if(flag==1){
			return;
		}
		if(temp[i]==1){
			continue;
		}else{
			temp[i]=1;
			buff[level]=in[i];
			qpl(in,x,level+1,buff,temp);
			temp[i]=0;
		}
	}
}
int main(){
	int T,i,x,in[8],buff[8]={0};char temp[8]={0};
	scanf("%d",&T);
	while(T--){
		flag=0;
		for(i=0;i<8;i++){
			scanf("%d ",&in[i]);
		} 
		scanf("%d",&x);
		qpl(in,x,0,buff,temp);
		if(flag==0){
			printf("%s\n","No");
		}else{
			printf("%s\n","Yes");
		}
	}
	return 0;
}
