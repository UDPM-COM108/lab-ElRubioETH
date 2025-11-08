#include <stdio.h>

int main() {
    float r;
    const float PI = 3.14;

    printf("Nhap ban kinh: ");
    scanf("%f", &r);

    float chuviHT = 2 * PI * r;
    float dientichHT = PI * r * r;

    printf("Chu vi hinh tron = %.2f\n", chuviHT);
    printf("Dien tich hinh tron = %.2f\n", dientichHT);
  
    return 0;
}


//  #include <iostream>
//  using namespace std;

//  int main() {
//     float r;
//     const float PI = 3.14;

//     cout << "Nhap ban kinh: ";
//     cin >> r;

//     float chuviHT = 2 * PI * r;
//     float dientichHT = PI * r * r;

//     cout << "Chu vi hinh tron = " << chuviHT << endl;
//     cout << "Dien tich hinh tron = " << dientichHT << endl;

//     return 0;
// }
