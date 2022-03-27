/*Nama File 	: CekPrima.c*/
/*Deskripsi 	: Menentukan apakah suatu bilangan integer positif sembarang prima atau bukan*/
/*Pembuat   	: R Alifi Irham Harvianto - 24060121130052*/
/*Tgl Pembuatan	: Sabtu, 19 03 2022 15. 51 WIB*/

#include<stdio.h>

int main()
{
    //Kamus
    int N;
    int i, P;
    //Algoritma
    printf("Penentuan keprimaan suatu bilangan\n");
    printf("Masukkan Bilangan Sembarang:");
    scanf("%d", &N);

    if (N<=0)
    {
        printf("N tidak boleh nol atau negatif");
    }
    else if (N==1)
    {
        printf("Bilangan bukanlah bilangan prima");
    }
    else
    {
        P=0;
        for (i=2; i<N;i++)
        {
            if (N % i == 0)
            {
                P=1;
                break;
            }
        }
        if (P==1)
        {
            printf("Bilangan bukanlah bilangan prima", N);
        }
        else
            printf("Bilangan adalah bilangan prima",N);
    }
    return 0;
}
