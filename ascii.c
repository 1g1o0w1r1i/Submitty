   //declare output string with double size of input string
    //because each character of input string will be converted
    //#include <stdio.h>
#include <string.h>
void string2hexString(char* input, char* output)
{
    int a=0,b=0,x;
    while(input[a]!= '\0')
    {
        sprintf((char*)(output+b),"%02X", input[a]);
        a+=1;
        b+=2;
    }
        output[b++] = '\0';
}
int main(){
    int sum;
    char ascii_str[100] ;
    printf("Enter the string:");
    scanf("%s",ascii_str);
    //declare output string with double size of input string
    //because each character of input string will be converted
    //in 2 bytes
    int len = strlen(ascii_str);
    char* hex_str[(len*2)+1];
    
    //converting ascii string to hex string
    string2hexString(ascii_str, hex_str);
    
    printf("ascii_str: %s\n", ascii_str);
    printf("hex_str: %s\n", hex_str);
    sum = sum+(int)hex_str;
    printf("sum:%x",sum);
    return 0;
}
