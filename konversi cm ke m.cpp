#include "stdio.h"

main()
{
    int x,m,cm;
    printf("Masukkan panjang dalam satuan cm : ");
    scanf("%d",&x);
    m=x/100;
    cm=x%100;
    printf("Hasil konversi panjang adalah %d Meter %d Centimeter",m,cm);
}
