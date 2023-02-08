#include<stdio.h>
int maximum(int a,int b);
main()
{
	int n1,n2,res;
	printf("Enter two numbers:\n");
	scanf("%d%d",&n1,&n2);
	res=maximum(n1,n2);
	printf("%d is a maximum number\n",res);	
}
int maximum(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;		
}
