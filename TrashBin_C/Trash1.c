//매우 기초적인 학습용 코드 - 별피라미드!
#include <stdio.h>

int main() {
    int i, j, rows;

    printf("행의 수를 입력하세요: ");
    scanf("%d", &rows);

    for(i=1; i<=rows; ++i) {
        for(j=1; j<=rows-i; ++j) {
            printf(" ");
        }
        for(j=1; j<=2*i-1; ++j) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
