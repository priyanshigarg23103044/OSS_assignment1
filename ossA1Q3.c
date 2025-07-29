#include <stdio.h>

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int st=0, en=0;
    while(str[en]!='\0'){
        en++;
    }
    en--;
    char temp;
    while(st<en){
        temp=str[st];
        str[st]=str[en];
        str[en]=temp;
        st++;
        en--;
    }
    printf("REversed string:%s",str);
    return 0;
}
