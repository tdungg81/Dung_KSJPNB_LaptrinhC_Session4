#include <stdio.h>

int main() {
    int songuyen;

    printf("Nhap so nguyen: ");
    scanf("%d", &songuyen);

    if (songuyen % 2 == 0) {
        printf("%d la so chan\n", songuyen);
    } else {
        printf("%d la so le\n", songuyen);
    }
    return 0;
}

