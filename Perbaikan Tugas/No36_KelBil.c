/*Nama File 	: No36_KelBil.c*/
/*Deskripsi 	: Menentukan dan menampilkan kpk dari sebuah array integer*/
/*Pembuat   	: R Alifi Irham Harvianto - 24060121130052*/
/*Tgl Pembuatan	: Jumat, 20 05 2022 */

#include <stdio.h>

int main()
{
    //Kamus
    int N, i, j, k, KPK;

    // Algoritma
    printf("Penentuan KPK beberapa bilangan\n");
    printf("Banyaknya bilangan: ");
    scanf("%d",&N);

    if (N <= 0)
    {
        printf("Masukkan bilangan salah.");
    }
    else
    {
        KPK = 1;
        int A[N];
        for(i=1;i<=N;i++)
        {
            printf("Masukkan Bilangan Ke-%d: ",i);
            scanf("%d",&A[i]);
        }
        for(j=1;j<=N;j++)
        {
            if(A[j]%KPK==0)
            {
                KPK = A[j];
            }
            else
                {
                KPK = KPK*A[j];
            }
        }
        printf("Kelipatan persekutuan terkecilnya adalah %d",KPK);
    }
    return 0;
}
