/*Nama File 	: FaktorBil.c*/
/*Deskripsi 	: Menentukan faktor dari suatu bilangan integer positif sembarang*/
/*Pembuat   	: R Alifi Irham Harvianto - 24060121130052*/
/*Tgl Pembuatan	: Sabtu, 19 03 2022 14. 21 WIB*/

#include<stdio.h>

int main()
{
    //Kamus
    int N;
    int i;
    //Algoritma
    printf("Perhitungan faktor bilangan\n");
    printf("Masukkan Bilangan Sembarang:");
    scanf("%d", &N);

    if (N<=0)
    {
        printf("N tidak boleh nol atau negatif");
    }
    else
    {
        i=1;
        for (i=1; i<=N;i++)
        {
            if (N % i == 0)
            {
                printf("| %d",i);
            }
        }
    }
    return 0;
}
