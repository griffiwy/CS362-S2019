#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* Unit test for the compare function */

void testCompare(){
	printf("Writing Test Cases \n");
	int t01 = compare(void* 1, void* 2);
	int t02 = compare(2, 1);
	printf("Test case 2");
	int t03 = compare(1, 1);
	int t04 = compare(0, 5);
	int t05 = compare(5, 0);
	int t06 = compare(0, 0);
	int t07 = compare(5, 5);
	int t08 = compare(-4, 4);
	int t09 = compare(4, -4);
	int t10 = compare(-6, 4);
	int t11 = compare(4, -6);
	int t12 = compare(10, 100);
	int t13 = compare(100, 10);
	int t14 = compare(100, 100);

	if(t01 == -1)
		printf("compare() : PASS when testing 1, 2\n");
	else
		printf("compare() : FAIL when testing 1, 2\n");
	if(t02 == 1)
		printf("compare() : PASS when testing 2, 1\n");
	else
		printf("compare() : FAIL when testing 2, 1\n");
	if(t03 == 0)
		printf("compare() : PASS when testing 1, 1\n");
	else
		printf("compare() : FAIL when testing 1, 1\n");
	if(t04 == -1)
		printf("compare() : PASS when testing 0, 5\n");
	else
		printf("compare() : FAIL when testing 0, 5\n");
	if(t05 == 1)
		printf("compare() : PASS when testing 5, 0\n");
	else
		printf("compare() : FAIL when testing 5, 0\n");
	if(t06 == 0)
		printf("compare() : PASS when testing 0, 0\n");
	else
		printf("compare() : FAIL when testing 0, 0\n");
	if(t07 == 0)
		printf("compare() : PASS when testing 5, 5\n");
	else
		printf("compare() : FAIL when testing 5, 5\n");
	if(t08 == -1)
		printf("compare() : PASS when testing -4, 4\n");
	else
		printf("compare() : FAIL when testing -4, 4\n");
	if(t09 == 1)
		printf("compare() : PASS when testing 4, -4\n");
	else
		printf("compare() : FAIL when testing 4, -4\n");
	if(t10 == -1)
		printf("compare() : PASS when testing -6, 4\n");
	else
		printf("compare() : FAIL when testing -6, 4\n");
	if(t11 == 1)
		printf("compare() : PASS when testing 4, -6\n");
	else
		printf("compare() : FAIL when testing 4, -6\n");
	if(t12 == -1)
		printf("compare() : PASS when testing 10, 100\n");
	else
		printf("compare() : FAIL when testing 10, 100\n");
	if(t13 == 1)
		printf("compare() : PASS when testing 100, 10\n");
	else
		printf("compare() : FAIL when testing 100, 10\n");
	if(t14 == 0)
		printf("compare() : PASS when testing 100, 100\n");
	else
		printf("compare() : FAIL when testing 100, 100\n");
}

int main(int argc, char *argv[])
{
    testCompare();
    return 0;
}

