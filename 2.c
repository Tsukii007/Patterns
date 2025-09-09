#include <stdio.h>
void pattern2(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
int main()
{
    int N;
    printf("Enter size of pattern: ");
    scanf("%d", &N);
    pattern2(N);
    return 0;
}
