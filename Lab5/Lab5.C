#include <stdio.h>

int main() {
    int choice;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Tim so lon nhat trong 3 so\n");
        printf("2. Kiem tra nam nhuan\n");
        printf("3. Hoan vi 2 so x va y\n");
        printf("0. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int a, b, c;
                printf("Nhap 3 so nguyen a, b, c: ");
                scanf("%d %d %d", &a, &b, &c);
                int max = a;
                if (b > max) max = b;
                if (c > max) max = c;
                printf("So lon nhat la: %d\n", max);
                break;
            }

            case 2: {
                int year;
                printf("Nhap nam: ");
                scanf("%d", &year);
                if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
                    printf("%d la nam nhuan\n", year);
                else
                    printf("%d khong phai la nam nhuan\n", year);
                break;
            }

            case 3: {
                int x, y, temp;
                printf("Nhap 2 so x va y: ");
                scanf("%d %d", &x, &y);
                printf("Truoc khi hoan vi: x = %d, y = %d\n", x, y);
                temp = x;
                x = y;
                y = temp;
                printf("Sau khi hoan vi: x = %d, y = %d\n", x, y);
                break;
            }

            case 0:
                printf("Thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le!\n");
        }

    } while (choice != 0);

    return 0;
}
