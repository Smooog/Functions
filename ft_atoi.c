#include <unistd.h>
#include <string.h>
#include <stdio.h>
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
        
        else
        {
            nb = nb%10 + 48;
            write (1, &nb, 1);
        }
    }
}

int ft_atoi(char *str){
    int i;
    int min;
    int a;

    i = 0;
    min = 1;
    a = 0;
    while(str[i] >= 9 && str[i] <= 13 || str[i] == 32) //all space
        i++;

    while(str[i] == 43 || str[i] == 45){ // - or +
        if(str[i] == 45) // if -
            min = min * -1;
        i++;
    }

    while(str[i] >= 48 && str[i] <= 57) {  //if int
        a = a * 10 + str[i] - 48;
        i++;
    }
    return a * min;
}

int main(){
    char str[18] = " ---+--+02134.567";
    ft_putnbr(ft_atoi(str));
    return 0;
}
