#include <unistd.h>

void ft_print_combn(int nb){
    int a;
    int b;
    int i;

    a = 0;
    b = nb;
    if (nb < 0)
        write(1, "-", 1);
    if(nb == 0)
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

int main() {
    ft_print_combn(0);
    return 0;
}
