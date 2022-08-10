#include <unistd.h>

void ft_putnbr(int nb){
    long int n;

    n = nb;
    if(n < 0){
        n = n * -1;
        write(1, "-", 1);
    }
    if(n >= 10)
        ft_putnbr(n / 10);
    n = n % 10;
    n = n + 48;
    write(1, &n, 1);
}

int main(){
    ft_putnbr(10);
    return 0;
}