#include<stdio.h>
int main()
{
	char start;
	char end;
	printf("Enter the starting letter of the country ");
	scanf("%c",&start);
	switch(start)
	{
	
		case'A':
		case'a':
		printf("Type the ending letter ");
		scanf(" %c",&end);
		switch(end)
		{
			case 'a':
			case 'A':
			printf("\nAlaska\nAlbania\nAlgeria");
			break;
			case'N':
			case'n':
				printf("\nAfghanistan\nAzerbaijan");
				break;
			default:
				printf("There is no such country");
				
				}
				break;
		
		case's':
			case'S':
				
				
				
					printf("Type the ending letter ");
					scanf(" %c",&end);
				switch(end)
				{
				
				
	case 'a':
	case 'A':
	printf("\nSouth Korea");
	break;
	case'b':
	case'B':
	printf("\nSaudi Arab");
	break;
	default:
	printf("There is no such country");
	

	}
	
	}
}
	

