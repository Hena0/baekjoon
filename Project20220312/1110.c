#include <stdio.h>

int new_num(int num) // 새로운 수 구하기
{
	int units, tens, add_u_t;

	units = num % 10;	// 일의 자리
	tens = num / 10;	// 십의 자리
	add_u_t = units + tens;

	return (units * 10) + (add_u_t % 10);
}

int main()
{
	int n, m, cycle;

	scanf_s("%d", &n);
	cycle = 1;
	m = n;

	while (n != new_num(m))
	{
		m = new_num(m);
		cycle += 1;
	}

	printf("%d", cycle);
	return 0;
}