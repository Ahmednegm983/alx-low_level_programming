#include "main.h"
char *_memset(char *s, char b, unsigned int n) {
    for (unsigned int i = 0; i < n; i++) {
        *(s + i) = b;
    }
    return s;
} 

// Example usage:
char arr[10];
_memset(arr, 'A', 10); // Fills arr with 'A'
```
