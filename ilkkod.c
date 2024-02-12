#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");
    int bir,iki,top;
    printf("ilk notunuzu giriniz: ");
    scanf("%d",&bir);
    printf("\nİkinci notunuzu giriniz: ");
    scanf("%d",&iki);
    top=bir+iki;
    printf("\nNot Toplaminiz: %d",top);
    return 0;
}
