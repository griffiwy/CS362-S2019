#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


/* Random test for the   card */
void randomAdventurerTest(){
//Random Game State
        int seed = rand() % 1000;
        struct gameState G;
        int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse,
                sea_hag, tribute, smithy};
        initializeGame(2, k, seed, &G);
        int player = rand() % 1;
	int drawnTreasure = 0;
	int z = 0;
	int cardDrawn;
	int tempHand[MAX_HAND];


//Get Correct Value
	int correctCard = fullDeckCount(player, copper, &G);
	correctCard += fullDeckCount(player, silver, &G);
	correctCard += fullDeckCount(player, gold, &G);
	correctCard += 2;

//Use the card
	adventurerEffect(cardDrawn, z, 0, 0, &G, tempHand, drawnTreasure, player);
	

//Check the results agains the correct value
        int testCard = fullDeckCount(player, copper, &G);
        testCard += fullDeckCount(player, silver, &G);
        testCard += fullDeckCount(player, gold, &G);
        printf("Testing %i = %i \n", correctCard, testCard);
        if(testCard != correctCard)
                printf("randomAdventurerTest() : FAIL\n");
        else
                printf("randomAdventurerTest() : PASS\n");

}

int main(int argc, char *argv[]){
        printf("\nRandom Card Test 3: \n");
	int i;
	int numTest = 10;
	for(i = 0; i<numTest; i++){
	        randomAdventurerTest();
	}
        return 0;
}

