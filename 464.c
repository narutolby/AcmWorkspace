/*************************************************************************
  > File Name: 464.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月09日 星期六 11时13分57秒
 ************************************************************************/

#include<stdio.h>
int main(){
	int months[]={31,28,31,30,31,30,31,31,30,31,30,31},year,month,day,yDiff,sum,i,m;
	char *days[]={"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
	scanf("%d %d %d",&year,&month,&day);
	sum=0;
	if(year%400==0){
		months[1]=29;
	}
	if(year%100!=0 && year%4==0){
		months[1]=29;
	}
	for(i=1900;i<year;i++){
		if(i%400==0 || i%100!=0 && i%4==0){
			sum+=366;
		}else{
			sum+=365;
		}
	}
	for(i=0;i<month-1;i++){
		sum=sum+months[i];
	}
	sum=sum+day;
	printf("%s\n",days[sum%7==0?6:sum%7-1]);
	return 0;
}
