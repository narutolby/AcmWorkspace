/*************************************************************************
  > File Name: 10.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月27日 星期三 14时53分37秒
 ************************************************************************/

#include<stdio.h>
char rpg[]={'r','p','g'};char in[50];int sum=0,N;
void RPG(int n){
	if(n==N){
		return;
	}
	int i=0;
	for(i=0;i<3;i++){
		if(n==0){
			in[n]=rpg[i];
			RPG(n+1);
		}else if(n==N-1){
			if(rpg[i]==in[n-1] || rpg[i]==in[0]){
				continue;
			}else{
				sum++;	
			}
		}else{
			if(rpg[i]==in[n-1]){
				continue;
			}else{
				in[n]=rpg[i];
				RPG(n+1);
			}
		}

	}
}
int main(){
	while(scanf("%d",&N)!=EOF){
		sum=0;
		if(N==1){
			printf("%d\n",3);
		}else if(N==2 || N==3){
			printf("%d\n",6);
		}else{
			RPG(0);
			printf("%d\n",sum);
		}
	}

	return 0;
}
