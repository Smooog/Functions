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

int ft_strcmp(char *s1, char *s2){
    int i; //счетчик

    i = 0;
    while (s1[i] == s2[i])
        i++;

    if (s1[i] == 0 && s2[i] == 0)
        return 0;

    if (s1[i] > s2[i])
        return 1;

    if (s1[i] < s2[i])
        return -1;
}

int main() {
    char str1 [5] = "Abcz";
    char str2 [5] = "A";
    ft_putnbr(ft_strcmp(str1, str2));
    return 0;
}
