#include <unistd.h>
#include <stdlib.h>

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

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size) {
    int counter_1;
    int counter_2;

    counter_1 = 0;
    counter_2 = 0;
    if (dest == NULL)
        return 0;
    
    while(dest[counter_1]){
        counter_1++;
    }
    
    if (src == NULL)
        return counter_1;
    
    while(src[counter_2] != '\0' && counter_2 <= size){
        dest[counter_1] = src[counter_2];
        counter_1++;
        counter_2++;
    }
    
    size = counter_1;
    return(size);
}

int main(){
    char s[7] = "World!";
    char d[1024] = "Hello ";
    unsigned int n;

    n = 12;
    ft_putnbr(ft_strlcpy(d, s, n));
    return 0;
}
