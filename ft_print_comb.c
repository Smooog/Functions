#include <unistd.h>

void ft_print_comb(void) {
    int a;
    int b;
    int c;

    a = 48;
    while (a != 56){
        b = a + 1;
        c = b + 1;
        
        while (b != 57){
            while (c != 58){
                write(1, &a, 1);
                write(1, &b, 1);
                write(1, &c, 1);
                if(a != 55)
                    write (1, ", ", 2);
                c++;
            }
            b++;
            c = b + 1;
        }
        a++;
    }
}

int main() {
    ft_print_comb();
    return 0;
}
