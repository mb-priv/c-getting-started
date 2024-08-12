#include <stdio.h>

int main() {
    int i = 42;
    float f = 3.14159;
    double d = 2.7182818284;
    char c = 'A';
    char str[] = "Hello, World!";
    unsigned int u = 3000000000;
    long int li = 1234567890L;
    long long int lli = 1234567890123456789LL;
    unsigned long int uli = 987654321UL;
    unsigned long long int ulli = 9876543210123456789ULL;
    void *ptr = &i;

    // Integer
    printf("Integer: %d\n", i);
    // Unsigned Integer
    printf("Unsigned Integer: %u\n", u);
    // Hexadecimal
    printf("Hexadecimal: %x\n", i);
    // Octal
    printf("Octal: %o\n", i);
    // Character
    printf("Character: %c\n", c);
    // String
    printf("String: %s\n", str);
    // Float
    printf("Float: %f\n", f);
    // Double
    printf("Double: %lf\n", d);
    // Exponential notation (lowercase)
    printf("Exponential: %e\n", d);
    // Exponential notation (uppercase)
    printf("Exponential: %E\n", d);
    // Pointer
    printf("Pointer: %p\n", ptr);
    // Long Integer
    printf("Long Integer: %ld\n", li);
    // Long Long Integer
    printf("Long Long Integer: %lld\n", lli);
    // Unsigned Long Integer
    printf("Unsigned Long Integer: %lu\n", uli);
    // Unsigned Long Long Integer
    printf("Unsigned Long Long Integer: %llu\n", ulli);
    // Percentage sign
    printf("Percentage: %%\n");

    // Multiple arguments
    printf("Multiple arguments: %d, %f, %c, %s\n", i, f, c, str);
    
    // Width and precision
    printf("Width and precision: %10.2f\n", f);
    
    // Left-justify
    printf("Left-justify: %-10d\n", i);
    
    // Zero-padding
    printf("Zero-padding: %010d\n", i);
    
    return 0;
}
