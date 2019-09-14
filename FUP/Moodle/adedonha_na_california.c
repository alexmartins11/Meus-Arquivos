#include <stdio.h>

int main(){
    int num = 0;

    scanf("%d", &num);



    if(num == 0){
        puts("joguem de novo");
    }else{
        num = num % 26;
        if(num == 0)
            num += 26;
        num = num +96;
        printf("%c\n", num);
        
        
    }




    return 0;
}