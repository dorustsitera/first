#include<stdio.h>

int main(void)
{
	int code ;

    printf("Hello world\n");
    printf("Entrer votre code\n");
    do{


    scanf("%d", &code);
    printf("code = %d \n", code );
} while (code != 0); 
	return 0;
}