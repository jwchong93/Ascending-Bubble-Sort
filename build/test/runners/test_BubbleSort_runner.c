/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_compareAndSwap_should_not_swap_if_in_order(void);
extern void test_compareAndSwap_should_swap_if_not_in_order(void);
extern void test_compareAndSwap_should_not_swap_if_in_order_for_negative_numbers(void);
extern void test_compareAndSwap_should_swap_if_not_in_order_for_negative_numbers(void);
extern void test_sortLargestToRightMost_should_move_largest_to_the_end(void);
extern void test_sortLargestToRightMost_should_move_largest_to_the_end_for_3_elements(void);
extern void test_sortLargestToRightMost_should_move_largest_to_the_end_for_4_elements(void);
extern void test_bubbleSort_should_sort_2_elements_correctly(void);
extern void test_bubbleSort_should_sort_3_elements_correctly(void);
extern void test_bubbleSort_should_sort_5_elements_correctly(void);


//=======Test Reset Option=====
void resetTest()
{
  tearDown();
  setUp();
}


//=======MAIN=====
int main(void)
{
  Unity.TestFile = "test_BubbleSort.c";
  UnityBegin();
  RUN_TEST(test_compareAndSwap_should_not_swap_if_in_order, 7);
  RUN_TEST(test_compareAndSwap_should_swap_if_not_in_order, 15);
  RUN_TEST(test_compareAndSwap_should_not_swap_if_in_order_for_negative_numbers, 23);
  RUN_TEST(test_compareAndSwap_should_swap_if_not_in_order_for_negative_numbers, 31);
  RUN_TEST(test_sortLargestToRightMost_should_move_largest_to_the_end, 39);
  RUN_TEST(test_sortLargestToRightMost_should_move_largest_to_the_end_for_3_elements, 47);
  RUN_TEST(test_sortLargestToRightMost_should_move_largest_to_the_end_for_4_elements, 56);
  RUN_TEST(test_bubbleSort_should_sort_2_elements_correctly, 66);
  RUN_TEST(test_bubbleSort_should_sort_3_elements_correctly, 75);
  RUN_TEST(test_bubbleSort_should_sort_5_elements_correctly, 85);

  return (UnityEnd());
}
