/*************************************************************************
  > File Name: 959.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月08日 星期五 10时00分46秒
 ************************************************************************/

#include<stdio.h>
void quick_sort(char i[],int l,int r){
	char flag='l',temp;int b=l,e=r;
	if(l<r){
		while(l<r){
			if(flag=='l'){
				if(i[r]<=i[l]){
					temp=i[r];i[r]=i[l];i[l]=temp;
					flag='r';l++;
				}else{
					r--;
				}
			}else{
				if(i[l]>i[r]){
					temp=i[r];i[r]=i[l];i[l]=temp;
					flag='l';r--;
				}else{
					l++;
				}
			}
		}
		quick_sort(i,b,l-1);
		quick_sort(i,l+1,e);
	}
}
int main(){
	int n,m,num=0,max=0,i,p=0;char in[100],r[10],h;
	scanf("%d",&n);
	num=n;	
	while(n--){
		scanf("%d",&m);
		scanf("%s",in);
		quick_sort(in,0,m-1);
		i=1;
		p=1;
		max=1;
		while(in[i]!='\0'){
			if(in[i]==in[i-1]){
				p++;
			}
			if(in[i]!=in[i-1]|| in[i+1]=='\0'){
				if(max<p){
					max=p;
					h=in[i-1];
				}
				p=1; 
			} 
			i++;
		}
		r[n]=h;
	}
	while(num--){
		printf("%c\n",r[num]);
	}
	return 0;
}
