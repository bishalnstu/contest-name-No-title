#include<stdio.h>
char a[1001][1001];
int main()
{
	
	int n,ans,i,j;
	scanf("%d",&n);
	if(n%2==0)
	{
		ans=(n*n)/2;
		printf("%d\n",ans);
	}
	else
	printf("%d\n",(n*n)/2+1);
	
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		if(i==0&&j==0)
		{
		
		a[i][j]='C';
			
		}	
		 //if(i!=0&&j!=0)
		
			if((i+j)%2==0)
		{
			a[i][j]='C';
		}
		else if((i+j)%2!=0)
		{
				a[i][j]='.';
		}
		
		
		}
	 a[i][j]='\0';
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
