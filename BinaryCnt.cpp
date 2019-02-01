#include <stdio.h>

int main() {

	int cnt = 0;
	int input = 0;

	printf("enter X");
	scanf("%d", &input);

	while (input > 0) {

		if (input%2 == 1)
			cnt++;
		input = input / 2;
	}

	printf("The number is %d", cnt);

}
