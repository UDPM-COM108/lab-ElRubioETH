#include <stdio.h>

int main() {
    float r;
    const float PI = 3.14;

    printf("Nhap ban kinh: ");
    scanf("%f", &r);

    float chuviHT = 2 * PI * r;
    float dientichHT = PI * r * r;

    printf("Chu vi hinh tron = %.2f\n", chuviHT);
    printf("Dien tich hinh tron = %.2f\n", dientichHT);

    return 0;
}
