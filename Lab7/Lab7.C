#include <stdio.h>
#include <string.h>

// ====== KHAI BÁO HÀM ======
void demNguyenAmPhuAm();
void dangNhap();
void sapXepChuoi();

// ====== HÀM MAIN ======
int main() {
    int choice;

    do {
        printf("\n=============== MENU ===============\n");
        printf("1. Dem nguyen am va phu am trong chuoi\n");
        printf("2. Dang nhap bang username va password\n");
        printf("3. Sap xep 5 chuoi theo chu cai\n");
        printf("4. Thoat chuong trinh\n");
        printf("===================================\n");
        printf("Moi ban chon (1-4): ");
        scanf("%d", &choice);
        getchar(); // an '\n' sau scanf

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
void demNguyenAmPhuAm() {
    char s[100];
    int n = 0; // so nguyen am
    int p = 0; // so phu am

    printf("\n--- Bai 1: Dem nguyen am va phu am ---\n");
    printf("Nhap chuoi: ");
    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        // chi tinh chu cai
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
void dangNhap() {
    char userSys[] = "admin";
    int passSys = 12345;

    char user[100];
    int pass;

    printf("\n--- Bai 2: Dang nhap ---\n");
    printf("Nhap username: ");
    fgets(user, sizeof(user), stdin);
    user[strcspn(user, "\n")] = '\0'; // xoa '\n'

    printf("Nhap password: ");
    scanf("%d", &pass);
    getchar(); // an '\n' de lan sau dung fgets

    if (strcmp(user, userSys) == 0 && pass == passSys) {
        printf("Dang nhap thanh cong!\n");
    } else {
        printf("Dang nhap that bai!\n");
    }
}

// ====== BAI 3: SAP XEP 5 CHUOI ======
void sapXepChuoi() {
    char s[5][20];
    char temp[20];

    printf("\n--- Bai 3: Sap xep 5 chuoi ---\n");
    printf("Nhap 5 chuoi:\n");
    for (int i = 0; i < 5; i++) {
        fgets(s[i], sizeof(s[i]), stdin);
        s[i][strcspn(s[i], "\n")] = '\0'; // xoa '\n'
    }

    // sap xep tang dan theo chu cai
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
