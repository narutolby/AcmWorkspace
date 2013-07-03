/*************************************************************************
  > File Name: 11_a.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月11日 星期一 17时28分15秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int count(float input[],int num,char oper[],int sum){
	if(num==1){
		if(input[0]==sum){
			return 0;
		}else{
			return 1;
		}
	}
	int i,j,y,t,x,u=0;float input1[4]={0};
	short buffer[4]={0};
	for(j=0;j<num;j++){
		buffer[j]=1;
		for(y=0;y<num;y++){
			if(buffer[y]==1){
				continue;
			}
			buffer[y]=1;
			t=0;
			for(x=0;x<num;x++){
				if(buffer[x]==1){
					continue;
				}else{
					*(input1+t)=input[x];
					t++;
				}
			}
			for(i=0;i<4;i++){
				if(y<j && (oper[i]=='+'|| oper[i]=='*')){
				 continue;
				}
				if(oper[i]=='+'){
					*(input1+t)=input[j]+input[y];
				}else if(oper[i]=='-'){
					*(input1+t)=input[j]-input[y];
				}else if(oper[i]=='*'){
					*(input1+t)=input[j]*input[y];
				}else if(oper[i]=='/' && input[y]!=0){
					*(input1+t)=input[j]/input[y];
				}
				if(count(input1,num-1,oper,sum)==0){
					return 0;
				}
			} 
			buffer[y]=0;
		}          
		buffer[j]=0;
	}
	return 1;
}
int main(){
	int i=0,n=0;float input[4],sum;
	char*output[]={"Possible","Impossible"},oper[]={'+','-','*','/'};
	while(scanf("%f %f %f %f %f",&input[0],&input[1],&input[2],&input[3],&sum)!=EOF){
		printf("%s\n",output[count(input,4,oper,sum)]);
		n++;
	}
	return 0;
}
