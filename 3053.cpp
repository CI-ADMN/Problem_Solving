#include<cstdio>
#define _USE_MATH_DEFINES
#include<cmath>

int main(void){
	double N;
	scanf("%lf", &N);
	printf("%.6lf\n%.6lf", M_PI*N*N, 2 * N*N);
	return 0;
}

/*
PI ��� �� �� �ܿ� �� ����, but ���� math.h ���Ͽ� ���� �Ǿ��ֱ⶧����
���Ͱ��� �̸� ����������� �̸� ���������� ����ϸ� �ȴ�.
*/