#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//deklarasi fungsi
void input_bilangan(void);
void bilangan_terbesar(void);
//deklarasi variabel global
int bil1,bil2;
main()
{
    system("cls");

    input_bilangan();
    bilangan_terbesar();

    getch();
    return 0;
}

//definisi fungsi
void input_bilangan(void){
    printf("Masukan bilangan pertama    = "); scanf("%d",&bil1);
    printf("Masukan bilangan kedua      = "); scanf("%d",&bil2);
}

void bilangan_terbesar(void){
    if(bil1>bil2){
        printf("Bilangan terbesar adalah %d",bil1);
    }else{
        printf("Bilangan terbesar adalah %d",bil2);
    }
}