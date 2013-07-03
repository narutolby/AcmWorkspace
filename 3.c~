/*************************************************************************
  > File Name: 3.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年04月05日 星期五 19时10分41秒
 ************************************************************************/

#include<stdio.h>
int find(int buff[],int k,char flag){
	if(flag=='f' && k==0 || k==-1){
		return -1;
	}
	int min=(buff[0]+buff[1])>buff[2]?buff[2]:buff[0]+buff[1];
	if(flag=='t'){
		if(buff[3]<=k){
			return buff[3];
		}else if(buff[3]-buff[0]<=k){
			return buff[3]-buff[0];
		}else if(buff[3]-buff[1]<=k){
			return buff[3]-buff[1];
		}else if(buff[3]-min<=k){
			return buff[3]-min;
		}else if(min<=k){
			return min;
		}else if(buff[3]-buff[0]-buff[2]<=k){
			return buff[3]-buff[0]-buff[2];
		}else if(buff[3]-buff[1]-buff[2]<=k){
			return buff[3]-buff[1]-buff[2];
		}else{
			return 0;
		}
	}else{
		if(buff[3]<k){
			return buff[3];
		}else if(buff[3]-buff[0]<k){
			return buff[3]-buff[0];
		}else if(buff[3]-buff[1]<k){
			return buff[3]-buff[1];
		}else if(buff[3]-min<k){
			return buff[3]-min;
		}else if(min<k){
			return min;
		}else if(buff[3]-buff[0]-buff[2]<k){
			return buff[3]-buff[0]-buff[2];
		}else if(buff[3]-buff[1]-buff[2]<k){
			return buff[3]-buff[1]-buff[2];
		}else{
			return 0;
		}
	}
}
void sort(int buff[],int l,int r){
	int b=l,e=r,temp;char flag='l';
	if(l<r){
		while(l<r){
			if(flag=='l') {
				if(buff[r]<=buff[l]){
					temp=buff[l]; buff[l]=buff[r];buff[r]=temp;
					l++;
					flag='r';
				}else{
					r--;
				}
			}else{
				if(buff[r]<=buff[l]){
					temp=buff[l]; buff[l]=buff[r];buff[r]=temp;
					r--;
					flag='l';
				}else{
					l++; 
				} 
			}
		}
		sort(buff,b,l-1);
		sort(buff,l+1,e);
	}
}
int main(){
	int i,j,k,n,cas=0;int mark,sum=0,input[16384][4];int rank[16384]; double temp;
	scanf("%d",&n);
	while(n!=0){
		cas++;
		for(i=0;i<n;i++){
			sum=0;
			for(j=0;j<3;j++){
				scanf("%lf",&temp);
				input[i][j]=(int)(temp*100+0.00000001);
				sum+=input[i][j];
			}
			sort(input[i],0,2);
			input[i][3]=sum;
		}
		for(i=0;i<n;i++){
			scanf("%d",&rank[i]);
			if(i==0){
				mark=input[rank[i]-1][3];
			}else{
				if(rank[i]>rank[i-1]){
					mark=find(input[rank[i]-1],mark,'t');
				}else{
					mark=find(input[rank[i]-1],mark,'f');
				}
			}
		}
		if(mark==-1){
			printf("Case %d: %s\n",cas,"No solution");
		}else{
			printf("Case %d: %0.2f\n",cas,(mark)/100.0);
		}
		scanf("%d",&n);
	}
	return 0;
}
