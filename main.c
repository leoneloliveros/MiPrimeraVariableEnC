#include <stdio.h>
#include <stdlib.h>

int main()
{
    int limit = 9;
    int prev = 1;
    int next = 1;
    int current = 0;

    printf("\n%i", prev);

    for(int i = 1; i < limit; i++)
    {
        current = prev + next;
        prev = next;
        next = current;

        printf("\n%i", current);
    }
    return 0;
}
