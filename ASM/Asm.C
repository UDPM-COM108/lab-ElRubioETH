#include <stdio.h>
#include <math.h>
#include <string.h>  
// ======================= CHUC NANG 1 ==========================
void kiemTraSoNguyen() {
    int n;
    printf("Nhap 1 so nguyen: ");
    scanf("%d", &n);

    printf("\nSo %d %s la so nguyen.\n", n, (n == (int)n) ? "" : "khong");

    if (n % 2 == 0)
        printf("So %d la so chan.\n", n);
    else
        printf("So %d la so le.\n", n);
    if (n > 0)
        printf("So %d la so duong.\n", n);
    else if (n < 0)
        printf("So %d la so am.\n", n);
    else
        printf("So %d khong am khong duong.\n", n);

    int can = sqrt(n);
    if (can * can == n)
        printf("So %d la so chinh phuong.\n", n);
    else
        printf("So %d khong la so chinh phuong.\n", n);
}

// ======================= CHUC NANG 2 ==========================
int UCLN(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void timUocBoi() {
    int x, y;
    printf("Nhap 2 so nguyen (x y): ");
    scanf("%d %d", &x, &y);

    int u = UCLN(x, y);
    int b = (x * y) / u;

    printf("Uoc so chung lon nhat: %d\n", u);
    printf("Boi so chung nho nhat: %d\n", b);
}

// ======================= CHUC NANG 3 ==========================
void tienKaraoke() {
    int start, end;
    printf("Nhap gio bat dau: ");
    scanf("%d", &start);
    printf("Nhap gio ket thuc: ");
    scanf("%d", &end);

    int gio = end - start;
    int gia = 150000;
    float tong = 0;

    if (gio <= 3) tong = gio * gia;
    else tong = 3 * gia + (gio - 3) * gia * 0.7;

    if (start >= 14 && start <= 17)
        tong *= 0.9;

    printf("Tong tien: %.0f VND\n", tong);
}

// ======================= CHUC NANG 4 ==========================
void tinhTienDien() {
    int kwh;
    printf("Nhap so kWh: ");
    scanf("%d", &kwh);

    long tien = 0;

    if (kwh <= 50) tien = kwh * 1678;
    else if (kwh <= 100) tien = 50 * 1678 + (kwh - 50) * 1734;
    else if (kwh <= 200) tien = 50*1678 + 50*1734 + (kwh - 100)*2014;
    else if (kwh <= 300) tien = 50*1678 + 50*1734 + 100*2014 + (kwh - 200)*2536;
    else if (kwh <= 400) tien = 50*1678 + 50*1734 + 100*2014 + 100*2536 + (kwh - 300)*2834;
    else tien = 50*1678 + 50*1734 + 100*2014 + 100*2536 + 100*2834 + (kwh - 400)*2927;

    printf("So tien can tra: %ld VND\n", tien);
}

// ======================= CHUC NANG 5 ==========================
void doiTien() {
    int money;
    printf("Nhap so tien can doi: ");
    scanf("%d", &money);

    int menhgia[] = {500,200,100,50,20,10,5,2,1};

    for (int i = 0; i < 9; i++) {
        int sl = money / menhgia[i];
        if (sl > 0) {
            printf("%d to %d\n", sl, menhgia[i]);
        }
        money %= menhgia[i];
    }
}

// ======================= CHUC NANG 6 ==========================
void laiSuatVay() {
    long tien;
    printf("Nhap so tien muon vay: ");
    scanf("%ld", &tien);

    long conLai = tien;

    printf("Ky han | Lai phai tra | Goc phai tra | Tong tra | Con lai\n");

    for (int i = 1; i <= 12; i++) {
        long lai = conLai * 0.05;
        long goc = tien / 12;
        long tong = lai + goc;
        conLai -= goc;

        printf("%2d   | %10ld  | %10ld  | %10ld | %10ld\n", 
            i, lai, goc, tong, conLai);
    }
}

// ======================= CHUC NANG 7 ==========================
void vayMuaXe() {
    float pt;
    printf("Nhap %% tra truoc (VD: 20): ");
    scanf("%f", &pt);

    float giaXe = 500000000;
    float traTruoc = giaXe * pt / 100;
    float vay = giaXe - traTruoc;

    float lai = 0.072;
    int nam = 24;

    float gocMoiThang = vay / (nam * 12);
    float con = vay;

    printf("So tien tra truoc: %.0f\n", traTruoc);
    printf("Bang tra gop:\n");

    for (int i = 1; i <= nam * 12; i++) {
        float tienLai = con * lai / 12;
        float tong = gocMoiThang + tienLai;
        con -= gocMoiThang;

        printf("Thang %2d: %.0f\n", i, tong);
    }
}

// ======================= CHUC NANG 8 ==========================
void sapXepSinhVien() {
    int n;
    printf("Nhap so sinh vien: ");
    scanf("%d", &n);

    char ten[50][50];
    float diem[50];

    for (int i = 0; i < n; i++) {
        printf("Nhap ten SV %d: ", i+1);
        scanf("%s", ten[i]);
        printf("Nhap diem: ");
        scanf("%f", &diem[i]);
    }

    // sort giam dan
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (diem[i] < diem[j]) {
                float t = diem[i];
                diem[i] = diem[j];
                diem[j] = t;

                char tt[50];
                strcpy(tt, ten[i]);
                strcpy(ten[i], ten[j]);
                strcpy(ten[j], tt);
            }
        }
    }

    // in ket qua
    for (int i = 0; i < n; i++) {
        printf("%s - %.2f - ", ten[i], diem[i]);
        if (diem[i] >= 9) printf("Xuat sac\n");
        else if (diem[i] >= 8) printf("Gioi\n");
        else if (diem[i] >= 6.5) printf("Kha\n");
        else if (diem[i] >= 5) printf("Trung binh\n");
        else printf("Yeu\n");
    }
}

