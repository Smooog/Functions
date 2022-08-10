#include <unistd.h>

void ft_print_comb2(void) {
    int a;
    int b;
    int c;
    int d;

    a = 48;
    b = 48;
    while (a != 58){
        c = a;
        while (b != 58){
            d = b + 1;
            while (c != 58){
                while (d != 58){
                    write (1, &a, 1);
                    write (1, &b, 1);
                    write (1, " ", 1);
                    write (1, &c, 1);
                    write (1, &d, 1);
                    if (a != 57 || b != 56)
                        write (1, ", ", 2);
                    d++;
                }
                d = 48;
                c++;
            }
            c = a;
            b++;
        }
        b = 48;
        a++;
    }
}

int main() {
    ft_print_comb2();
    return 0;
}
