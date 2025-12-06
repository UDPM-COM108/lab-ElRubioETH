#include <stdio.h>
#include <math.h>

int main() {
    int choice;

    do {
        printf("\n===== MENU CHUONG TRINH =====\n");
        printf("1. Tinh trung binh tong cac so chan tu min -> max\n");
        printf("2. Kiem tra so nguyen to\n");
        printf("3. Kiem tra so chinh phuong\n");
        printf("4. Thoat chuong trinh\n");
        printf("Moi ban chon: ");
        scanf("%d", &choice);

        switch(choice) {

            // ------------------ BÀI 1 ------------------
            case 1: {
                int min, max;
                printf("Nhap min: ");
                scanf("%d", &min);
                printf("Nhap max: ");
                scanf("%d", &max);

                int i = min;
                float tong = 0, bienDem = 0, trungBinh = 0;

                while(i <= max) {
                    if(i % 2 == 0) {
                        tong += i;
                        bienDem++;
                    }
                    i++;
                }

                if(bienDem == 0) {
                    printf("Khong co so chan nao trong khoang!\n");
                } else {
                    trungBinh = tong / bienDem;
                    printf("Trung binh = %.2f\n", trungBinh);
                }
                break;
            }

            // ------------------ BÀI 2 ------------------
            case 2: {
                int x, count = 0;
                printf("Nhap x: ");
                scanf("%d", &x);

                if(x < 2) {
                    printf("%d KHONG phai so nguyen to\n", x);
                    break;
                }

                for(int i = 2; i < x; i++) {
                    if(x % i == 0) {
                        count++;
                    }
                }

                if(count == 0)
                    printf("%d la so nguyen to\n", x);
                else
                    printf("%d KHONG phai so nguyen to\n", x);

                break;
            }

            // ------------------ BÀI 3 ------------------
            case 3: {
                int x;
                printf("Nhap x: ");
                scanf("%d", &x);

                int laCP = 0;

                for(int i = 1; i * i <= x; i++) {
                    if(i * i == x) {
                        laCP = 1;
                        break;
                    }
                }

                if(laCP == 1)
                    printf("%d la so chinh phuong\n", x);
                else
                    printf("%d KHONG phai so chinh phuong\n", x);

                break;
            }

            case 4:
                printf("Thoat chuong trinh...\n");
                break;

            default:
                printf("Lua chon khong hop le!\n");
        }

    } while(choice != 4);

    return 0;
}
