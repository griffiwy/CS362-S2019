#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* Unit test for the getCost function */

void testGetCost(){
        int t00 = getCost(0);
        int t01 = getCost(1);
        int t02 = getCost(2);
        int t03 = getCost(3);
        int t04 = getCost(4);
        int t05 = getCost(5);
        int t06 = getCost(6);
        int t07 = getCost(7);
        int t08 = getCost(8);
        int t09 = getCost(9);
        int t10 = getCost(10);
        int t11 = getCost(11);
        int t12 = getCost(12);
        int t13 = getCost(13);
        int t14 = getCost(14);
        int t15 = getCost(15);
        int t16 = getCost(16);
        int t17 = getCost(17);
        int t18 = getCost(18);
        int t19 = getCost(19);
        int t20 = getCost(20);
        int t21 = getCost(21);
        int t22 = getCost(22);
        int t23 = getCost(23);
        int t24 = getCost(24);
        int t25 = getCost(25);
        int t26 = getCost(26);

	if(t00 == 0)
		printf("getCost() : PASS when testing curse\n");
	else
		printf("getCost() : FAIL when testing curse\n");
	if(t01 == 2)
		printf("getCost() : PASS when testing estate\n");
	else
		printf("getCost() : FAIL when testing estate\n");
	if(t02 == 5)
		printf("getCost() : PASS when testing dutchy\n");
	else
		printf("getCost() : FAIL when testing dutchy\n");
	if(t03 == 8)
		printf("getCost() : PASS when testing province\n");
	else
		printf("getCost() : FAIL when testing province\n");
	if(t04 == 0)
		printf("getCost() : PASS when testing copper\n");
	else
		printf("getCost() : FAIL when testing copper\n");
	if(t05 == 3)
		printf("getCost() : PASS when testing silver\n");
	else
		printf("getCost() : FAIL when testing silver\n");
	if(t06 == 6)
		printf("getCost() : PASS when testing gold\n");
	else
		printf("getCost() : FAIL when testing gold\n");
	if(t07 == 6)
		printf("getCost() : PASS when testing adventurer\n");
	else
		printf("getCost() : FAIL when testing adventurer\n");
	if(t08 == 5)
		printf("getCost() : PASS when testing council_room\n");
	else
		printf("getCost() : FAIL when testing council_room\n");
	if(t09 == 4)
		printf("getCost() : PASS when testing feast\n");
	else
		printf("getCost() : FAIL when testing feast\n");
	if(t10 == 4)
		printf("getCost() : PASS when testing gardens\n");
	else
		printf("getCost() : FAIL when testing gardens\n");
	if(t11 == 5)
		printf("getCost() : PASS when testing mine\n");
	else
		printf("getCost() : FAIL when testing mine\n");
	if(t12 == 4)
		printf("getCost() : PASS when testing remodel\n");
	else
		printf("getCost() : FAIL when testing remodel\n");
	if(t13 == 4)
		printf("getCost() : PASS when testing smithy\n");
	else
		printf("getCost() : FAIL when testing smithy\n");
	if(t14 == 3)
		printf("getCost() : PASS when testing village\n");
	else
		printf("getCost() : FAIL when testing village\n");
	if(t15 == 4)
		printf("getCost() : PASS when testing baron\n");
	else
		printf("getCost() : FAIL when testing baron\n");
	if(t16 == 3)
		printf("getCost() : PASS when testing great_hall\n");
	else
		printf("getCost() : FAIL when testing great_hall\n");
	if(t17 == 5)
		printf("getCost() : PASS when testing minion\n");
	else
		printf("getCost() : FAIL when testing minion\n");
	if(t18 == 3)
		printf("getCost() : PASS when testing steward\n");
	else
		printf("getCost() : FAIL when testing steward\n");
	if(t19 == 5)
		printf("getCost() : PASS when testing tribute\n");
	else
		printf("getCost() : FAIL when testing tribute\n");
	if(t20 == 3)
		printf("getCost() : PASS when testing ambassador\n");
	else
		printf("getCost() : FAIL when testing ambassador\n");
	if(t21 == 4)
		printf("getCost() : PASS when testing cutpurse\n");
	else
		printf("getCost() : FAIL when testing cutpurse\n");
	if(t22 == 2)
		printf("getCost() : PASS when testing embargo\n");
	else
		printf("getCost() : FAIL when testing embargo\n");
	if(t23 == 5)
		printf("getCost() : PASS when testing outpost\n");
	else
		printf("getCost() : FAIL when testing outpost\n");
	if(t24 == 4)
		printf("getCost() : PASS when testing salvager\n");
	else
		printf("getCost() : FAIL when testing salvager\n");
	if(t25 == 4)
		printf("getCost() : PASS when testing sea_hag\n");
	else
		printf("getCost() : FAIL when testing sea_hag\n");
	if(t26 == 4)
		printf("getCost() : PASS when testing treasure_map\n");
	else
		printf("getCost() : FAIL when testing treasure_map\n");
}

int main(int argc, char *argv[]){
	printf("Unit Test 3: \n");
	testGetCost();
	return 0;
}

