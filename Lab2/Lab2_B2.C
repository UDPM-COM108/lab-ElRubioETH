#include <stdio.h>

int main() {
    float cdai, crong;
    printf("Nhap chieu dai: ");
    scanf("%f", &cdai);
    printf("Nhap chieu rong: ");
    scanf("%f", &crong);

    float chuvi = (cdai + crong) * 2;
    float dientich = cdai * crong;

    printf("Chu vi HCN = %.2f\n", chuvi);
    printf("Dien tich HCN = %.2f\n", dientich);

    return 0;
}
