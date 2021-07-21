#include <check.h>
#include "../include/hello.h"

START_TEST (test_hello)
{
    const char *returnString = sayHello("James");
    ck_assert_str_eq(returnString, "Hello James");
}
END_TEST

int main(int argc, char **argv)
{
    return 0;
}
