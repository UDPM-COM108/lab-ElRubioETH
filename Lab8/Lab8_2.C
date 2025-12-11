#include <stdio.h>
#include <string.h>

#define LUONGCB 1500000      // Lương 1 ngày công
#define SONGAYQUYDINH 25     // Số ngày công chuẩn

struct NhanVien {
    char MANV[20];
    char HoTen[50];
    int SoNgayCong;
    long Luong;
};

void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

long tinhLuong(int soNgay) {
    if (soNgay <= SONGAYQUYDINH) {
        return soNgay * LUONGCB;
    } else {
        int du = soNgay - SONGAYQUYDINH;
        return SONGAYQUYDINH * LUONGCB + du * LUONGCB * 2;
    }
}

int main() {
    struct NhanVien nv[5];

    for (int i = 0; i < 5; i++) {
        printf("\n--- NHAN VIEN %d ---\n", i + 1);

        printf("Nhap MANV: ");
        scanf("%s", nv[i].MANV);
        clearBuffer();

        printf("Nhap Ho Ten: ");
        fgets(nv[i].HoTen, sizeof(nv[i].HoTen), stdin);
        nv[i].HoTen[strcspn(nv[i].HoTen, "\n")] = 0;

        printf("Nhap So Ngay Cong: ");
        scanf("%d", &nv[i].SoNgayCong);

        nv[i].Luong = tinhLuong(nv[i].SoNgayCong);
    }

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(nv[i].MANV, nv[j].MANV) > 0) {
                struct NhanVien temp = nv[i];
                nv[i] = nv[j];
                nv[j] = temp;
            }
        }
    }

    printf("\n===== DANH SACH NHAN VIEN (TANG DAN THEO MANV) =====\n");
    printf("MANV\tHoTen\t\tSoNgayCong\tLuong\n");

    for (int i = 0; i < 5; i++) {
        printf("%s\t%s\t\t%d\t\t%ld\n",
               nv[i].MANV,
               nv[i].HoTen,
               nv[i].SoNgayCong,
               nv[i].Luong);
    }

    return 0;
}
