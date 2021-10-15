#include<stdio.h>
main()
{
	int food;
	printf("Enter Your Prefered No.: \n1.Pizza, Rs.239 \n2.Burger, Rs.129 \n3.Pasta, Rs.179 \n4.French Fries, Rs.99 \n5.Sandwich, Rs.149 ");
	scanf("%d",&food);
	switch(food)
	{
		case 1:
			printf("Food Item - Pizza\n");
			printf("Price - 239");
			break;
		case 2:	
		    printf("Food Item - Burger\n");
			printf("Price - 129");
			break;
		case 3:
			printf("Food Item - Pasta\n");
			printf("Price - 179");
			break;
		case 4:	
		    printf("Food Item - French Fries\n");
			printf("Price - 99");
			break;
		case 5:
			printf("Food Item - Sandwich\n");
			printf("Price - 149");
			break;
		default:	
			printf("No. not relevant");
		    
	}
	return 0;
}
