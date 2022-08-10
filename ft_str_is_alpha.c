#include <unistd.h>
#include <stdlib.h>

void ft_putnbr(int nb) {
    int a;
    int b;
    int i;

    a = 0;
    b = nb;
    if (nb < 0)
        write (1, "-", 1);
    if (nb == 0)
        a = 1;
    while (nb != 0){
        nb/=10;
        a++;
    }
    while (a != 0){
        i = 0;
        nb = b;
        a--;
        while (i != a){
            nb/=10;
            i++;
        }
        if (nb < 0){
            nb = nb%10 * (-1) + 48;
            write (1, &nb, 1);
        }
        else{
            nb = nb%10 + 48;
            write (1, &nb, 1);
        }
    }
}

int ft_str_is_alpha(char *str){
    int i;
    int b;

    i = 0;
    b = 0;
    if (str == NULL)
        return(1);

    while(str[i] != '\0'){
        if(str[i] < 'A' || str[i] > 'z' )
            b++;
        if(str[i] > 'Z' && str[i] < 'a' )
            b++;
        i++;
    }

    if (b > 0)
        return(0);
    return (1);
}

int main(){
    char s[2] = "5d";
    ft_putnbr(ft_str_is_alpha(s));
    return 0;
}
