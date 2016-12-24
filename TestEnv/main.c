#ifndef NULL
#define NULL 0
#endif

#include <Util.h>

extern void SORT_INSERTION_TEST(void **state);
extern void SORT_MERGE_TEST(void **state);
extern void Sum_TEST(void **state);
extern void SUB_TEST(void **state);
extern void MULTI_TEST(void **state);
extern void DIV_TEST(void **state);
extern void PER_TEST(void **state);

int main(void) {

	cmocka_set_message_output(CM_OUTPUT_TAP);

	const struct CMUnitTest tests[] = {
	cmocka_unit_test(SORT_INSERTION_TEST),cmocka_unit_test(SORT_MERGE_TEST),cmocka_unit_test(Sum_TEST),cmocka_unit_test(SUB_TEST),
	cmocka_unit_test(MULTI_TEST),cmocka_unit_test(DIV_TEST),cmocka_unit_test(PER_TEST)};



	return cmocka_run_group_tests(tests, NULL, NULL);

}
