#include <unistd.h>
#include <stdlib.h>

void ft_putstr(char* str){
    while (*str){
        write (1, str, 1);
        str++;
    }
}

char* ft_strcpy(char *dest, char *src){
    int i = 0;

    i = 0;
    if (dest == NULL || src == NULL)
        return(NULL);
    
    while(dest[i] != '\0' && src[i] != '\0'){
        dest[i] = src [i];
        i++;
    }
    
    dest[i] = '\0';
    return(dest);
}

int main(){
    char d[14] = "4,[,p,4,r,8vf";
    char s[15] = "1,g,f,3,0,?, d";
    ft_putstr(ft_strcpy(d, s));
    return 0;
}
