#include <stdio.h>

int main()
{
    // Format specifier adalah sebuah token spesial yang dimulai
    // dengan simbol persen (%) kemudian diikuti karakter khusus
    // dan berfungsi untuk mengontrol bagaimana data ditampilkan
    
    int firstNum = 2;
    int secondNum = 200;
    int thirdNum = 2000;
    float firstPrice = 20.52;
    float secondPrice = 100.34;
    float thirdPrice = -30.67;
    
    
    // Menampilkan 4 spasi dari kiri
    printf("%4d\n",firstNum);
    printf("%4d\n",secondNum);
    printf("%4d\n",thirdNum);
    
    
    // Menampilkan 4 spasi dari kanan
    printf("\n");
    
    printf("%-4d\n",firstNum);
    printf("%-4d\n",secondNum);
    printf("%-4d\n",thirdNum);
    
    // Mengisi spasinya dengan angka 0
    printf("\n");
    
    printf("%04d\n",firstNum);
    printf("%04d\n",secondNum);
    printf("%04d\n",thirdNum);
    
    
    // Menampilkan hanya dua dibelakang koma
    printf("%.2f\n",firstPrice);
    printf("%.2f\n",secondPrice);
    printf("%.2f\n",thirdPrice);
    

    // Menampilkan spasi sebanyak 16 kali serta
    // tanda bagi angka yang bernilai positif
    printf("\n");
    printf("%+16.2f\n",firstPrice);
    printf("%+16.2f\n",secondPrice);
    printf("%+16.2f\n",thirdPrice);
    
    
    return 0;
}
