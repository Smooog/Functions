#include <unistd.h>
#include <string.h>

void ft_putstr(char* str){
    while (*str){
        write (1, str, 1);
        str++;
    }
}

char *ft_strcat(char *dest, char *src){
    int i; //счетчик dest
    int i1; //счетчик src

    i = 0;
    i1 = 0;
    while(dest[i])
        i++;
    
    while(src[i1]){
        dest[i] = src[i1];
        i++;
        i1++;
    }
    
    dest[i] = '\0';
    return dest;
}

int main() {
    char str1 [20] = "don't break my code";
    char str2 [8] = "Stepa, ";
    ft_putstr(ft_strcat(str2, str1));
    return 0;
}