// ======================= CHUC NANG 9 ==========================
void fpolyLott() {
    int so;
    printf("Nhap so ban chon (0–15): ");
    scanf("%d", &so);

    int random = rand() % 15 + 1;

    printf("So trung: %d\n", random);

    if (so == random)
        printf("Chuc mung ban trung giai nhat!\n");
    else if (abs(so - random) == 1)
        printf("Ban trung giai nhi!\n");
    else
        printf("Chuc ban may man lan sau!\n");
}

// ======================= CHUC NANG 10 ==========================
void tinhPhanSo() {
    int a, b, c, d;
    printf("Nhap phan so 1 (a/b): ");
    scanf("%d/%d", &a, &b);

    printf("Nhap phan so 2 (c/d): ");
    scanf("%d/%d", &c, &d);

    printf("Tong = %d/%d\n", a*d + b*c, b*d);
    printf("Hieu = %d/%d\n", a*d - b*c, b*d);
    printf("Tich = %d/%d\n", a*c, b*d);
    printf("Thuong = %d/%d\n", a*d, b*c);
}

// ======================= MAIN MENU ==========================
int main() {
    int choice;

    do {
        printf("\n===== MENU CHUONG TRINH =====\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim UCLN & BCNN\n");
        printf("3. Tinh tien karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Doi tien\n");
        printf("6. Lai suat vay ngan hang\n");
        printf("7. Vay mua xe\n");
        printf("8. Sap xep thong tin sinh vien\n");
        printf("9. Game FPOLY-LOTT\n");
        printf("10. Tinh toan phan so\n");
        printf("0. Thoat\n");
        printf("Chon chuc nang: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: kiemTraSoNguyen(); break;
            case 2: timUocBoi(); break;
            case 3: tienKaraoke(); break;
            case 4: tinhTienDien(); break;
            case 5: doiTien(); break;
            case 6: laiSuatVay(); break;
            case 7: vayMuaXe(); break;
            case 8: sapXepSinhVien(); break;
            case 9: fpolyLott(); break;
            case 10: tinhPhanSo(); break;
            case 0: printf("Thoat chuong trinh!\n"); break;
            default: printf("Lua chon khong hop le!\n");
        }
    } while (choice != 0);

    return 0;
}
