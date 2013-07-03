#include<stdio.h>
#include<string.h>
int count_password(char str[],int start,int len,int r[100][1000],int t){
	if(r[t][start]!=0){
	  return r[t][start];
	}
	int _len=len-start,sum=0,sum1=0;
	if(_len==1 || _len==0){
		return 1;
	}
	if(str[start]!='0' && _len==2){
		return  2;
	}
	if(str[start]=='0' && _len==2){
		return  1;
	}
	if(_len>=3 && str[start]!='0'){
		sum=(str[start]-48)*100+(str[start+1]-48)*10+(str[start+2]-48);
		if(sum<=255){
			sum1=count_password(str,start+1,len,r,t)+count_password(str,start+2,len,r,t)+count_password(str,start+3,len,r,t);
			if(sum1>=1234567){
				r[t][start]=sum1%1234567;
			}else{
				r[t][start]=sum1;
			}
			return r[t][start];
		}else{
			sum1=count_password(str,start+1,len,r,t)+count_password(str,start+2,len,r,t);
			if(sum1>=1234567){
				r[t][start]=sum1%1234567;
			}else{
				r[t][start]=sum1;
			}
			return r[t][start];
		}
	}
	if(_len>=3 && str[start]=='0'){
		sum1=count_password(str,start+1,len,r,t);
		if(sum1>=1234567){
			r[t][start]=sum1%1234567;
		}else{
			r[t][start]=sum1;
		}
		return r[t][start];
	}
}
int main(){
	int t,i,len,r[100][1000]={{0}};
	scanf("%d",&t);char str[1000];
	for(i=0;i<t;i++){
		scanf("%s",str);
		len=strlen(str);
		printf("%d\n",count_password(str,0,len,r,i));
	}
	return 0;
}
