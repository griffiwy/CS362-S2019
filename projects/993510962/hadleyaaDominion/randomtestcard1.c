#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


/* Random test for the smithy card */

void randomSmithyTest(){
//Random Game State
	int seed = rand() % 1000;
	struct gameState G;
	int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse,
		sea_hag, tribute, smithy};
	initializeGame(2, k, seed, &G);
	int player = rand() % 1;
	G.handCount[player] = rand() % 50;
	int handPos = rand() % 50;

//Get Correct Value
	int correctCard = G.handCount[player];
	correctCard += 3;
	correctCard -= 1;

//Use the card
	smithyEffect(0, 0, 0, 0, &G, 0, handPos, player);


//Check the results agains the correct value
	int testCard = G.handCount[player];
	printf("Testing %i = %i \n", correctCard, testCard);
	if(testCard != correctCard)
		printf("randomSmithyTest() : FAIL\n");
	else
		printf("randomSmithyTest() : PASS\n");
}

int main(int argc, char *argv[]){
	printf("Random Card Test 1: \n");
	int i;
	int numTest = 10;
	for(i = 0; i<numTest; i++){
		randomSmithyTest();
	}
	return 0;
}
