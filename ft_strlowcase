#include <unistd.h>
#include <stdlib.h>

void ft_putstr(char *str){
    while (*str){
        write (1, str, 1);
        str++;
    }
}

char* ft_strlowcase(char *str){
    int i;

    i = 0;
    if (str == NULL)
        return(0);
    
    while(str[i]){
        if (str[i] >= 'A' && str[i]<= 'Z')
            str[i] = str[i] + 32;
        
        i++;
    }
    return(str);
}

int main(){
    char s[8] = "abCDifG";
    ft_putstr(ft_strlowcase(s));
    return 0;
}
