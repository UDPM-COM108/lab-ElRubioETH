#include <stdio.h>
#include <math.h>

// ================== BAI 1: TINH HOC LUC ==================
void tinhHocLuc() {
    float dtb;
    printf("\n=== BAI 1: TINH HOC LUC ===\n");
    printf("Nhap diem trung binh (0 - 10): ");
    scanf("%f", &dtb);

    if (dtb < 0 || dtb > 10) {
        printf("Diem khong hop le! Phai trong khoang 0 - 10.\n");
    } else if (dtb >= 9) {
        printf("Hoc luc: Xuat Sac\n");
    } else if (dtb >= 8) {
        printf("Hoc luc: Gioi\n");
    } else if (dtb >= 6.5) {
        printf("Hoc luc: Kha\n");
    } else if (dtb >= 5) {
        printf("Hoc luc: Trung Binh\n");
    } else {
        printf("Hoc luc: Yeu\n");
    }
}

// ================== BAI 2: GIAI PHUONG TRINH BAC 1 ==================
void giaiPTBac1() {
    float a, b;
    printf("\n=== BAI 2: GIAI PHUONG TRINH BAC 1 (ax + b = 0) ===\n");
    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);

    if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh co vo so nghiem (VSN).\n");
        } else {
            printf("Phuong trinh vo nghiem.\n");
        }
    } else {
        float x = -b / a;
        printf("Phuong trinh co 1 nghiem: x = %.2f\n", x);
    }
}

// ================== BAI 3: GIAI PHUONG TRINH BAC 2 ==================
void giaiPTBac2() {
    float a, b, c;
    printf("\n=== BAI 3: GIAI PHUONG TRINH BAC 2 (ax^2 + bx + c = 0) ===\n");
    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);
    printf("Nhap c: ");
    scanf("%f", &c);

    if (a == 0) {
        // Tro thanh phuong trinh bac 1: bx + c = 0
        printf("Vi a = 0 nen phuong trinh tro thanh: %.2fx + %.2f = 0\n", b, c);
        // Tai su dung logic bai 2
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh co vo so nghiem (VSN).\n");
            } else {
                printf("Phuong trinh vo nghiem.\n");
            }
        } else {
            float x = -c / b;
            printf("Phuong trinh co 1 nghiem: x = %.2f\n", x);
        }
    } else {
        float delta = b * b - 4 * a * c;
        printf("Delta = %.2f\n", delta);

        if (delta < 0) {
            printf("Phuong trinh vo nghiem.\n");
        } else if (delta == 0) {
            float x = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x = %.2f\n", x);
        } else {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem phan biet:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }
}

// ================== MENU CHUONG TRINH ==================
int main() {
    int choice;

    do {
        printf("\n================ MENU CHUONG TRINH ================\n");
        printf("1. Tinh hoc luc sinh vien\n");
        printf("2. Giai phuong trinh bac 1 (ax + b = 0)\n");
        printf("3. Giai phuong trinh bac 2 (ax^2 + bx + c = 0)\n");
        printf("0. Thoat\n");
        printf("===================================================\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            tinhHocLuc();
            break;
        case 2:
            giaiPTBac1();
            break;
        case 3:
            giaiPTBac2();
            break;
        case 0:
            printf("Dang thoat chuong trinh...\n");
            break;
        default:
            printf("Lua chon khong hop le! Vui long chon lai.\n");
        }
    } while (choice != 0);

    return 0;
}
