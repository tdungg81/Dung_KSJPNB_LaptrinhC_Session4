#include <stdio.h>

int main() {
    int so1, so2, so3;

    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &so2);
    printf("Nhap so nguyen thu ba: ");
    scanf("%d", &so3);

    if ((so3 > so1 && so3 < so2) || (so3 > so2 && so3 < so1)) {
        printf("%d nam trong khoang %d den %d\n", so3, so1, so2);
    } else {
        printf("%d khong nam trong khoang %d den %d\n", so3, so1, so2);
    }

    return 0;
}

