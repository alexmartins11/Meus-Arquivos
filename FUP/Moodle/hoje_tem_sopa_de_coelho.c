#include <stdio.h>

int main(){
    long int num = 0;
    scanf("%ld", &num);
    long int a = 0, b = 1;
    long int c = 0;
    if(num == 1 || num == 2) puts("1");
    else{  
        for(int i = 0;i < num;i++){
            c = a + b;
            a = b;
            b = c;
            
        }
        printf("%ld\n", c);
    }


}