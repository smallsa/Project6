#include <stdio.h>
int main()
{
	int a, b;
	printf("Please enter 2 int numbers:");
	scanf_s("%d%d",&a,&b);
	printf("%9d\nX%8d\n",a,b);
	printf("----------\n");
	printf("%dX%d%5d\n",(b%10),a,a*(b%10));
	printf("%dX%d%4d\n",(b/10),a,a*(b/10));
	printf("----------\n");
	printf("%8d\n",a*b);
	system("pause");
	return 0;
}