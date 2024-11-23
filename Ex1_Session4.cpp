#include <stdio.h>

int main() {
    int songuyen;

    printf("Nhap so nguyen: ");
    scanf("%d", &songuyen);

    if (songuyen > 0) {
        printf("%d là so duong\n", songuyen);
    } else if (songuyen < 0) {
        printf("%d là so am\n", songuyen);
    } else {
        printf("%d là so khong\n", songuyen);
    }

    return 0;
}

