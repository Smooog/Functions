#include <unistd.h>

void ft_is_negative(int n) {
    int neg = 78;
    int pos = 80;
    if (n >= 0)
        write (1, &pos, 1);
    else 
        write (1, &neg, 1);
}

int main() {
    ft_is_negative(0);
    return 0;
}
