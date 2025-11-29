#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	if (scanf("%d", &n) != 1) return 0;
	if (n <= 0) {
		printf("Mang rong hoac n <= 0\n");
		return 0;
	}

	int x;
	long long sumDiv3 = 0;
	int countDiv3 = 0;
	int minVal = 0, maxVal = 0;

	for (int i = 0; i < n; ++i) {
		if (scanf("%d", &x) != 1) {
			// not enough input
			return 0;
		}
		if (i == 0) {
			minVal = maxVal = x;
		} else {
			if (x < minVal) minVal = x;
			if (x > maxVal) maxVal = x;
		}
		if (x % 3 == 0) {
			sumDiv3 += x;
			++countDiv3;
		}
	}

	// BAI 1: average of numbers divisible by 3
	if (countDiv3 > 0) {
		double avg = (double)sumDiv3 / countDiv3;
		printf("Bai 1 - Trung binh cac so chia het cho 3: %.2f\n", avg);
	} else {
		printf("Bai 1 - Khong co so nao chia het cho 3 trong mang.\n");
	}

	// BAI 2: min and max
	printf("Bai 2 - Gia tri nho nhat: %d\n", minVal);
	printf("Bai 2 - Gia tri lon nhat: %d\n", maxVal);

	return 0;
}

