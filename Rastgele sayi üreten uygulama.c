#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stddef.h>

// rastgele benzersiz sayilar üretme


int matris[3][3] = {0,0,0,0,0,0,0,0,0};

int sayiuret()
{
    int *ptr=matris;
    int sayi;
    sayi=rand()%9+1;
    int i;
    int sonuc=0;
    while(sonuc!=1)
{

for(i=0;i<10;i++)
{
    if(sayi==*ptr)
{
sayi=(sayi%9+1);
i=0;
ptr= matris;
ptr--;
}
ptr++;
}
sonuc=1;
}

return sayi;
}


void matrisDoldur()
{
    int *ptr=matris ;
    int i;
    for(i=0;i<10;i++)
    {
        *ptr=sayiuret();
        ptr++;
    }
}


void matrisYazdir()
{
    int *ptr=matris;
    int i,j;
    for(i=0;i<3;i++)
    {
        printf("\n\t");
        for(j=0;j<3;j++)
        {
            printf("%d\t ",*ptr);
            ptr++;
        }
         
         printf("\n\n");
    }
}


int main ()
{
    srand(time(0));
    matrisDoldur();
    matrisYazdir();


return 0;
}
