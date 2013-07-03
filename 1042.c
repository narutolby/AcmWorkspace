/*************************************************************************
  > File Name: 1042.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年02月06日 星期三 23时05分31秒
 ************************************************************************/

#include<stdio.h>
int main(){
	int n=-1,i=3,d=-1,num[1000]={0},count=0;
	while(1){
		scanf("%d",&n);
		if(n==0){
			break;
		}
		count++;
		while(n--){
				i=3;
			while(i--){
				scanf("%d",&d);
				if(i==1){
					if(d==2){
						num[count-1]+=1; 
					}	
				} 
			}	
		}

	}
	for(i=0;i<count;i++){
      printf("%d\n",num[i]);	
	}
	return 0;
}

