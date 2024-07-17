#include<stdio.h>
main()
{
    int marks;
    printf("Enter your marks :");
    scanf("%d",&marks);
							    
	(marks>= 90 )?printf("Your grade is A"):
	(marks>= 80)?printf("Your grade is B"):
	(marks>= 70)?printf("Your grade is C"):
	(marks >= 60)?printf("Your grade is D"):
	(marks >= 35)?printf("Your grade is E"):
			printf("Your grade is F");
	 					        
 
}