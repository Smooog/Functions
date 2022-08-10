#include <unistd.h>

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
        else
            {
                nb = nb%10 + 48;
                write (1, &nb, 1);
            }
    }
}

void ft_div_mod(int a, int b, int *div, int *mod){
    *div = a/b;
    *mod = a%b;
}

int main() {
    double c = 13;
    int c1 = 5;
    int d1;
    int m1;

    int *d;
    int *m;

    d = &d1;
    m = &m1;
    ft_div_mod(c, c1, d, m);
    ft_putnbr(d1);
    write (1, " ", 1);
    ft_putnbr(m1);
    return 0;
}
