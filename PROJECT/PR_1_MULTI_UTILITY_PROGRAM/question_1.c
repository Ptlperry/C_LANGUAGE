#include<stdio.h>

int main(){
    float c;
	float ans;
	printf("Enter Celcious ::- ");
	scanf("%f", &c);
    ans = (c * 9/5) + 32;
	printf("fahrenheit ::- %f", ans);
}
