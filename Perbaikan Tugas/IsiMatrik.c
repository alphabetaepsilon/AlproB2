/*Nama File 	: IsiMatrik.c*/
/*Deskripsi 	: Menentukan dan menampilkan matriks dengan diagonal utama bernilai 1, atas diagonal bernilai 0, bawah diagonal bernilai 2*/
/*Pembuat   	: R Alifi Irham Harvianto - 24060121130052*/
/*Tgl Pembuatan	: Jumat, 20 05 2022 */

#include <stdio.h>

int main()
{
    //Kamus
    int M, N, i, j;

    // Algoritma
    printf("Pembuatan matriks\n");
    printf("Banyak Baris: ");
    scanf("%d",&M);
    printf("Banyak Kolom: ");
    scanf("%d",&N);

    if (M != N || M<0 || N<0)
    {
        printf("Nilai M dan N harus sama");
    }
    else
    {
        for(i=1;i<=M;i++)
        {
            for(j=1;j<=N;j++)
            {
                if(i==j)
                {
                    printf("1 ");
                }
                else if (j<i)
                {
                    printf("2 ");
                }
                else if (j>i)
                {
                    printf("0 ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
