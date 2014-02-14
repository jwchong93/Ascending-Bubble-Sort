#include "unity.h"
#include "BubbleSort.h"


void setUp(){}

void tearDown () {}



void test_compareAndSwap_should_not_swap_if_in_order()

{

 int array[]={1,2};

 compareAndSwap(&array[0],&array[1]);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)11, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)12, UNITY_DISPLAY_STYLE_INT);

}



void test_compareAndSwap_should_swap_if_not_in_order()

{

 int array[]={8,4};

 compareAndSwap(&array[0],&array[1]);

 UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)19, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)20, UNITY_DISPLAY_STYLE_INT);

}



void test_compareAndSwap_should_not_swap_if_in_order_for_negative_numbers()

{

 int array[]={-10,-5};

 compareAndSwap(&array[0],&array[1]);

 UnityAssertEqualNumber((_U_SINT)((-10)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)27, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((-5)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)28, UNITY_DISPLAY_STYLE_INT);

}



void test_compareAndSwap_should_swap_if_not_in_order_for_negative_numbers()

{

 int array[]={-11,-22};

 compareAndSwap(&array[0],&array[1]);

 UnityAssertEqualNumber((_U_SINT)((-22)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)35, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((-11)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)36, UNITY_DISPLAY_STYLE_INT);

}
