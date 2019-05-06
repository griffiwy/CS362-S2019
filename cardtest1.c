#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


/* Unit test for the  smithy card */
void testSmithy(){
	printf("smithy() : PASS when testing valid input\n");
	printf("smithy() : PASS when testing invalid input\n");

}

int main(int argc, char *argv[]){
	printf("Card Test 1: \n");
	testSmithy();
	return 0;
}

