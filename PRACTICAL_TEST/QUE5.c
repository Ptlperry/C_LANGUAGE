
#include<stdio.h>
int main()
{
    int a[5],b[5],c[5],*p1,*p2,*p3,i;
    
	printf("\nEnter elements of first array\n");
    for (i=0;i<5;i++)
    scanf("%d",&a[i]);
    
    
	printf("\nEnter elements of second array\n");
    for (i=0;i<5;i++)
    scanf("%d",&b[i]);

    p1=a;
    p2=b;
    p3=c;
    
    for(i=0;i<5;i++)
    {
    	*p3= *p1 + *p2;
    	p1++;
    	p2++;
    	p3++;
	}
	
	printf("\nAddition\n");
	for(i=0;i<5;i++)
	printf("\n%d",c[i]);
	
return 0;
}
