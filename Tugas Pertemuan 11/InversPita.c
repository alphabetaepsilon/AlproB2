/*Nama File 	: InversPita*/
/*Deskripsi 	: Mesin abstrak untuk menampilkan kalimat dalam sebuah pita dalam keadaan terbalik(invers)*/
/*Pembuat   	: R Alifi Irham Harvianto*/
/*NIM           : 24060121130052*/
/*Tgl Pembuatan	: Rabu, 18 Mei 2022*/

#include <stdio.h>
#include <conio.h>
#include "mesinkar.c"

int main(){
/*Kamus*/
    int length_Pita;
    char str[50];
    int i;

/*Algoritma*/
    length_Pita = HitungChar();

    printf("Mesin Inverse Pita\n");

    if (length_Pita >= 50)
    {
        printf("\n Karakter dalam pita maksimal 50 karakter \n");
    }
    else{
        START();
        i = 0;
        while(!EOP()){
            str[i] = CC;
            ADV();
            i++;
        }

        printf("Pita dibaca = ");
        for (int i = 0; i < length_Pita; i++)
        {
            printf("%c", str[i]);
        }

        printf("\nPita diinverse = ");
        // melakukan inverse kata
        for (int i = length_Pita-1; i >= 0; i--)
        {
            printf("%c", str[i]);
        }

    }

    getch();
    return 0;
}
