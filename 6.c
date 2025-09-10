#include <stdio.h>
void pattern6(int N) {
    for (int i = 0; i < N; i++) {
        for (int j = N; j > i; j--) {
            printf("j ");
        }
        printf("\n");
    }
}
int main() {
    int N;
    printf("Enter number of rows: ");
    scanf("%d", &N);
    pattern6(N);
    return 0;
}
