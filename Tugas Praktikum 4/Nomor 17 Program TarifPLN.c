/*Nama File 	: TarifPLN.c*/
/*Deskripsi 	: Menentukan tarif PLN*/
/*Pembuat   	: R Alifi Irham Harvianto - 24060121130052*/
/*Tgl Pembuatan	: Rabu, 09 03 2022 19. 11 WIB*/

#include<stdio.h>

int main()
{
    //Kamus
    int g;
    int l;
    //Algoritma
    printf("Perhitungan Tarif Listrik\n");
    printf("Masukkan Jenis Golongan:");
    scanf("%d", &g);
    printf("Masukkan Pemakaian daya Listrik:");
    scanf("%d", &l);
    if (l<=100)
    {
        if (g == 1)
        {
            printf("%d", 100000);
        }
        else if (g == 2)
        {
            printf("%d", 200000);
        }
    }
    else if (l<1000)
    {
        if (g == 1)
        {
            printf("%d", l*1000);
        }
        else if (g == 2)
        {
            printf("%d", l*2000);
        }
    }
    else if (l>=1000)
    {
        if (g == 1)
        {
            printf("%d", l*1000+l*1000/10);
        }
        else if (g == 2)
        {
            printf("%d", l*2000+l*2000/10);
        }
    }
    else
    {
        printf("Nomor salah");
    }
    return 0;
}
