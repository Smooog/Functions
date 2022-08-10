#include <unistd.h>
#include <string.h>

void ft_putstr(char *str){
    int i;
    
    i = 0;
    while (str[i] != '\0'){
        write (1, &str[i], 1);
        i++;
    }
}

char *ft_strlcat(char *dest, char *src, unsigned int size){
    int i; //счетчик dest
    int i1; //счетчик src

    i = 0;
    i1 = 0;
    while(dest[i])
        i++;

    while(src[i1] && i1 != size){
        dest[i] = src[i1];
        i++;
        i1++;

    }
    dest[i] = 0;
    return dest;
}

int main(){
    unsigned int nb;
    char str1 [1024] = "don't break";
    char str2 [1024] = "Code, ";

    nb = 3;
    ft_putstr(ft_strlcat(str2, str1, nb));
    return 0;
}
