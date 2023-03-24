/* Nama File    : JumPrima_prosedur.c */
/* Deskripsi    : Penjumlahan dari elemen bilangan prima yang terbentuk dari deret tersebut   */
/* Pembuat      : Abdul Majid - 24060122120035 */
/* Tanggal Pembuatan : 24 Maret  2023 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool isPrime(int n);

int main()
{
    /* Kamus */
    int sum = 0;
    int N ; //{bilangan yang akan ditentukan prima atau bukan}
    int i ;

    /* Algoritma */
    printf("Masukkan nilai N: ");
    scanf("%d", &N);
    
    if (N <= 1){
        printf("Tidak ada bilangan Prima ");
    }
    for (i=2; i <= N ;i++){
        if (isPrime(i)){
            sum = sum + i;
        
        }
    }

    printf("Sn: %d",sum);
    

    return 0;
}

bool isPrime(int n) {
    if(n <= 1) {
        return false;
    }
    for(int i = 2; i < n ; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}
