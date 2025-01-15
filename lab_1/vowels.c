#include <stdio.h>
#include <ctype.h>
#include<string.h>
void count(const char *str, int *vow, int *con){
    *vow = 0;
    *con = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); 
        if ((ch >= 'a' && ch <= 'z')) 
        { 
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
            {
                (*vow)++;
            } else
           {
                (*con)++;
            }
        }
    }
}

int main() {
    char str[100];
    int vow, con;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    count(str, &vow, &con);
    printf("Number of vowels: %d\n", vow);
    printf("Number of consonants: %d\n", con);
    return 0;
}
