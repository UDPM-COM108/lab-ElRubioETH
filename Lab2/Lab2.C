#include <stdio.h>
#include <math.h>

// Bài 1: Tổng & Hiệu hai số nguyên
void bai1() {
    int x, y;
    printf("\n=== BAI 1: TONG - HIEU HAI SO NGUYEN ===\n");
    printf("Nhap x: ");
    scanf("%d", &x);
    printf("Nhap y: ");
    scanf("%d", &y);

    printf("Tong = %d\n", x + y);
    printf("Hieu = %d\n", x - y);
}

// Bài 2: Chu vi & Diện tích HCN
void bai2() {
    float cdai, crong;
    printf("\n=== BAI 2: HINH CHU NHAT ===\n");
    printf("Nhap chieu dai: ");
    scanf("%f", &cdai);
    printf("Nhap chieu rong: ");
    scanf("%f", &crong);

    printf("Chu vi HCN = %.2f\n", (cdai + crong) * 2);
    printf("Dien tich HCN = %.2f\n", cdai * crong);
}

// Bài 3: Chu vi & Diện tích hình tròn
void bai3() {
    float r;
    const float PI = 3.14f;
    printf("\n=== BAI 3: HINH TRON ===\n");
    printf("Nhap ban kinh: ");
    scanf("%f", &r);

    printf("Chu vi hinh tron = %.2f\n", 2 * PI * r);
    printf("Dien tich hinh tron = %.2f\n", PI * r * r);
}

// Bài 4: Điểm trung bình có hệ số (Toan*3, Ly*2, Hoa*1)
void bai4() {
    float toan, ly, hoa;
    printf("\n=== BAI 4: DIEM TRUNG BINH CO HE SO ===\n");
    printf("Nhap diem Toan: ");
    scanf("%f", &toan);
    printf("Nhap diem Ly: ");
    scanf("%f", &ly);
    printf("Nhap diem Hoa: ");
    scanf("%f", &hoa);

    printf("Diem Trung Binh = %.2f\n", (toan*3 + ly*2 + hoa) / 6.0f);
}

// Bài 5: Tam giác (Chu vi + Diện tích)
void bai5() {
    float A, B, C;
    printf("\n=== BAI 5: TAM GIAC (CHU VI + DIEN TICH) ===\n");
    printf("Nhap Canh A: ");
    scanf("%f", &A);
    printf("Nhap Canh B: ");
    scanf("%f", &B);
    printf("Nhap Canh C: ");
    scanf("%f", &C);

    float Chuvi = (A + B + C); 
    float DienTich = 0.5 * A * B; 
    printf("Chu Vi Hinh Tam Giac La = %.2f\n", Chuvi); 
    printf("Dien Tich Hinh Tam Giac La = %.2f\n", DienTich);
}

int main() {
    // Chạy tuần tự từ Bài 1 đến Bài 5
    bai1();
    bai2();
    bai3();
    bai4();
    bai5();

    printf("\n=== HOAN TAT TAT CA BAI ===\n");
    return 0;
}
