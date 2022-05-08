/*Nama File 	: BubbleSort.c*/
/*Deskripsi 	: Sorting atau pengurutan data dengan menukar dua data bersebelahan dari kiri dengan data yang lebih kecil ditaruh di kiri data yang lebih besar*/
/*Pembuat   	: 24060121130052-R Alifi Irham Harvianto*/
/*Tgl Pembuatan	: 6 Mei 2021*/

#include<stdio.h>

void main ()
{
    //Kamus
    int i, j,temp;
    int A[] = {0,4,6,2,5,7,1,4,2,3,5,7,1,1,3,4,0,5};
    int N = sizeof(A)/sizeof(A[0]);

    //Algoritma
    printf("Data sebelum diurutkan: \n");
    Print(A, N);
    Bubble(A, N);
    printf("\nData setelah diurutkan: \n");
    Print(A, N);
}

void Print(int A[], int N)
{
    //Kamus
    int i;

    //Algoritma
    printf("[ ");
    for(i = 0; i < N; i++)
    {
        printf("%d ",A[i]);
    }
    printf("]");
}

void Bubble(int A[], int N)
{
    //Kamus
    int i, j, temp;

    //Algoritma
    for(i = 0; i < N; i++)
    {
      for(j = i+1; j < N; j++)
        {
            if(A[j] < A[i])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}
