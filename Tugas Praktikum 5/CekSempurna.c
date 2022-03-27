/*Nama File 	: CekSempurna.c*/
/*Deskripsi 	: Menentukan apakah suatu bilangan integer positif sembarang sempurna atau bukan*/
/*Pembuat   	: R Alifi Irham Harvianto - 24060121130052*/
/*Tgl Pembuatan	: Minggu, 27 03 2022 08. 25 WIB*/

#include<stdio.h>

int main()
{
    //Kamus
    int N;
    int i, P;
    //Algoritma
    printf("Penentuan kesempurnaan suatu bilangan\n");
    printf("Masukkan Bilangan Sembarang:");
    scanf("%d", &N);

    if (N<=0)
    {
        printf("N tidak boleh nol atau negatif");
    }

    else
    {
        P=0;
        for (i=1; i<N;i++)
        {
            if (N % i == 0)
            {
                P=P+i;
            }

        }
        if (P==N)
            {
                printf("Bilangan adalah bilangan sempurna");
            }
        else
        {
            printf("Bilangan bukanlah bilangan sempurna");
        }
    }
    return 0;
}
