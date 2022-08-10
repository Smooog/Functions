#include <unistd.h>

void ft_putnbr(int nb){
    if (nb == -2147483648){
        write(1, "-2147483648", 11);
        return ;
    }
    if(nb < 0){
        nb = nb * -1;
        write(1, "-", 1);
    }
    if(nb >= 10)
        ft_putnbr(nb / 10);
    nb = nb % 10;
    nb = nb + 48;
    write(1, &nb, 1);
}

int main(){
    ft_putnbr(10);
    return 0;
}