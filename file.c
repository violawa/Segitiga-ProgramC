#include <stdio.h>

int main() {
    float alas, tinggi, luas;
    
    //menentukkan luas segitiga
    printf("\nMentukan Luas Segitiga\n");
    printf("\n----------------------\n");
    
    // Meminta input alas dari pengguna
    printf("\nInput alas segitiga: \n");
    scanf("%f", &alas);

    // Meminta input tinggi dari pengguna
    printf("\nInput tinggi segitiga: \n");
    scanf("%f", &tinggi);

    //Rangkuman input
    printf("\nDiketahui:\n");
    printf("Alas = %.2f\n", alas);
    printf("Tinggi = %.2f\n", tinggi);
    printf("\nSoal:\n");
    printf("Hitunglah luas segitiga dengan alas %.2f dan tinggi %.2f.\n", alas, tinggi);
    printf("\nJawaban:\n");
    
    // Menghitung luas segitiga
    luas = 0.5 * alas * tinggi;

    // Menampilkan rangkuman soal dan jawaban
    printf("\nRangkuman:\n");
    printf("Alas: %.2f\n", alas);
    printf("Tinggi: %.2f\n", tinggi);
    printf("Luas Segitiga: %.2f\n", luas);

    return 0;
}
