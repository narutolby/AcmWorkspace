/*************************************************************************
  > File Name: 376.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年02月21日 星期四 20时29分26秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(){
	char str[1000][20],*p[1000];int x,y,num=0;short buff[1000]={0};int max=0;
	while(scanf("%s",str[num])!=EOF){
		num++;
	}
	for(x=0;x<num;x++){
		p[x]="0";
		for(y=0;y<num;y++){
			if(buff[y]==-1){continue;}
			//printf("%s,%s,%d\n",str[y],p[x],strcmp(str[y],p[x]));
			if(strcmp(str[y],p[x])==1){
				max=y;
				p[x]=str[y];
			}
		}
		buff[max]=-1;
	}
	y=1;
	for(x=0;x<num;x++){
	  printf("%s ",p[x]);
	}
	printf("\n");
	for(x=1;x<num;x++){
	  while(y<strlen(p[x-1]) && y<strlen(p[x])){
	        if(p[x-1][y]!=p[x][y]){
			    p[x-1][y+1]='\0';
			    p[x][y+1]='\0';
				break;
			}  
			y++;
	  }
	}
	for(x=0;x<num;x++){
		printf("%s\n",str[x]);
	}
	return 0;
}
