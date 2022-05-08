/*Nama File 	: SelectionSort.c*/
/*Deskripsi 	: Sorting atau pengurutan data dengan memilih elemen terkecil yang belum terurut dan menukarnya dengan posisi paling depan yang belum terurutkan*/
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
    SelectSort(A, N);
    printf("\nData setelah diurutkan: \n");
    Print(A, N);
    return 0;
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

void SelectSort(int array[], int N)
{
    //Kamus
    int i, j, k;

    //Algoritma
    for (i = 0; i < N-1; i++)
    {
        k = i;

        for (j = i+1; j < N; j++)
        if (array[j] < array[k])
            k = j;

        int temp = array[k];
        array[k] = array[i];
        array[i] = temp;
    }
}

