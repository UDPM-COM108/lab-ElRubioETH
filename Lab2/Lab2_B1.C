#include <stdio.h>

int main() {
    int x, y;
    printf("Nhap x: ");
    scanf("%d", &x);
    printf("Nhap y: ");
    scanf("%d", &y);

    int tong = x + y;
    int hieu = x - y;

    printf("Tong = %d\n", tong);
    printf("Hieu = %d\n", hieu);

    return 0;
}
