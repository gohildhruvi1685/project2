#include<stdio.h>
main()
{
    int marks;
    printf("Enter your marks :");
    scanf("%d",&marks);
    
    if(marks >= 90)
    {
        printf("Your grade is A .Congratulations! You are eligible for the next level");
    }
    else if(marks>= 61 && marks <=80)
    {
        printf("Your grade is B .Congratulations! You are eligible for the next level");
    }
    else if(marks>= 51 && marks <=60)
    {
        printf("Your grade is C .Congratulations! You are eligible for the next level");
    }
    else if(marks >= 41 && marks <=50)
    {
        printf("Your grade is D .Congratulations! You are eligible for the next level");
    }
    else if(marks >= 21 && marks <=40)
    {
        printf("Your grade is F .Please try again next time");
    }
    else
    {
    	printf("plz Enter proper mark");
	}
}