#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


/* Random test for the village card */

void randomVillageTest(){
//Random Game State
        int seed = rand() % 1000;
        struct gameState G;
        int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse,
                sea_hag, tribute, smithy};
        initializeGame(2, k, seed, &G);
        int player = rand() % 1;
        G.handCount[player] = rand() % 50;
	G.numActions = rand() % 50;
        int handPos = rand() % 50;

//Get Correct Values
        int correctCard = G.handCount[player];
        correctCard += 1;
        correctCard -= 1;
	int correctAct = G.numActions;
	correctAct += 2;


//Use the card
	cardEffect(village, 0, 0, 0, &G, handPos, 0);

//Check the results agains the correct values
	int testCard = G.handCount[player];
	int testAct = G.numActions;
	printf("Testing %i = %i & %i = %i\n", correctCard, testCard, correctAct, testAct);
        if(testCard != correctCard)
                printf("randomVillageTest() : FAIL\n");
        else if(testAct != correctAct)
                printf("randomVillageTest() : FAIL\n");
        else
		printf("randomVillageTest() : PASS\n");


}

int main(int argc, char *argv[]){
        printf("\nRandom Card Test 2: \n");
	int i;
	int numTest = 10;
	for(i = 0; i<numTest; i++){
        	randomVillageTest();
	}
        return 0;
}

