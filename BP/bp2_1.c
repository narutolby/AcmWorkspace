#include<stdio.h>
#include<string.h>
#define M 230
#define INF 0x7FFFFFFF
#define min(a,b) a<b?(a):(b)
int residual[M][M],pre[M],f[M],q[M];
int n,m;

int bfs(int m1)
{
	int i;
	for(i=1;i<=m1;i++)
		f[i]=INF;
	q[0]=1;
	memset(pre,-1,sizeof(pre));
	int head=-1,tail=0,cur;
	while(head<tail)
	{
		++head;
		cur=q[head];
		if(cur==m)
			return f[m1];
		for(i=1;i<=m1;i++)
		{
			/*如果该点已经走过或者从cur到i的水渠的流量为0时*/
			if(pre[i]!=-1||residual[cur][i]==0)
				continue;
			pre[i]=cur;
			f[i]=min(f[cur],residual[cur][i]);
			++tail;
			q[tail]=i;
		}
	}
	return -1;
} 
int EK(int m1)
{
	int ans=0;
	while(1)
	{
		int tmp=bfs(m1);
		if(tmp==-1)
			return ans;
		ans+=tmp;
		int a=m1;
		int b;
		while(a!=1)
		{
			b=pre[a];
			residual[b][a]-=tmp;/* 正向流减小 */
			residual[a][b]+=tmp;/* 反向流增加 */
			a=b;
		}
	}
} 
void input()
{
	int x,y,z,i;
	memset(residual,0,sizeof(residual));
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&x,&y,&z);
		printf("%d %d %d\n",x,y,z);
		residual[x][y]+=z;/* 因为存在回路 */
		int max=0,temp=EK(i+1);
		//printf("temp%d\n",temp);
	    //if(max<temp){
		 //  max=temp;
	      // printf("%d %d\n",i+1,max);
		//}	
	}
}
int main()
{
	int T;
	scanf("%d",&T);
	int i=1;
	for(i=1;i<=T;i++){
		scanf("%d%d",&n,&m);
		input();
		printf("Case #%d:\n",i);
	}
	return 0;
}
