#include <stdio.h>
#include <stdlib.h>

int main(void) {
        int seed;

        printf("Enter an integer random seed: ");
        scanf("%d", &seed);

        srand(seed);

        int comp_nums[5], user_nums[5];
        int matchCount = 0;
        int i=0;

        printf("To play the Pick-5 game, enter five integers between 1 and 9 (inclusive): ");
        for(i=0; i<5; i++) {
                scanf("%d", &user_nums[i]);
        }
        printf("\n");

        // generate comp_num
        for(i=0; i<5; i++) {
                comp_nums[i] = rand() % 9 + 1;

                if(comp_nums[i] == user_nums[i]) {
                        matchCount++;
                }
        }       

        if(matchCount == 5) {
                printf("\nCongratulations!!! You WIN!!!\n");

        } else if(matchCount == 0) {
               printf("You didn't match any numbers!\n") ;
        } else {
                printf("\nYou only matched %d numbers.\n", matchCount);
                printf("Your numbers matched the Pick-5 numbers at position(s): ");
                for(i=0; i<5; i++) {
                        if(comp_nums[i] == user_nums[i]) {
                                printf("%d ", i);
                        }
                }       
                printf("\n");
        }

        printf("The winning numbers are: ");
        for(i=0; i<5; i++) {
                printf("%d ", comp_nums[i]);
        }
        printf("\n");
        return 0;
}