#include <stdio.h>

int main(){
    
    int age;
    float gpa;
    char grade = '\n';
    char name[30] = "";
    
    
    printf("Enter your age : ");
    scanf("%d",&age);
    
    printf("Enter your gpa : ");
    scanf("%f",&gpa); // Input ini akan meninggalkan karakter newline
    
    
    // Kita wajib membersihkan buffer sebelum memanggil scanf lagi, 
    // terutama jika Anda menggunakan %c. Jika tidak, 
    // karakter newline (\n) dari input sebelumnya akan 
    // tertinggal di buffer dan langsung terbaca oleh scanf berikutnya. 
    
    
    // Cara termudah untuk membersihkan karakter newline bisa
    // dengan menambahkan spasi sebelum specifier
 
    printf("Enter your grade : ");
    scanf(" %c",&grade); // Menambahkan spasi sebelum spesifier char (%c)
    
    printf("Enter your name : ");
    //scanf("%s",&name);
    // Kita juga bisa menggunakan fungsi fgets
    fgets(name,sizeof(name),stdin);
    
    printf("Age   :%d\n",age);
    printf("GPA   :%f\n",gpa);
    printf("Grade :%c\n",grade);
    printf("Name  :%s\n",name);
    
    return 0;
}
