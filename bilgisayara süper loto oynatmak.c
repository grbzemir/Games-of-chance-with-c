#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stddef.h>

int main () {

    int dizi[6];
    int dizi2[6];
    int i;
    int sayac;
    int sayac2;
    int a;
    int b;

    system("color 0a");
    srand(time(NULL));

    printf("******CEKİLİŞ SONUCU******\n");

    for(i=0;i<6;i++)
    {
        dizi[i]=rand()%49+1;
    }
    for(i=0;i<6;i++)
    {
        printf("%d ", dizi[i]);
    }
    printf("\n");
    sayac=1;
    for(i=0;i<6;i++)
    {
        printf("%d. sayiyi giriniz: \n", sayac);
        scanf("%d", &dizi2[i]);
        sayac++;
    }
    sayac2=0;
    for(i=0;i<6;i++)
    {
        if(dizi[i]==dizi2[i])
        {
            sayac2++;
        }
    }
    printf("dogru tahmin sayisi: %d", sayac2);

return 0;
}
