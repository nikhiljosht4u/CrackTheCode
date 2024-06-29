// C Program for Checking value is Prime or not
#include <stdio.h>

int main()
{
    int N;
    int flag = 0;
    
    printf("Enter the number to be checked: ");
    scanf("%d", &N);
    
    for (int i = 2; i <= N / 2; i++)
    {
        if (N % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("%d is a Prime Number\n", N);
    else
        printf("%d is Not a Prime Number\n", N);
    
    return 0;
}

