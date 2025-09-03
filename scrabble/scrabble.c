#include <stdio.h>
#include <ctype.h>
#include <string.h>

//FUNCTION DECLARATION
int myfun(char chr);

//MAIN
int main(){
    char str1[50];
    char str2[50];
    printf("Player 1: ");
    scanf("%s", str1);
    printf("Player 2: ");
    scanf("%s", str2);

    //PLAYER 1 TOTAL
    int player1Total = 0;
    int len1 = strlen(str1);
    for (int i = 0; i < len1; i++){
        int points = myfun(str1[i]);
        player1Total += points;        
    }

    //PLAYER 2 TOTAL
    int player2Total = 0;
    int len2 = strlen(str2);
    for (int j = 0; j < len2; j++){
        int pointss = myfun(str2[j]);
        player2Total += pointss;        
    }

    //RESULT
    if (player1Total > player2Total){
        printf("Player 1 wins!");
    } else if (player1Total < player2Total){
        printf("Player 2 wins!");
    } else{
        printf("Tie!");
    }

    
}
//POINTS DISTRIBUTION FUNCTION
int myfun(char chr){
    chr = tolower(chr);
    int arr[] = { 1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int num = (int)chr;
    num -= 97;
    if (num >= 0  && num <= 25){
        return arr[num];
    } else{
        return 0;
    }
    
}