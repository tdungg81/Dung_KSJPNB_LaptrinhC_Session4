#include <stdio.h>

int main() {
    int songuyen;

    printf("Nhap so nguyen: ");
    scanf("%d", &songuyen);

    if (songuyen > 0) {
        printf("%d l� so duong\n", songuyen);
    } else if (songuyen < 0) {
        printf("%d l� so am\n", songuyen);
    } else {
        printf("%d l� so khong\n", songuyen);
    }

    return 0;
}

