#include<stdio.h>

int main ()
{

    float pemasukan, pengeluaran;
    printf("Program Pengecekan apakah Pemasukan lebih besar atua lebih kecil daripada Pengeluaran\n");
    printf("=======================================================================================\n");
    printf("Masukan Jumlah Pemasukan : Rp ");
    scanf("%d",&pemasukan);
    printf("Masukan Jumlah Pengeluaran : Rp ");
    scanf("%d",&pengeluaran);
    if (pemasukan > pengeluaran)
    {
        printf("\nPemasukan lebih besar daripada pengeluaran\n");
    }else if (pengeluaran > pemasukan){
    printf("\nPengeluaran lebih besar daripada pemasukan\n");}
    else if (pemasukan = pengeluaran){
    printf("\nPemasukan anda sama besar dengan pengeluaran\n");
    }
}
