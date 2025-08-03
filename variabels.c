#include <stdio.h>
#include <stdbool.h>

int main(){
    
    // int adalah bilangan bulat
    // float dan double adalah bilangan desimal
    // char adalah karakter 
    // char name[] adalah string atau untaian karakter
    // bool memiliki dua nilai yaitu benar atau salah
    
    int age = 25; // 4 bytes
    float gpa = 3.5; // 4 bytes
    double pi = 3.14159265358979323846; // 8 bytes
    char grade = 'A'; // 1 bytes
    char name[] = "Febra S"; // 8 bytes (8 char + null)
    bool isOnline = true; // 1 bytes

    printf("%d\n",age);
    printf("%.2f\n",gpa);
    printf("%.15lf\n",pi);
    printf("%c\n",grade);
    printf("%s\n",name);
    printf("%d\n",isOnline);
    
    
    // Mengubah nilai variabel 
    age = 30;
    
    // Sekarang nilai dari variabel age adalah 30
    printf("%d\n",age);
    
    return 0;
}
