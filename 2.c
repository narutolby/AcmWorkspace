/************************************************************************* > File Name: 2.c > Author:narutolby 
	> Created Time: 2013年01月02日 星期三 14时34分25秒
 ************************************************************************/

#include<stdio.h>
#define MAX_SIZE 102 
int main1(){
  int a = '0';
  printf("%d\n",a);
  return 0;
}
int main(){
  char a[MAX_SIZE],b[MAX_SIZE],c[MAX_SIZE+1];
  int i;
  for(i=0;i<=MAX_SIZE;i++){
    c[i] = '0';
  }
  int a_len,b_len; 
  void sub(char*a,char*b,char*c,int a_len,int b_len);
  void plus(char*a,char*b,char operation,char*c,int a_len,int b_len);
  scanf("%s %s",a,b);
  for(a_len=0;a[a_len]!='\0';a_len++);
  for(b_len=0;b[b_len]!='\0';b_len++);
  if(a[0]=='-'&& b[0]!='-') {
    plus(a+1,b,'-',c,a_len-1,b_len);
  }else if(a[0]=='-' && b[0]=='-'){
    sub(b+1,a+1,c,b_len-1,a_len-1);
  }else if(a[0]!='-' && b[0]!='-'){
    sub(a,b,c,a_len,b_len);
  }else if(a[0]!='-' && b[0]=='-'){
    plus(a,b+1,'+',c,a_len,b_len-1);
  }
	  return 1;
}
int max(int a,int b){
 if(a>=b){
   return a;
 }else{
   return b;
 }
} 
void mainSub(char*a,char*b,char*c,int a_len,int b_len,char operation){
   int i=a_len-1,j=b_len-1,k=a_len-1;
   *(c+k+1)= '\0';
   while(j>=0){
    int va = *(a+i)-48;
    int vb = *(b+j)-48;
	int vc = va - vb;
	int temp = 1;
	if(vc<0){
      while(*(a+i-temp)=='0'){
		*(a+i-temp) = '9';
        temp++;
	  }
		*(a+i-temp)=*(a+i-temp)- 1;
		vc +=10;
	}
    *(c+k)=vc+48; 
	j--;i--;k--;
   }
   while(i>=0){
    *(c+k)=*(a+k); 
	i--;k--;
   }
  if(operation=='-'){
	  putchar('-');
  }
  while(*(c+k+1)!='\0'){
    if(*(c+k+1)!='0'){
		break;
	}
	k++;
  }
     printf("%s",c+k+1);
  putchar('\n');
}
void sub(char*a,char*b,char*c,int a_len,int b_len){
   if(a_len>b_len){
      mainSub(a,b,c,a_len,b_len,'+');
   }else if(a_len<b_len){
      mainSub(b,a,c,b_len,a_len,'-');
   }else{
     int i;
	 for(i=0;i<a_len;i++){
       if(a[i]==b[i]){
	      continue;
	   }else if(a[i]>b[i]){
		   mainSub(a,b,c,a_len,b_len,'+');
		   break;
	   }else{
		   mainSub(b,a,c,b_len,a_len,'-');
		   break;
	   }
	 }
	 if(i==a_len)
	   printf("%c\n",'0');
   }
}
void plus(char*a,char*b,char operation,char*c,int a_len,int b_len){
  int c_len = max(a_len,b_len)+2;
  *(c+c_len) = '\0';
  int i=a_len-1,j=b_len-1,k=c_len-1; 
  while(i>=0 && j>=0){
   int va = *(a+i)-48;
   int vb = *(b+j)-48;
   int vc = *(c+k)-48;
   int sum = va + vb + vc;
   int temp = 0;
   while(sum>0){
	 *(c+k-temp)=sum % 10+48; 
	 sum = sum / 10;
     temp++; 
   }
   i--;j--;k--;
  }
  while(i>=0){
	  int va = *(a+i)-48;
	  int vc = *(c+k)-48;
	  int sum = va + vc;
	  *(c+k) =sum + 48; 
	  i--;k--;
  }
  while(j>=0){
	  int vb = *(b+j)-48;
	  int vc = *(c+k)-48;
	  int sum = vb + vc;
	  *(c+k) =sum + 48; 
	  j--;k--;
  }

  if(operation=='-'){
	  putchar('-');
  }
	  printf("%s\n",*(c+k)!='0'?(c+k):(c+k+1));
  
}
