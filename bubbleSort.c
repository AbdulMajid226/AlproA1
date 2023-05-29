/* Nama File    : bubbleSort.c */
/* Deskripsi    : Mengurutkan array dengan proses Bubble Sort */
/* Pembuat      : Abdul Majid - 24060122120035 */
/* Tanggal Pembuatan : 28 Mei 2023 */

#include <stdio.h>
#include <stdlib.h>

void tukar (int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

 void bubbleSort(int arr[], int n){
     int i, j;                        
     for (i=0 ; i<n-1 ; i++){             
        for (j=0 ; j<n-i-1 ; j++){        
            if (arr[j] < arr[j+1]){    
                tukar(&arr[j], &arr[j+1]);
            }
        }
     }
 }
 int main(){
     printf("----------BUBBLE SORT----------\n");
/*Deklarasi variabel dan nilai array*/
     int i, n=10;
     int arr[10] = {19 ,1 ,28 ,5 ,6 ,10 ,11 ,3 ,7 ,20};
/*Print array sebelum disorting*/
     printf("Array sebelum disorting : ");
     for (i=0;i<n;i++)
        printf("%d ",arr[i]);
/*Proses sort array dengan Bubble Sort*/
     bubbleSort(arr,n);
/*Print array setelah disorting*/
     printf("\nArray yang sudah disorting : ");
     for (i=0;i<n;i++)
        printf("%d ",arr[i]);
     printf("\n--------------------");
     return 0;
 }