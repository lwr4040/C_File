#include <stdio.h>

int main(void)
{

	/*printf("3*1=3\n");
	printf("3*1=3\n");

	int x;
	printf("���� x�� ũ��:%d\n",sizeof(x));
	printf("char���� ũ��:%d\n",sizeof(char));
	printf("int���� ũ��:%d\n",sizeof(int));
	printf("short���� ũ��:%d\n",sizeof(short));
	printf("long���� ũ��:%d\n",sizeof(long));
	printf("long long���� ũ��:%d\n",sizeof(long long));
	printf("float���� ũ��:%d\n",sizeof(float));
	printf("double���� ũ��:%d\n",sizeof(double)); */

	/*int x=10;
	int y=010;
	int z=0x10;
	printf("x=%d\n",x);
	printf("y=%d\n",y);
	printf("z=%d\n",z);

	const int MONTHS =12;
	int m_salary,y_salary;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d",&m_salary);
	y_salary=MONTHS*m_salary;
	printf("������ %d�Դϴ�",y_salary);
	printf("������ %f�Դϴ�",y_salary*TAX_RATE);

	float x = 1.234567890123456789;
	double y = 1.234567890123456789;

	printf("float�� ũ��=%d\n", sizeof(float));
	printf("double�� ũ��=%d\n", sizeof(double));

	printf("x=%30.25f\n", x);
	printf("y=%30.25f\n", y);

	double x, y, result;

	printf("�ΰ��� �Ǽ��� �Է��Ͻÿ�:");
	scanf_s("%lf%lf", &x, &y);
	result = x + y;
	printf("%f/%f=%f", x, y, result);
	result = x / y;
	printf("%f/%f =%f", x, y, result); */

	int price;
	int my_money;
	int change;
	int c5000, c1000, c500, c100;
	printf("���ǰ��� �Է��Ͻÿ�:");
	scanf_s("%d", &price);
	printf("����ڰ� �� ��:");
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

	printf("5000������ %d�� \n 1000�� ���� %d�� \n 500���� %d ��\n 100���� %d�� ", c5000, c1000, c500, c100);
}
