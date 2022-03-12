#include <stdio.h>

int new_num(int num) // ���ο� �� ���ϱ�
{
	int units, tens, add_u_t;

	units = num % 10;	// ���� �ڸ�
	tens = num / 10;	// ���� �ڸ�
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