#include <unistd.h>

int ft_strlen(char *base){
    int i;

    i = 0;
    while(base[i]){ // считает номер системы
        i++;
    }
    return i;
}

void ft_recursion(int i, int nbr, char *base){
    if(nbr >= i)
        ft_recursion(i, nbr / i, base);
    nbr = nbr % i;
    write(1, &base[nbr], 1);
}

int ft_invalid_argument(int i, char *base){
    int a;

    a = i;
    if(i == 0 || i == 1)
        return 1;
    while(a){
        while(i){
            i--;
            if(base[i] == base[a] || base[i] == '+' || base[i] == '-')
                return 1;
        }
        a--;
        i = a;
    }
    return 0;
}

void ft_atoi_base(int nbr, char *base){
    int i;
    int b;

    i = ft_strlen(base);
    b = ft_invalid_argument(i, base);
    if(b == 1)
        return ;
    if(nbr < 0){
        write(1, "-", 1);
        nbr = nbr * -1;
    }
    ft_recursion(i, nbr, base);
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
    a = a * min;
    return a;
}

int main(){
    ft_atoi_base(ft_atoi(" ---+--+01234.asd"), "0123456789ABCDEF");
    return 0;
}