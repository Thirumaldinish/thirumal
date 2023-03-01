#include<stdio.h>
int main()
{
	int i,p,q,b=0,r;
	printf("enter valus for p and q");
	scanf("%d%d",&p,&q);
	printf("enter valus for r");
	scanf("%d",&r);
	for(i=p;i<=q;i++)
	{
		if(b==r)
		{
			b++;
			continue;
		}
		else
	
	printf("%d",i);
	b++;
}
}
