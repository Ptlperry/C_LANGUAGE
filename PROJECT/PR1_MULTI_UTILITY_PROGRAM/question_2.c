#include<stdio.h>

main(){
	int basic_salary;
	float HRA,DA,TA,gross_salary;
	printf("Enter your basic salary :-");
	scanf("%d", &basic_salary);
	 HRA = basic_salary * 10 / 100;
	 DA = basic_salary * 5 / 100;
	 TA = basic_salary * 8 / 100;
	gross_salary = basic_salary + HRA + DA + TA;
	printf("Gross Salary :- %f", gross_salary);
	 
}
