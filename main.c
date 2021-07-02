#include<stdio.h>
int somme(int a, int b);
int main(void)
{
	int a = 2;
	int b = 6;
	printf("Saisir de nomnbres\n");
	scanf("%d%d",&a, &b);
	printf("La somme de a et b est %d\n", somme(a, b) );
	return 0;
}
int somme(int a , int b)
{
	int s = a + b;
	return s;
}