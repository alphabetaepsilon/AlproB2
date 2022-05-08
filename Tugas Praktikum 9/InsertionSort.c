/*Nama File 	: InsertionSort.c*/
/*Deskripsi 	: Sorting atau pengurutan data dengan memilih dua elemen pertama dan menempatkan elemen selanjutnya setelah, di antara, atau sebelum elemen pertama atau kedua*/
/*Pembuat   	: 24060121130052-R Alifi Irham Harvianto*/
/*Tgl Pembuatan	: 6 Mei 2021*/

#include <stdio.h>

int main ()
{
    //Kamus
    int i, j,temp;
    int A[] = {0,4,6,2,5,7,1,4,2,3,5,7,1,1,3,4,0,5};
    int N = sizeof(A)/sizeof(A[0]);

    //Algoritma
    printf("Data sebelum diurutkan: \n");
    Print(A, N);
    InsertSort(A, N);
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


void InsertSort(int A[], int N)
{
    //Kamus
    int i, j, temp;

    //Algoritma
    for (i = 1; i < N; i++) {
        temp = A[i];
        j = i - 1;

        while(j>=0 && temp <= A[j])
        {
            A[j+1] = A[j];
            j = j-1;
        }
        A[j+1] = temp;
    }
}

