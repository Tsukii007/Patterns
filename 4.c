#include <stdio.h>
void pattern4(int N) {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}
int main() {
    int N;
    printf("Enter number of rows: ");
    scanf("%d", &N);
    pattern4(N);
    return 0;
}
