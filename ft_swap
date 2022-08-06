#include <unistd.h>

void ft_putnbr(int nb){
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

void ft_swap(int *a, int *b){
    int i;
    
    i = *a;
    *a = *b;
    *b = i;
}

int main(){
    int c;
    int c1;
    int *a1;
    int *b1;
    
    c1 = 13;
    c = 12;
    a1 = &c;
    b1 = &c1;
    ft_swap(a1, b1);
    ft_putnbr(c);
    write (1, " ", 1);
    ft_putnbr(c1);
    return 0;
}
