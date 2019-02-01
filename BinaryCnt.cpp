#include <stdio.h>

int main() {

	int cnt = 0;
	int input = 0;

	printf("X를 입력하세요");
	scanf("%d", &input);

	while (input > 0) {

		if (input%2 == 1)
			cnt++;
		input = input / 2;
	}

	printf("%d 개 입니다.", cnt);

}