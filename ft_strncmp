#include <unistd.h>
#include <string.h>

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

int ft_strncmp(char *s1, char *s2, unsigned int n){
    int i; //счетчик

    i = 0;
    while (s1[i] == s2[i] && s1[i] && i != n)
        i++;
    
    return (s1[i] - s2[i]);
}

int main(){
    char str1 [5] = "A34z";
    char str2 [3] = "A3";
    unsigned int n;

    n = 3;
    ft_putnbr(ft_strncmp(str1, str2, n));
    return 0;
}
