#include "unity.h"
#include "BubbleSort.h"

void setUp(){}
void tearDown () {}

void test_compareAndSwap_should_not_swap_if_in_order()
{
	int array[]={1,2};
	compareAndSwap(&array[0],&array[1]);
	TEST_ASSERT_EQUAL(1,array[0]);
	TEST_ASSERT_EQUAL(2,array[1]);
}

void test_compareAndSwap_should_swap_if_not_in_order()
{
	int array[]={8,4};
	compareAndSwap(&array[0],&array[1]);
	TEST_ASSERT_EQUAL(4,array[0]);
	TEST_ASSERT_EQUAL(8,array[1]);
}

void test_compareAndSwap_should_not_swap_if_in_order_for_negative_numbers()
{
	int array[]={-10,-5};
	compareAndSwap(&array[0],&array[1]);
	TEST_ASSERT_EQUAL(-10,array[0]);
	TEST_ASSERT_EQUAL(-5,array[1]);
}

void test_compareAndSwap_should_swap_if_not_in_order_for_negative_numbers()
{
	int array[]={-11,-22};
	compareAndSwap(&array[0],&array[1]);
	TEST_ASSERT_EQUAL(-22,array[0]);
	TEST_ASSERT_EQUAL(-11,array[1]);
}

void test_sortLargestToRightMost_should_move_largest_to_the_end()
{
	int array[]={13,9};
	sortLargestToRightMost(array,2);
	TEST_ASSERT_EQUAL(9,array[0]);
	TEST_ASSERT_EQUAL(13,array[1]);
}

void test_sortLargestToRightMost_should_move_largest_to_the_end_for_3_elements()
{
	int array[]={6,3,5};
	sortLargestToRightMost(array,3);
	TEST_ASSERT_EQUAL(3,array[0]);
	TEST_ASSERT_EQUAL(5,array[1]);
	TEST_ASSERT_EQUAL(6,array[2]);
}

void test_sortLargestToRightMost_should_move_largest_to_the_end_for_4_elements()
{
	int array[]={10,5,2,1};
	sortLargestToRightMost(array,4);
	TEST_ASSERT_EQUAL(1,array[0]);
	TEST_ASSERT_EQUAL(2,array[1]);
	TEST_ASSERT_EQUAL(5,array[2]);
	TEST_ASSERT_EQUAL(10,array[3]);
}