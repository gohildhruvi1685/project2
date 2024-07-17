#include<stdio.h>

main()
{
	int marks;
	
	printf("Enter your marks:");
	scanf("%d",&marks);
	
	switch(marks)
	{
		case 81 ... 100 :
			printf("Your grade is A .Excellent work!");
			break;
		case 61 ... 80 :
			printf("Your grade is B .Well done");
			break;
		case 41 ... 60 :
			printf("Your grade is C .Good job");
			break;
		case 33 ... 40 :
			printf("Your grade is D .You passed,but you could do better");
			break;
		case 21 ... 32 :
			printf("Your grade is E .Sorry, you failed");
			break;
		default :
			printf("please ,Enter correct mark");
	}
}