#include <stdio.h>
#include <stdlib.h>

void PrintYanghui(int n) {

	int arr[20][20] = { 0 };

	for (int row = 1; row <= n; row++) {

		for (int col = 1; col <= row; col++) {

			if (col == 1 || col == row) {

				arr[row][col] = 1;

			}

			else {

				arr[row][col] = arr[row - 1][col - 1] + arr[row - 1][col];

			}

			printf("%d ", arr[row][col]);

		}

		printf("\n");

	}

}

int main() {

	PrintYanghui(17);

	system("pause");

	return 0;

}

2.猜凶手

#include <stdio.h>

#include <stdlib.h>

void FindMurder() {

	char murder = 'A';

	for (; murder <= 'D'; murder++) {

		if ((murder != 'A') + (murder == 'C') + (murder == 'D') + (murder != 'D') == 3) {

			printf("凶手就是%c\n", murder);

		}

	}

}

int main() {

	FindMurder();

	system("pause");

	return 0;

}

3.猜名次

#include <stdio.h>

#include <stdlib.h>

void GuessRank() {

	for (int a = 1; a <= 5; a++) {

		for (int b = 1; b <= 5; b++) {

			for (int c = 1; c <= 5; c++) {

				for (int d = 1; d <= 5; d++) {

					for (int e = 1; e <= 5; e++) {

						if ((b == 2) + (a == 3) == 1

							&& (b == 2) + (e == 4) == 1

							&& (c == 1) + (d == 2) == 1

							&& (c == 5) + (d == 3) == 1

							&& (e == 4) + (a == 1) == 1) {

							if (a*b*c*d*e != 120) {

								continue;

							}

							printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);

						}

					}

				}

			}

		}

	}

}

int main() {

	GuessRank();

	system("pause");

	return 0;

}