#include <unistd.h>
#include <stdlib.h>

void ft_putstr(char *str){
    while (*str){
        write (1, str, 1);
        str++;
    }
}

char* ft_strcapitalize(char *str){
    int i;

    i = 0;
    if (str == NULL)
        return(0);
    
    while(str[i]){
        if (i == 0 && str[i] >= 'a' && str[i]<= 'z')
            str[i] = str[i] - 32;
        
        while (str[i] <= 47){
            i++;
            
            if (str[i] >= 'a' && str[i]<= 'z')
                str[i] = str[i] - 32;
        }
        i++;
    }
    return(str);
}

int main(){
    char s[72] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    ft_putstr(ft_strcapitalize(s));
    return 0;
}
