#include "unity.h"
#include <profitloss.h>

/* Modify these two lines according to the project */
#include <profitloss.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_cal_profit(void);
void test_discount(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_cal_profit);
  RUN_TEST(test_discount);
  
  
  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_cal_profit(void) {
  TEST_ASSERT_EQUAL(147, cal_profit(200, 53));
  TEST_ASSERT_EQUAL(15, cal_profit(20, 5));
}
void test_discount(void) {
	
	
   TEST_ASSERT_EQUAL(450, discount(500, 10));
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(100, discount(120, 5));
}
