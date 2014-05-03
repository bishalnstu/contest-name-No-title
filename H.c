#include<stdio.h>
#include<math.h>

int main()
{
	long long n,k;
	int i,j,h,count=0,u=0,p=0,l,v=0;
	
	scanf("%I64d %I64d",&n,&k);
	long long  a[n],b[n],c[n];
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			a[p++]=i;
			
		}
		
	}
	for(j=1;j<=n;j++)
	{
	if(j%2==0)
		{
			b[u++]=j;
		}	
	}
	
	for(h=0;h<p;h++)
	{
		c[h]=a[h];
		count++;
	}
	
	for(l=count;l<n;l++)
	{
		c[l]=b[v++];
	}
	printf("%I64d",c[k-1]);
	
	return 0;
}
