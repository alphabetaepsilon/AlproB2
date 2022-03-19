/*Nama File 	: TunjAnak.c*/
/*Deskripsi 	: Menentukan tunjangan anak*/
/*Pembuat   	: R Alifi Irham Harvianto - 24060121130052*/
/*Tgl Pembuatan	: Rabu, 09 03 2022 18. 03 WIB*/

#include<stdio.h>

int main()
{
    //Kamus
    int a;
    int g;
    //Algoritma
    printf("Perhitungan upah kerja\n");
    printf("Masukkan Jumlah Anak:");
    scanf("%d", &a);
    printf("Masukkan Gaji Pokok:");
    scanf("%d", &g);
    if (a == 0)
    {
        printf("%d", a*(10*g)/100);
    }
    else if (a == 1)
    {
        printf("%d", a*(10*g)/100);
    }
    else if (a == 2)
    {
        printf("%d", a*(10*g)/100);
    }
    else if (a == 3)
    {
        printf("%d", a*(10*g)/100);
    }
    else if (a > 3)
    {
        printf("%d", 3*(10*g)/100);
    }
    else
    {
        printf("Jumlah anak tidak bisa kurang dari nol");
    }

    return 0;
}
