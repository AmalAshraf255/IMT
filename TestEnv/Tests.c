/*
 * Tests.c
 *
 *  Created on: Apr 2, 2016
 *      Author: helmelig
 */
#include <Util.h>
#include "Sort.h"
int Sum(int X, int Y);
int SUB(int X, int Y);
int MULTI(int X, int Y);
int DIV(int X, int Y);
int PER(int X, int Y);
void SORT_INSERTION_TEST(void **state) {

	(void) state;

	u8 testArray[] = { 3, 7, 1, 2, 9, 5 };
	const u8 expcted[] = { 1, 2, 3, 5, 7, 9 };

	Sort_Insertion(testArray, (u8) NELEMS(testArray));

	u8 index = 0;
	for (index = 0; index < NELEMS(expcted); index++) {
		assert_int_equal(testArray[index], expcted[index]);
	}

}

void SORT_MERGE_TEST(void **state) {

	(void) state;

	u8 testArray[] = { 3, 7, 1, 2, 9, 5, 4, 6 };
	const u8 expcted[] = { 1, 2, 3, 4, 5, 6, 7, 9 };

	Sort_Merge(testArray, NELEMS(testArray), 0);
#ifdef DEBUG
	u8 printIndex = 0;
	for (printIndex = 0; printIndex < NELEMS(testArray); printIndex++) {
		printf("%d ", testArray[printIndex]);
	}
#endif
	u8 index = 0;
	for (index = 0; index < NELEMS(expcted); index++) {
		assert_int_equal(testArray[index], expcted[index]);
	}
	//assert_int_equal(0,5);
}


void Sum_TEST(void **state)
{
	(void) state;
int X=10;
int Y=15;
int z;
z= Sum (X,Y);
assert_int_equal(z,25);
}

void SUB_TEST(void **state)
{
	(void) state;
int X=15;
int Y=10;
int z;
z= SUB(X,Y);
assert_int_equal(z,5);
}

void MULTI_TEST(void **state)
{

	(void) state;
int X=5;
int Y=5;
int z;
z=MULTI(X,Y);
assert_int_equal(z,25);
}

void DIV_TEST(void **state)
{

	(void) state;
int X=9;
int Y=3;
int z;
z=DIV(X,Y);
assert_int_equal(z,3);
}

void PER_TEST(void **state)
{

	(void) state;
int X=10;
int Y=8;
int z;
z=PER(X,Y);
assert_int_equal(z,2);
}
