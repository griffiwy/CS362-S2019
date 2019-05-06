#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* Unit test for the kingdomCards function */

void testKingdomCards(){
	int* t01 = kingdomCards(7, 8, 9, 10, 11, 12, 13, 14, 15, 16);
	int* t02 = kingdomCards(26, 25, 24, 23, 22, 21, 20, 19, 18, 17);
	int* t03 = kingdomCards(10, 10, 22, 22, 17, 17, 16, 16, 9, 9);
	int* t04 = kingdomCards(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
	int* t05 = kingdomCards(27, 28, 29, 30, 31, 32, 33, 34, 35, 36);
	int t = 0;
	if(t01[0] == 7){
		if(t01[5] == 12){
			if(t01[9] == 16){
				t = 1;	
			}
		}
	}
	if(t == 1)
		printf("kingdomCards() : PASS when testing valid array 1\n");
	else
		printf("kingdomCards() : FAIL when testing valid array 1\n");

        t = 0;
        if(t02[0] == 26){
                if(t02[5] == 21){
                        if(t02[9] == 17){
                                t = 1;
                        }
                }
        }
	if(t == 1)
		printf("kingdomCards() : PASS when testing valid array 2\n");
	else
		printf("kingdomCards() : FAIL when testing valid array 2\n");
        t = 1;
        if(t03[0] == 10){
                if(t03[1] == 10){
 			t = 0;
                }
        }
	if(t == 1)
		printf("kingdomCards() : PASS when testing duplicate array\n");
	else
		printf("kingdomCards() : FAIL when testing duplicate array\n");
        t = 1;
        if(t04[0] == 1){
                t = 0;
        }
	if(t == 1)
		printf("kingdomCards() : PASS when testing invalid card type\n");
	else
		printf("kingdomCards() : FAIL when testing invalid card type\n");
        t = 1;
        if(t05[0] == 27){
                t = 0;
        }
	if(t == 1)
		printf("kingdomCards() : PASS when testing invalid card number\n");
	else
		printf("kingdomCards() : FAIL when testing invalid card number\n");
}

int main(int argc, char *argv[]){
	printf("Unit Test 1: \n");
	testKingdomCards();
	return 0;
}

