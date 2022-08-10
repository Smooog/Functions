#include <unistd.h>

int ft_strlen(char *base){
    int i;

    i = 0;
    while(base[i]){ // считает номер системы
        i++;
    }
    return i;
}

void ft_recursion(int i, int nbr, char *base){
    if(nbr >= i)
        ft_recursion(i, nbr / i, base);
    nbr = nbr % i;
    write(1, &base[nbr], 1);
}

int ft_invalid_argument(int i, char *base){
    int a;

    a = i;
    if(i == 0 || i == 1)
        return 1;
    while(a){
        while(i){
            i--;
            if(base[i] == base[a] || base[i] == '+' || base[i] == '-')
                return 1;
        }
        a--;
        i = a;
    }
    return 0;
}

void ft_putnbr_base(int nbr, char *base){
    int i;

    i = ft_strlen(base);
    if(ft_invalid_argument(i, base))
        return ;
    if(nbr < 0){
        write(1, "-", 1);
        nbr = nbr * -1;
    }
    ft_recursion(i, nbr, base);
}

int main(){
    ft_putnbr_base(-2659, "0123");
    return 0;
}