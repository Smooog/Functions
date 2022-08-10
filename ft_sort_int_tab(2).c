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

void ft_sort_int_tab2(int* tab, int size, int i)
{
    int siz = size;
    int s = siz;
    int a;
    int a1;
    int s1 = i;

    while (i < size){
        a = tab[i];
        a1 = tab[size];
        if (a > a1){
            tab[i] = a1;
            tab[size] = a;
        }
        size--;
        i++;
    }
    if (s != 1)
        ft_sort_int_tab2(tab, s - 1, 0);
    if (s != s1)
        ft_sort_int_tab2(tab, s, s1+1);
}

void ft_sort_int_tab(int* tab, int size){
    size--;
    ft_sort_int_tab2(tab, size, 0);
}

int main() {
    int t[8] = {6450216, 1969002, 6860394, 1792247, 3817293, 5813371, 2581780, 3666823};
    int s;
    int i;

    s = 11;
    i = 0;
    ft_sort_int_tab(t, s);
    while(i != s){
        ft_putnbr(t[i]);
        if (i != s-1)
            write (1, ", ", 2);
        i++;
    }
    return 0;
}
