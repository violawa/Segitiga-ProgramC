## README

# Program Penghitung Luas Segitiga

Program ini adalah contoh sederhana untuk menghitung luas segitiga menggunakan bahasa pemrograman C. Pengguna diminta untuk memasukkan nilai alas dan tinggi segitiga, dan program akan menghitung serta menampilkan luas segitiga berdasarkan input tersebut.

## Cara Menggunakan Program

1. **Kloning Repository**
   ```sh
   git clone https://github.com/username/nama-repo.git
   cd nama-repo
   ```

2. **Kompilasi Program**
   Gunakan perintah berikut untuk mengkompilasi program:
   ```sh
   gcc -o hitung_luas_segita main.c
   ```

3. **Jalankan Program**
   Setelah dikompilasi, jalankan program dengan perintah berikut:
   ```sh
   ./hitung_luas_segita
   ```

4. **Masukkan Nilai Alas dan Tinggi**
   Ikuti petunjuk yang diberikan oleh program untuk memasukkan nilai alas dan tinggi segitiga. Program akan menghitung dan menampilkan luas segitiga.

## Contoh Output

```
Menentukan Luas Segitiga

----------------------

Input alas segitiga: 
5

Input tinggi segitiga: 
10

Diketahui:
Alas = 5.00
Tinggi = 10.00

Soal:
Hitunglah luas segitiga dengan alas 5.00 dan tinggi 10.00.

Jawaban:

Rangkuman:
Alas: 5.00
Tinggi: 10.00
Luas Segitiga: 25.00
```

## Struktur Kode

```c
#include <stdio.h>

int main() {
    float alas, tinggi, luas;
    
    // Menentukan luas segitiga
    printf("\nMenentukan Luas Segitiga\n");
    printf("\n----------------------\n");
    
    // Meminta input alas dari pengguna
    printf("\nInput alas segitiga: \n");
    scanf("%f", &alas);

    // Meminta input tinggi dari pengguna
    printf("\nInput tinggi segitiga: \n");
    scanf("%f", &tinggi);

    // Rangkuman input
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
```

## Kontribusi

Silakan fork repository ini dan buat pull request jika ingin berkontribusi. Jika menemukan bug atau memiliki saran, buka isu di halaman [Issues](https://github.com/username/nama-repo/issues).

## Lisensi

Proyek ini dilisensikan di bawah [MIT License](LICENSE).
