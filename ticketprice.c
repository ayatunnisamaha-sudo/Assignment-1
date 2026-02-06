#include <cs50.h>
#include <stdio.h>


int main(void)

{

    int age;

    int student;

  printf("Enter age: ");

  scanf("%d", &age);



    printf("Are you a student? (1 = Yes, 0 = No): ");

    scanf("%d", &student);



    if (age < 12)

    {

        printf("Ticket Price = 50\n");

    }

    else if (age <= 60 && student == 1)

    {

        printf("Ticket Price = 80\n");

    }

    else if (age <= 60 && student == 0)

    {

        printf("Ticket Price = 100\n");

    }

    else

    {

        printf("Ticket Price = 60\n");
    }
       return 0;
}



