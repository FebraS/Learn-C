#include <stdio.h>

int main(){
    
    // Operator aritmatika = + - * / %  ++ --
    
    // + --> penjumlahan
    // - --> pengurangan
    // * --> perkalian
    // / --> pembagian
    // % --> modulo (nilai sisa hasil bagi)
    // ++ --> increment (menambahkan nilai dengan 1)
    // -- --> decrement (mengurangi nilai dengan 1)
    
    int x = 100;
    int y = 50;
    int z = 0;
    
    z = x + y;
    printf("%d + %d = %-5.d\n",x,y,z);
    printf("%d - %d = %-5.d\n",x,y,(x - y));
    printf("%d * %d = %-5.d\n",x,y,(x * y));
    printf("%d / %d = %-5.d\n",x,y,(x / y));
    printf("%d %% %d = %-5.d\n",x,y,(x % y));
    printf("%d++ = %-8.d\n",x,(x++));
    printf("%d-- = %-8.d\n",y,(y--));
    
    
    // Untuk menabahkan seperti :
    // x = x + 10, bisa dipersingkat dengan x += 10;
    
    return 0;
}
