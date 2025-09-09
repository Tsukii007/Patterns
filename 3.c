#include <stdio.h>
void pattern3(int N)
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
int main()
{
    int N;
    printf("Enter size of pattern: ");
    scanf("%d", &N);
    pattern3(N);
    return 0;
}
