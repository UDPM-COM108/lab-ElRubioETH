#include <stdio.h>
#include <string.h>

struct SinhVien {
    char mssv[50];
    char tenSV[50];
    char nganhHoc[50];
    float diemTB;
};

int main() {
    struct SinhVien sv[50];
    int n;

    printf("Nhap so sinh vien: ");
    scanf("%d", &n);
    getchar(); // an Enter sau khi nhap n

    // --- BAI 1: NHAP SINH VIEN ---
    for (int i = 0; i < n; i++) {
        printf("\n--- Sinh vien %d ---\n", i + 1);

        printf("Nhap MSSV: ");
        scanf("%s", sv[i].mssv);
        getchar(); // an Enter sau MSSV

        printf("Nhap ten: ");
        fgets(sv[i].tenSV, sizeof(sv[i].tenSV), stdin);
        sv[i].tenSV[strcspn(sv[i].tenSV, "\n")] = '\0'; // xoa '\n'

        printf("Nhap nganh hoc: ");
        fgets(sv[i].nganhHoc, sizeof(sv[i].nganhHoc), stdin);
        sv[i].nganhHoc[strcspn(sv[i].nganhHoc, "\n")] = '\0'; // xoa '\n'

        printf("Nhap diem TB: ");
        scanf("%f", &sv[i].diemTB);
        getchar(); // an Enter sau diemTB
    } // <-- BỊ THIẾU NGOẶC NÀY Ở CODE CŨ

    // --- BAI 2: SAP XEP SINH VIEN THEO DIEM TANG DAN ---
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sv[i].diemTB > sv[j].diemTB) {
                struct SinhVien tmp = sv[i];
                sv[i] = sv[j];
                sv[j] = tmp;
            }
        }
    }

    printf("\n=== DANH SACH SAU KHI SAP XEP TANG DAN THEO DIEM TB ===\n");
    for (int i = 0; i < n; i++) {
        printf("\nMSSV: %s\n", sv[i].mssv);
        printf("Ten: %s\n", sv[i].tenSV);
        printf("Nganh: %s\n", sv[i].nganhHoc);
        printf("Diem TB: %.2f\n", sv[i].diemTB);
    }

    // --- BAI 3: TIM KIEM SINH VIEN THEO MSSV ---
    char mssvFind[50];
    int found = 0;

    printf("\nNhap MSSV can tim: ");
    scanf("%s", mssvFind);

    for (int i = 0; i < n; i++) {
        if (strcmp(mssvFind, sv[i].mssv) == 0) {
            printf("\n=== THONG TIN SINH VIEN TIM THAY ===\n");
            printf("MSSV: %s\n", sv[i].mssv);
            printf("Ten: %s\n", sv[i].tenSV);
            printf("Nganh: %s\n", sv[i].nganhHoc);
            printf("Diem TB: %.2f\n", sv[i].diemTB);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nKhong tim thay sinh vien!\n");
    }

    return 0;
}
