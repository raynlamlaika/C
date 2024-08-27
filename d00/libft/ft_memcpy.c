#include <strings.h>
#include <stdlib.h>
#include <stdio.h>

void *ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
    size_t i =0;
    while (i < n)
    {
        *(unsigned char *)(dest_str+i) = *(unsigned char *)(src_str+i);
        i++; 
    }
    return dest_str;
}
/*
int main()
{
    char r[] = "raya ";
    char i[26];
    ft_memcpy(i,r,6);
    printf("%s",i);
    return 0;
}*/