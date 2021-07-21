#include <stdlib.h>
#include <check.h>
#include "../include/hello.h"

START_TEST (test_hello)
{
    const char *returnString = sayHello("James");
    ck_assert_str_eq(returnString, "Hello James");
}
END_TEST

Suite* hello_suite()
{
    Suite *suite;
    TCase *tc_core;

    suite = suite_create("Hello");

    /* Core test cases */
    tc_core = tcase_create("Core");

    /* Add test cases */
    tcase_add_test(tc_core, test_hello);
    suite_add_tcase(suite, tc_core);

    return suite;
}

int main(int argc, char **argv)
{
    int number_failed;
    Suite *suite;
    SRunner *suite_runner;

    suite = hello_suite(); 
    suite_runner = srunner_create(suite);

    srunner_run_all(suite_runner, CK_NORMAL);
    number_failed = srunner_ntests_failed(suite_runner);
    srunner_free(suite_runner);

    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
