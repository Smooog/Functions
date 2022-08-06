#include <unistd.h>

void ft_hex(int dec){
    char hex_alph[17] = "0123456789abcdef";
    int del = dec;
    int i = 0; //счетчик
    char rez[3];

    dec /= 16;
    rez[i] = hex_alph[dec];
    write (1, &rez[i], 1);
    i++;
    dec = del;
    dec %= 16;
    rez[i] = hex_alph[dec];
    write (1, &rez[i], 1);
}

void ft_putstr_non_printable(char *str){
    int i;
    int b;

    i = 0;
    b = 0;
    while (str[i] != '\0'){
        if (str[i] < 32){
            write (1, "\\", 1);
            b = str[i];
            ft_hex(b);
        }
        else
            write (1, &str[i], 1);
        i++;
    }
}

int main(){
    ft_putstr_non_printable("Coucou\ntu vas bien ?");
    return 0;
}
