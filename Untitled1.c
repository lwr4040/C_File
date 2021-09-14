

#include <stdio.h>
int main(void)
{
	printf("3*1=3\n");
	printf("3*2=6\n");
	printf("3*3=9\n");
	



	printf("2+3=%d\n",2+3);
	printf("2-3=%d\n",2-3);
	printf("2*3=%d\n",2*3);
	printf("2/3=%d\n",2/3);
	
	
	int x;
	int y;
	printf("첫번째 숫자를 입력하시오:");
	scanf("%d",&x);
	printf("두번째 숫자를 입력하시오:");
	scanf("%d",&y);
	
	int a;
	int b;
	printf("연봉을 입력하시오(단위: 만원):");
	scanf("%d",&a);
	printf("월수령액(단위: 만원):");
	scanf("%d",&b);
	
	float radius;
    printf("반지름을 입력하시오:");
    scanf("%f",&radius);
    float area=3.14*radius*radius;
    printf("원의 면적: %f\n", area);


}
