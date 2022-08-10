#include <unistd.h>

void ft_putstr1(char *str){
    int i = 0;
    while (str[i] != '\0')
    {
        write (1, &str[i], 1);
        i++;
    }
}

void ft_putstr(char *str){
    while (*str){
        write (1, str, 1);
        str++;
    }
}

int main(){
    ft_putstr("55\n55 ");
    ft_putstr1("\naa;\"aa");
    return 0;
}
