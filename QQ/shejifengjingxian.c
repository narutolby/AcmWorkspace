/*************************************************************************
  > File Name: shejifengjingxian.c
  > Author: narutolby
  > Mail:willianlby@yahoo.cn
  > Created Time: 2013年03月23日 星期六 12时04分57秒
 ************************************************************************/

#include<stdio.h>
int find(int bcj[],int x){
	if(bcj[x]==x)return x;
	else return bcj[x]=find(bcj,bcj[x]);
}
void init(int bcj[],int n){
	int i=0;
	for(i=0;i<=n;i++){
		bcj[i]=i;
	}
}
int main(){
	int i,n,m,u,v,w,bcj[100001],sum,huan=0,rootu,rootv;
	while(scanf("%d %d",&n,&m)!=EOF){
		init(bcj,n);
		sum=0;huan=0;
		for(i=1;i<=m;i++){
			scanf("%d %d %d",&u,&v,&w);
			rootu=find(bcj,u);
			rootv=find(bcj,v);
			if(rootu!=rootv){
				bcj[rootu]=rootv;
				sum+=w;
			}else{
				huan=1;	
			}
		} 
		if(huan==1){
			printf("%s\n","YES");
		}else{
			printf("%d\n",sum);
		}
	}
	return 0;

}
