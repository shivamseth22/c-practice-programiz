 // To find the size of int float char
#include<stdio.h>

int main(){
    int a ;
    float b;
    char c;
    double d;
    printf("The size of int is %d\n", sizeof(a));
    printf("The size of float is %d\n", sizeof(b));
    printf("The size of char is %d\n", sizeof(c));
    printf("The size of double is %d\n", sizeof(d));
    return 0; 
}
/*#include<stdio.h>
int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;

    // sizeof evaluates the size of a variable
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of char: %zu byte\n", sizeof(charType));
    
    return 0;
}
*/