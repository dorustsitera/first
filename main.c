#include<stdio.h>

int main(void)
{
	int code ;

    printf("Salut le monde\n");
    printf("Entrer votre code\n");
    do{


    scanf("%d", &code);
    printf("code = %d \n", code );
} while (code != 0); 
	return 0;
}