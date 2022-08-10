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
        else{
            nb = nb%10 + 48;
            write (1, &nb, 1);
        }
    }
}

void ft_rev_int_tab(int* tab, int size{
    int p;
    int i;

    i = 0;
    size--;
    while (i != size){
        p = tab[i];
        tab[i] = tab[size];
        tab[size] = p;
        i++;
        size--;
    }
}

int main(){
    int t[11] = {42, -2147483648,3,4,5,6,0,8,9,2147483647,50};
    int s;
    int i;
    
    s = 11;
    i = 0;
    ft_rev_int_tab(t, s);
    while (i != s){
        ft_putnbr(t[i]);
        if (i != s-1)
            write (1, ", ", 2);
        i++;
    }
    return 0;
}
