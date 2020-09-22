#include <stdio.h>
int main(void)
{
	printf("BMIを求めます \n");
	float height;
	float width;
	float bmi;
	scanf("%f%f", &height,&width);
	bmi = width / (height/100 * height/100);
	printf("bmiは %f です",bmi);
	return 0 ;
}