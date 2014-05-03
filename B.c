#include<stdio.h>
#include<string.h>
#define sf scanf
#define pf printf

int main()
{
	char a[10000];
	int i=0;
	char ch;
	while((ch=getchar())!='\n')
	{
		a[i]=ch;
		i++;
	}
	a[i]='\0';
	if(a[0] >= 'a' && a[0] <= 'z')
	  {
            a[0] = ('A' + a[0] - 'a');
      }
           
	printf("%s",a);
	
	return 0;
}
