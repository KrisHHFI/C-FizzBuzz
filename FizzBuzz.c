#include <stdio.h>

int main()
{
    for (int number = 1; number <= 100; number++)
    {
        if ((number % 3 == 0) && (number % 5 == 0))
        { // If divisible by 3 and 5, print "Fizz Buzz"
            printf("Fizz Buzz\n");
        }
        else if (number % 3 == 0)
        { // If divisible by 3 "Fizz"
            printf("Fizz\n");
        }
        else if (number % 5 == 0)
        { // If divisible by 5 "Buzz"
            printf("Buzz\n");
        }
        else
        {
            printf("%d\n", number);
        }
    }

    return 0;
}