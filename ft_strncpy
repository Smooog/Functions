#include <unistd.h>
#include <stdlib.h>

void ft_putstr(char* str){
    while (*str){
        write (1, str, 1);
        str++;
    }
}

char* ft_strncpy(char *dest, char *src, unsigned int n){
    int i;

    i = 0;
    if (dest == NULL || src == NULL || n == 0)
        return(NULL);
    
    while(dest[i] != '\0' && src[i] != '\0' && i != n){
        dest[i] = src [i];
        i++;
    }
    
    dest[i] = '\0';
    return(dest);
}

int main(){
    char d[13] = "123555456789";
    char s[10] = "987654321";
    unsigned int n;
    
    n = 0;
    ft_putstr(ft_strncpy(d, s, n));
    return 0;
}
