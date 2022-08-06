#include <unistd.h>
#include <string.h>

void ft_putstr(char* str){
    while (*str){
        write (1, str, 1);
        str++;
    }
}

char *ft_strncat(char *dest, char *src, unsigned int nb){
    int i; //счетчик dest
    int i1; //счетчик src

    i = 0;
    i1 = 0;
    while(dest[i])
        i++;

    while(src[i1] && i1 != nb){
        dest[i] = src[i1];
        i++;
        i1++;
    }
    return dest;
}

int main() {
    char str1 [12] = "don't break";
    char str2 [18] = "code, ";
    unsigned int nb;

    nb = 3;
    ft_putstr(ft_strncat(str2, str1, nb));
    return 0;
}
