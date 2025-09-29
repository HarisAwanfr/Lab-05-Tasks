#include<Stdio.h>
int main()
{
	int n1,n2,n3;
	printf("Enter three numbers\n");
	scanf("%d",&n1);
	scanf("%d",&n2);
	scanf("%d",&n3);
	if (n1>n2)
	{
		if(n1>n3)
		printf("%d is greatest ",n1);
		else
		printf("%d is greatest ",n3);
			}
			else 
			{
				if(n2>n3)
				printf("%d is greatest ",n2);
				else
				printf("%d is greatest ",n3);
			}
}
