/*************************************************************************
  > File Name: 7th.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月20日 星期三 17时04分10秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
char b[4][30][55],sentence[55*4];int max=0;
void str_fen(char dest[],char src[]){
  int l1=strlen(src),l2=strlen(dest);
  dest[l2-l1]='\0';
}
int squ(int x){
	return x*x;
}
int f(char word[]){
	int mark=0,j=0;int letter[26]={0};
	while(word[j]!='\0') {
		letter[word[j]-'a']++; 
		j++;	
	}
	for(j=0;j<26;j++){
		if(letter[j]>0){
			mark+=squ(letter[j]);
		} 
	} 
	return mark;
}
void digui(int record[],int level){
	int temp;
	if(level==4){
		temp=f(sentence);
		if(max<temp){
			max=temp;
		}
		return;
	}
	int i;
	for(i=0;i<record[level];i++){
		strcat(sentence,b[level][i]);
		digui(record,level+1);
		str_fen(sentence,b[level][i]);
	}

}
int main(){
	int T,n,i,j,record[4]={0};
	scanf("%d",&T);
	while(T--){
		sentence[0]='\0';
		max=0;
		for(i=0;i<4;i++){
			scanf("%d",&n);
			record[i]=n;
			for(j=0;j<n;j++){
				scanf("%s",b[i][j]);
			}
		}	
		for(i=0;i<record[0];i++){
			strcat(sentence,b[0][i]);
			digui(record,1);
			str_fen(sentence,b[0][i]);
		}
		printf("%d\n",max);
	}
	return 0;
}
