#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int ebob(int sayi1, int sayi2)
{
 
 int i,ebob;
 
 for(i=1; i <= sayi1 && i <= sayi2; ++i)
    {
        if(sayi1%i==0 && sayi2%i==0)
            ebob = i;
    }
    return ebob;
}

int ekok(int sayi1,int sayi2)
{
int ekok,c=1;
while (1) {
        c++;
        if ((c % sayi1 == 0) && (c % sayi2 == 0)) {
            ekok = c;
            break;
            }
        }
return ekok;
}

int main()
{
    int secim,secim2;
    int sayi1,sayi2,i;

    printf("Yapmak istediginiz islemi(1-ebob 2-ekok) seciniz : ");
    scanf("%d",&secim);

    switch (secim)
    {
    case 1:
    
    printf("1.sayiyi giriniz:");
    scanf("%d",&sayi1);
    printf("2.sayiyi giriniz:");
    scanf("%d",&sayi2);
    
    
    printf("Iki sayinin  EBOB'u : %d \n", ebob(sayi1,sayi2));
    break;

    case 2:

    printf("1.sayiyi giriniz:");
    scanf("%d",&sayi1);
    printf("2.sayiyi giriniz:");
    scanf("%d",&sayi2);
    
    printf("Iki sayinin EKOK'u: %d \n", ekok(sayi1,sayi2));

        break;

    default:
        break;
    }

printf("Ana menuye donmek ister misiniz? e:evet h:hayir : ");
scanf("%c",&secim2);
           
secim2 = getchar();

    if (secim2 == 'e')
       {
           return main();
       }
    else
        {
               exit(0);
        } 
    
}