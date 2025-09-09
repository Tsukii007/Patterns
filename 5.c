#include <stdio.h>
void pattern5(int N) {
    for (int i = 0; i < N; i++) {
        for (int j = N; j > i; j--) {
            printf("* ");
        }
        printf("\n");
    }
}
int main() {
    int N;
    printf("Enter number of rows: ");
    scanf("%d", &N);
    pattern5(N);
    return 0;
}
