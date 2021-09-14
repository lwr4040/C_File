#include <stdio.h>

int main(void)
{

	/*printf("3*1=3\n");
	printf("3*1=3\n");

	int x;
	printf("변수 x의 크기:%d\n",sizeof(x));
	printf("char형의 크기:%d\n",sizeof(char));
	printf("int형의 크기:%d\n",sizeof(int));
	printf("short형의 크기:%d\n",sizeof(short));
	printf("long형의 크기:%d\n",sizeof(long));
	printf("long long형의 크기:%d\n",sizeof(long long));
	printf("float형의 크기:%d\n",sizeof(float));
	printf("double형의 크기:%d\n",sizeof(double)); */

	/*int x=10;
	int y=010;
	int z=0x10;
	printf("x=%d\n",x);
	printf("y=%d\n",y);
	printf("z=%d\n",z);

	const int MONTHS =12;
	int m_salary,y_salary;

	printf("월급을 입력하시오:");
	scanf("%d",&m_salary);
	y_salary=MONTHS*m_salary;
	printf("연봉은 %d입니다",y_salary);
	printf("세금은 %f입니다",y_salary*TAX_RATE);

	float x = 1.234567890123456789;
	double y = 1.234567890123456789;

	printf("float의 크기=%d\n", sizeof(float));
	printf("double의 크기=%d\n", sizeof(double));

	printf("x=%30.25f\n", x);
	printf("y=%30.25f\n", y);

	double x, y, result;

	printf("두개의 실수를 입력하시오:");
	scanf_s("%lf%lf", &x, &y);
	result = x + y;
	printf("%f/%f=%f", x, y, result);
	result = x / y;
	printf("%f/%f =%f", x, y, result); */

	int price;
	int my_money;
	int change;
	int c5000, c1000, c500, c100;
	printf("물건값을 입력하시오:");
	scanf_s("%d", &price);
	printf("사용자가 낸 돈:");
	scanf_s("%d", &my_money);
	change = my_money - price;
	c5000 = change / 5000;
	change = change - (5000 * c5000);
	c1000 = change / 1000;
	change = change - (1000 * c1000);
	c500 = change / 500;
	change = change - (500 * c500);
	c100 = change / 100;
	change = change - (100 * c100);

	printf("5000원권은 %d장 \n 1000원 권은 %d장 \n 500원은 %d 개\n 100원은 %d개 ", c5000, c1000, c500, c100);
}
