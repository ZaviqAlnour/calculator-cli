#include <stdio.h>
#include <math.h>
#include <ctype.h>

int menue();

int main(void)
{
     int choice;
     double num1, num2, result;

     while(1)
     {
        menue();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if(choice == 7)
        {
            printf("Exiting the calculator. Goodbye!\n");
            break;
        }

        if(choice < 1 || choice > 7)
        {
            printf("INVALID CHOICE! please try again. \n");
            continue;
        }

        printf("please ENTER first number: ");
        scanf("%lf", &num1);
        printf("please ENTER second number: ");
        scanf("%lf", &num2);

        switch (choice)
        {
            case 1: //addition
            result = num1 + num2;
            break;

            case 2: //subtraction
            result = num1 - num2;
            break;

            case 3: //multiply
            result = num1 * num2;
            break;

            case 4: //division
            if(num2 != 0)
            {
                result = num1 / num2;
            }
            else 
            {
                printf("Error: Division by ZERO is not allowed.\n");
                continue;
            }
            break;

            case 5: //modulus
            if((int)num2 != 0)
            {
                result = (int)num1 % (int)num2;
            }
            else 
            {
                printf("ERROR: Modulus by ZERO is not allowed. \n");
                continue;
            }
            break;

            case 6: //power
            result = pow(num1, num2);
            break;
        }

        printf("The result is: %.2lf\n", result);

         char c;
    printf("Do you want to continue? (y/n): ");
    scanf(" %c", &c);
    if(c == 'y')
    {
      continue;
    }
    else
    {
        printf("Exiting the calculator. Goodbye!\n");
        break;
    }
    }
}

int menue()
{
    printf("\n\n__________________________________\n");
    printf("Welcome to simple calculator!\n");
    printf("\nChoose one of the following options\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiply\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Power\n");
    printf("7. Exit\n");
}  
