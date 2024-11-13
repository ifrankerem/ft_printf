#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>  // INT_MAX, INT_MIN, UINT_MAX için

int main() {
    int x = 42;

    // %c testi - Tek karakter
    printf("Orijinal printf  - Karakter Testi: %c\n", 'A');
    ft_printf("ft_printf       - Karakter Testi: %c\n", 'A');

    // %s testi - Karakter dizisi
    printf("Orijinal printf  - String Testi (boş): %s\n", "");
    ft_printf("ft_printf       - String Testi (boş): %s\n", "");
    
    printf("Orijinal printf  - String Testi (normal): %s\n", "Merhaba");
    ft_printf("ft_printf       - String Testi (normal): %s\n", "Merhaba");
    
    printf("Orijinal printf  - String Testi (uzun): %s\n", "Bu çok uzun bir karakter dizisidir.");
    ft_printf("ft_printf       - String Testi (uzun): %s\n", "Bu çok uzun bir karakter dizisidir.");

    // %p testi - Pointer adresi
    printf("Orijinal printf  - Pointer Testi (geçerli adres): %p\n", &x);
    ft_printf("ft_printf       - Pointer Testi (geçerli adres): %p\n", &x);

    printf("Orijinal printf  - Pointer Testi (NULL): %p\n", NULL);
    ft_printf("ft_printf       - Pointer Testi (NULL): %p\n", NULL);

    // %d testi - Signed integer
    printf("Orijinal printf  - Signed Integer Testi: %d\n", 12345);
    ft_printf("ft_printf       - Signed Integer Testi: %d\n", 12345);

    printf("Orijinal printf  - Signed Integer Testi (negatif): %d\n", -12345);
    ft_printf("ft_printf       - Signed Integer Testi (negatif): %d\n", -12345);

    printf("Orijinal printf  - Signed Integer Testi (INT_MAX): %d\n", INT_MAX);
    ft_printf("ft_printf       - Signed Integer Testi (INT_MAX): %d\n", INT_MAX);

    printf("Orijinal printf  - Signed Integer Testi (INT_MIN): %d\n", INT_MIN);
    ft_printf("ft_printf       - Signed Integer Testi (INT_MIN): %d\n", INT_MIN);

    // %i testi - Integer (signed integer için %d ile aynı)
    printf("Orijinal printf  - Integer Testi: %i\n", 12345);
    ft_printf("ft_printf       - Integer Testi: %i\n", 12345);

    // %u testi - Unsigned integer
    printf("Orijinal printf  - Unsigned Integer Testi: %u\n", 12345U);
    ft_printf("ft_printf       - Unsigned Integer Testi: %u\n", 12345U);

    printf("Orijinal printf  - Unsigned Integer Testi (UINT_MAX): %u\n", UINT_MAX);
    ft_printf("ft_printf       - Unsigned Integer Testi (UINT_MAX): %u\n", UINT_MAX);

    // %x testi - Hexadecimal (küçük harf)
    printf("Orijinal printf  - Hexadecimal Testi (küçük harf): %x\n", 255);
    ft_printf("ft_printf       - Hexadecimal Testi (küçük harf): %x\n", 255);

    printf("Orijinal printf  - Hexadecimal Testi (küçük harf, UINT_MAX): %x\n", UINT_MAX);
    ft_printf("ft_printf       - Hexadecimal Testi (küçük harf, UINT_MAX): %x\n", UINT_MAX);

    // %X testi - Hexadecimal (büyük harf)
    printf("Orijinal printf  - Hexadecimal Testi (büyük harf): %X\n", 255);
    ft_printf("ft_printf       - Hexadecimal Testi (büyük harf): %X\n", 255);

    printf("Orijinal printf  - Hexadecimal Testi (büyük harf, UINT_MAX): %X\n", UINT_MAX);
    ft_printf("ft_printf       - Hexadecimal Testi (büyük harf, UINT_MAX): %X\n", UINT_MAX);

    // %% testi - Yüzde işareti
    printf("Orijinal printf  - Yüzde İşareti Testi: %%\n");
    ft_printf("ft_printf       - Yüzde İşareti Testi: %%\n");

    return 0;
}
