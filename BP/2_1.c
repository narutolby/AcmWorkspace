#include <stdio.h>
#include <math.h>
long long get(long long j)
{
	return j*(j-1)/2;
}
int main()
{
	int T,n,m,k,cas=0,temp;
	scanf("%d",&T);
	while (T--)
	{
		scanf("%d%d%d",&n,&m,&k);
		if (n<m){
			temp=n;n=m;m=temp;
		}
		int t=sqrt(k);
		int b=t>m?m:t;
		int a=k/b>n?n:k/b;
		long long max=0;
		for (;b>=2 && a<=n;--b,a=k/b)
		{
			long long sum=get(a)*get(b);
			int p=k-a*b;
			if (a<n)
			{
				sum=sum+get(p)*a;
			}
			else
			{
				sum=sum+get(p)*b;
			}
			if(max<sum){
			  max=sum;
			}
		}
		printf("Case #%d: %lld\n",++cas,max);
	}

	return 0;
}
