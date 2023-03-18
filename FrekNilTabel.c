/* Nama File    : FrekNilTabel.c */
/* Deskripsi    : menampilkan nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali.   */
/* Pembuat      : Abdul Majid - 24060122120035 */
/* Tanggal Pembuatan : 13 Maret  2023 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus */
    int n, i, j, count;
    printf("Masukkan ukuran array: ");
    scanf("%d", &n);
    int* T = (int*) malloc(n * sizeof(int));

    /* Algoritma */
    

    printf("Masukkan elemen array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &T[i]);
    }

    // Mencari bilangan dengan frekuensi kemunculan lebih dari 1 kali
    printf("Bilangan dengan frekuensi kemunculan lebih dari 1 kali: ");
    for (i = 0; i < n; i++) {
        count = 1;
        for (j = i+1; j < n; j++) {
            if ((T[i] != 0)&&(T[i] == T[j])) {
                count++;
                T[j] = 0; // Mencegah duplikasi saat menampilkan output
            }
        }
        if (count > 1) {
            printf("%d ", T[i]);
        }
    }
    free(T);
    return 0;

 

}