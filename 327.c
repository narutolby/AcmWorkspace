/*************************************************************************
  > File Name: 327.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年04月04日 星期四 18时23分54秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int hash(char a){
	if(a=='S'){
		return 0;
	}else if(a=='R'){
		return 1;
	}else{
		return 2;
	}
}
int main(){
	int n,map[3]={0},i,count=0,re[3]={1,2,0};
	char a='1',b='1',aa,input[]={'S','R','C'},y;
	scanf("%d",&n);
	while(n!=1){
		getchar();
		memset(map,0,sizeof(map));
		count=0;
		a='1';
		b='1';
		n=n-1;
		for(i=0;i<n;i++){
			scanf("%c",&aa);
			getchar();
			map[hash(aa)]++;
		}
		for(i=0;i<3;i++){
			if(map[i]!=0){
				count++;
				if(a=='1'){
					a=input[i];
				}else{
					b=input[i];
				}
			}
		}
		if(count==3){
			printf("%c %c\n",'S','C');
		}else if(count==1){
			printf("%c\n",input[re[hash(a)]]);
		}else{
			if(input[re[hash(a)]]==b){
				y=b;
			}else{
				y=a;
			}
			if(a=='R' || b=='R'){
				if(re[hash(y)]<hash(y)){
					printf("%c %c",input[re[hash(y)]],y);
				}else{
					printf("%c %c",y,input[re[hash(y)]]);
				}
			}else{
				printf("%c",y);
			}
			printf("\n");
		}
		scanf("%d",&n);
	}
	return 0;
}
