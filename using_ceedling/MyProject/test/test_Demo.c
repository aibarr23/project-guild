
#ifdef TEST

#include "unity.h"

#include "Demo.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_Demo_NeedToImplement(void)
{
    TEST_ASSERT_EQUAL_INT(1,run_demo(0,0));//this will fial
    TEST_ASSERT_EQUAL_INT(3, run_demo(1,1));
    TEST_ASSERT_EQUAL_INT(6, run_demo(2,2));
    TEST_ASSERT_EQUAL_INT(13, run_demo(4,5));
    TEST_IGNORE_MESSAGE("Need to Implement Demo");
}

#endif // TEST
