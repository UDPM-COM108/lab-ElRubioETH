#include <stdio.h>

int main() {
    int n, arr[100];
    int choice;

    do {
        printf("\n====== MENU ======\n");
        printf("1. Tinh trung binh tong cac so chia het cho 3 trong mang\n");
        printf("2. Tim gia tri lon nhat va nho nhat trong mang\n");
        printf("3. Hoan vi 2 so\n");
        printf("4. Thoat\n");
        printf("Moi ban chon: ");
        scanf("%d", &choice);

        switch(choice) {

        // ===== BÀI 1 =====
        case 1: {
            printf("Nhap so luong phan tu n: ");
            scanf("%d", &n);

            printf("Nhap mang: ");
            for(int i = 0; i < n; i++) {
                scanf("%d", &arr[i]);
            }

            int sum = 0, count = 0;
            for(int i = 0; i < n; i++) {
                if(arr[i] % 3 == 0) {
                    sum += arr[i];
                    count++;
                }
            }

            if(count == 0)
                printf("Khong co so nao chia het cho 3.\n");
            else
                printf("Trung binh = %.2f\n", (float)sum / count);

            break;
        }

        // ===== BÀI 2 =====
        case 2: {
            printf("Nhap so luong phan tu n: ");
            scanf("%d", &n);

            printf("Nhap mang: ");
            for(int i = 0; i < n; i++) {
                scanf("%d", &arr[i]);
            }

            int min = arr[0], max = arr[0];
            for(int i = 1; i < n; i++) {
                if(arr[i] < min) min = arr[i];
                if(arr[i] > max) max = arr[i];
            }

            printf("Gia tri nho nhat: %d\n", min);
            printf("Gia tri lon nhat: %d\n", max);

            break;
        }

        // ===== BÀI 3: HOÁN VỊ =====
        case 3: {
            int x, y, temp;
            printf("Nhap x: ");
            scanf("%d", &x);
            printf("Nhap y: ");
            scanf("%d", &y);

            temp = x;
            x = y;
            y = temp;

            printf("Sau khi hoan vi: x = %d, y = %d\n", x, y);
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
