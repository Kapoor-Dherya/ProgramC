#include <stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num <= 0){
        printf("Enter a positve number greater than 0\n");
    }else{    
        for (int i = 1; i<= num; i++){
            for (int j = 1; j<= num-i; j++){
                printf(" ");
            }
            for(int k = 1; k<= i; k++){
                printf("#");
            }
            printf("\n");
        }
    }
    return 0;
}
//Don't know how to check for char, strings, or only Enter :(