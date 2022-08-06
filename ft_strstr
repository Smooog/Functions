#include <unistd.h>
#include <string.h>

void ft_putstr(char* str){
    while (*str){
        write (1, str, 1);
        str++;
    }
}

char *ft_strstr(char *str, char *to_find){
    int i;
    int i1;
    int a;

    i = 0;
    i1 = 0;
    a = 0;
    while(to_find[i1]){
        i1 = 0;

        while(str[i] != to_find[i1])
            i++;

        a = i;
        while(str[i] == to_find[i1] && str[i] != 0){
            i++;
            i1++;
        }
        i = a + 1;
    }
    return (&str[a]);
}

int main(){
    char str[22] = "abcde00b1fg001";
    char find[4] = "001";
    ft_putstr(ft_strstr(str, find));
    return 0;
}
