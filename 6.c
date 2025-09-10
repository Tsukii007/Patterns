#include <stdio.h>

void pattern6(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = N; j > i; j--)
        {
            printf("%d ", N - j + 1);
        }
        printf("\n");
    }
}
int main()
{
    int N;
    printf("Enter Number of Rows: ");
    scanf("%d",&N);
    pattern6(N);
    return 0;
}
