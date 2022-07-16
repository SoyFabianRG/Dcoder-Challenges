#include <stdio.h>

int main()
{
    unsigned char binario[8], *ptr;
    scanf("%s", binario);
    printf("%hhu", strtol(binario, &ptr, 2));
    
    return 0;
}
