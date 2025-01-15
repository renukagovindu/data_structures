 #include <stdio.h>
  void length_of_string( char *str) 
    {
        int len;
        for( len=0;*str !='\0';str++)
        {
            len++;
        }
        printf("length of the string is %d",len);
    }
int main() {
    char str[100];
    int len;

    printf("Enter a string: ");
   scanf("%[^\n]%*c", str);

    length_of_string(str);

    return 0;
}
