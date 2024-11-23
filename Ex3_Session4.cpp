#include <stdio.h>

int main() {
    int songuyen;

    printf("Nhap so nguyen: ");
    scanf("%d", &songuyen);

    if (songuyen % 3 == 0 && songuyen % 5 == 0) {
        printf("%d chia het cho 3 và 5\n", songuyen);
    } else if (songuyen % 3 == 0) {
        printf("%d chia het cho 3\n", songuyen);
    } else if (songuyen % 5 == 0) {
        printf("%d chia het cho 5\n", songuyen);
    } else {
        printf("%d khong chia het cho 3 và 5\n", songuyen);
    }

    return 0;
}

