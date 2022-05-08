/*Nama File 	: CountingSort.c*/
/*Deskripsi 	: Sorting atau pengurutan data dengan menghitung jumlah kemunculan setiap data dalam array*/
/*Pembuat   	: 24060121130052-R Alifi Irham Harvianto*/
/*Tgl Pembuatan	: 6 Mei 2021*/

#include<stdio.h>

int main ()
{
    //Kamus
    int i, j,temp;
    int A[] = {0,4,6,2,5,7,1,4,2,3,5,7,1,1,3,4,0,5};
    int N = sizeof(A)/sizeof(A[0]);

    //Algoritma
    printf("Data sebelum diurutkan: \n");
    Print(A, N);
    CountSort(A, N);
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


int getMax(int A[], int N)
{
    //Kamus
    int max = A[0];

    //Algoritma
    for(int i = 1; i<N; i++)
    {
        if(A[i] > max)
        max = A[i];
    }
    return max;
}

void CountSort(int A[], int N)
{
    //Kamus
    int output[N+1];
    int max = getMax(A, N);
    int count[max+1];

    //Algoritma
    for (int i = 0; i <= max; ++i)
    {
        count[i] = 0;
    }

    for (int i = 0; i < N; i++)
    {
        count[A[i]]++;
    }

    for(int i = 1; i<=max; i++)
      count[i] += count[i-1];

    for (int i = N - 1; i >= 0; i--)
    {
        output[count[A[i]] - 1] = A[i];
        count[A[i]]--;
    }

    for(int i = 0; i<N; i++)
    {
        A[i] = output[i];
    }
}

