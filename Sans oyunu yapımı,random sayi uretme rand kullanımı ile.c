#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stddef.h>


/* GAME OF CHANCE */



int main () 
{
    int sayi;
    int tahmin;

    srand(time(NULL));
    sayi=rand()%100+1;

printf("\n***************************** \n");
printf("\n MERHABALAR OYUNA HOSGELDINIZ \n");
printf("\n ŞANSINIZ SİZİNLE OLSUN \n");
printf("\n 1-100 ARASINDA BİR SAYI TUTTUM TAHMİNİNİZİ YAPIN \n");
printf("\n***************************** \n");
system("color 0a");

do 
{
  
    
    printf("\n tahmininizi giriniz: ");
    scanf("%d",&tahmin);

    if(tahmin<=100 && tahmin >0 && sayi > tahmin)
    {
        printf("\n tahminini kücük");
    }
   
    else if (tahmin<=100 && tahmin>0 && sayi < tahmin)
    {
        printf("\n tahminini büyük");
    }
    else if(tahmin<=100 && tahmin>0 && sayi == tahmin)
    {
        printf("\n tebrikler bildiniz");
    }
    else
    {
    printf("tahmininzi 1-100 arasında olmalıdır \n");
    }

} while (tahmin != sayi);


return 0;
}
