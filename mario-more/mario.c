#include <stdio.h>
int main(){
    int num;
    printf("Enter a number from 1 to 8: ");
    scanf("%d", &num);
    if (num >= 1 && num <= 8){    
        for (int i = 1; i<= num; i++){
            for (int j = 1; j<= num-i; j++){
                printf(" ");
            }
            for(int k = 1; k<= i; k++){
                printf("#");
            }
            printf("  ");
            for (int l = 1; l<= i; l++){
                printf("#");
            }
            printf("\n");
        }
    } else{
        printf("Enter number from 1 to 8 only\n");
    }
    return 0;
}