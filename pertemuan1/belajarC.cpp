#include <stdio.h> // header untuk C
#include <conio.h>

int main() {
    char nama[50];
    int nim;
    char kom[2];
    float ip;

    printf("Hello World\n"); // fungsi keluaran pada C

    printf("Masukkan nama : ");
    gets(nama); // get string

    printf("Masukkan nim : ");
    scanf("%d", &nim); // fungsi masukan pada C

    getchar(); //baca 1 char

    printf("Masukkan kom : ");
    gets(kom); //baca array char

    printf("Masukkan ip : ");
    scanf("%f", &ip); 

    /* Untuk Output */
    printf("Nama : ");
    puts(nama); // put string, digunakan untuk string dalam bentuk array char

    printf("NIM : %d\n", nim); //output pada C
    
    printf("KOM : ");
    puts(kom); //output dan pindah baris
    printf("IP : %f\n", ip);

    printf("press any button to continue...");
    getch(); //baca 1 char, tidak ditampilkan
}
