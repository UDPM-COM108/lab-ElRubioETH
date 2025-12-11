#define _CRT_SECURE_NO_WARNINGS  // Giúp Visual Studio không cảnh báo về fgets
#include <stdio.h>
#include <string.h>

// Khai bao nguyen mau ham
void demNguyenAmPhuAm(void);
void dangNhap(void);
void sapXepChuoi(void);

int main(void) {
    int choice;

    do {
        printf("\n=============== MENU ===============\n");
        printf("1. Dem nguyen am va phu am trong chuoi\n");
        printf("2. Dang nhap bang username va password\n");
        printf("3. Sap xep 5 chuoi theo chu cai\n");
        printf("4. Thoat chuong trinh\n");
        printf("===================================\n");
        printf("Moi ban chon (1-4): ");

        if (scanf("%d", &choice) != 1) {
            // Neu nhap khong phai so
            printf("Nhap khong hop le! Vui long nhap so.\n");
            // Xoa bo phan con lai trong buffer
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) {}
            choice = 0; // de roi vao default
            continue;
        }

        // Xoa ky tu '\n' con lai trong buffer
        getchar(); 

        switch (choice) {
            case 1:
                demNguyenAmPhuAm();
                break;
            case 2:
                dangNhap();
                break;
            case 3:
                sapXepChuoi();
                break;
            case 4:
                printf("Tam biet onii-chan ~\n");
                break;
            default:
                printf("Lua chon khong hop le, vui long chon lai!\n");
        }
    } while (choice != 4);

    return 0;
}

// ====== BAI 1: DEM NGUYEN AM & PHU AM ======
void demNguyenAmPhuAm(void) {
    char s[100];
    int n = 0; // dem nguyen am
    int p = 0; // dem phu am

    printf("\n--- Bai 1: Dem nguyen am va phu am ---\n");
    printf("Nhap chuoi: ");

    if (fgets(s, sizeof(s), stdin) == NULL) {
        printf("Loi khi nhap chuoi!\n");
        return;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        // Chi xu ly chu cai
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
                c=='A'||c=='E'||c=='I'||c=='O'||c=='U') 
            {
                n++;
            } else {
                p++;
            }
        }
    }

    printf("Chuoi co %d nguyen am va %d phu am.\n", n, p);
}

// ====== BAI 2: DANG NHAP ======
void dangNhap(void) {
    const char userSys[] = "admin";
    const int  passSys   = 12345;

    char user[100];
    int pass;

    printf("\n--- Bai 2: Dang nhap ---\n");
    printf("Nhap username: ");

    if (fgets(user, sizeof(user), stdin) == NULL) {
        printf("Loi khi nhap username!\n");
        return;
    }
    // Xoa ky tu '\n' neu co
    user[strcspn(user, "\n")] = '\0';

    printf("Nhap password: ");
    if (scanf("%d", &pass) != 1) {
        printf("Nhap password khong hop le!\n");
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF) {}
        return;
    }

    // Xoa '\n' con lai trong buffer
    getchar(); 

    if (strcmp(user, userSys) == 0 && pass == passSys) {
        printf("Dang nhap thanh cong!\n");
    } else {
        printf("Dang nhap that bai!\n");
    }
}

// ====== BAI 3: SAP XEP 5 CHUOI ======
void sapXepChuoi(void) {
    char s[5][20];
    char temp[20];

    printf("\n--- Bai 3: Sap xep 5 chuoi ---\n");
    printf("Nhap 5 chuoi:\n");

    for (int i = 0; i < 5; i++) {
        printf("Chuoi %d: ", i + 1);
        if (fgets(s[i], sizeof(s[i]), stdin) == NULL) {
            printf("Loi khi nhap chuoi!\n");
            return;
        }
        // Xoa ky tu '\n' neu co
        s[i][strcspn(s[i], "\n")] = '\0';
    }

    // Sap xep tang dan theo thu tu chu cai (A -> Z)
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(s[i], s[j]) > 0) {
                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }

    printf("\nCac chuoi sau khi sap xep:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", s[i]);
    }
}
