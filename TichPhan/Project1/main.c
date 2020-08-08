#include "tichphan.h"

int main()
{
	double a = 0, b = 0;
	printf("Nhap gia tri 2 mut cua doan [a,b]: ");
	scanf_s("%lf%lf", &a, &b);

	double t = tinhTichPhan(a, b);
	printf("Gia tri cua tich phan f(x) = x^2: %lf\n", t);

	return 0;
}