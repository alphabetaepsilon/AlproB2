/*Nama File 	: SiputNaik.c*/
/*Deskripsi 	: Menentukan Banyak Hari yang diperlukan Siput untuk Naikk N meter*/
/*Pembuat   	: R Alifi Irham Harvianto - 24060121130052*/
/*Tgl Pembuatan	: Minggu, 27 03 2022 21. 25 WIB*/

#include<stdio.h>

int main()
{
    //Kamus
    float N, i;
    int P;
    //Algoritma
    printf("Perjalanan seekor siput\n");
    printf("Masukkan tinggi lubang:");
    scanf("%f", &N);

    P = 0;
    i = 0;

    while (i < N-0.1)
    {
        P = P + 1;
        i = i + 0.2;
    }

    printf("Jumlah hari yang diperlukan adalah %d",P);

}
