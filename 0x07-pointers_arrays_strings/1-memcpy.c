#include "main.h"
char *_memcpy(char *dest, char *src, unsigned int n) {
    char *ptr = dest;
    while (n--) {
        *ptr++ = *src++;
    }
    return dest;
}

// Example usage:
int main() {
    char src[] = "Hello, world!";
    char dest[20];
    _memcpy(dest, src, 7);
    printf("%s\n", dest); // Output: "Hello,"
    return 0;
}
