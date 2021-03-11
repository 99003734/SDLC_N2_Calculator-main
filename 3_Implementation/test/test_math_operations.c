#include "unity.h"
#include <special_Math_Functions.h>

/* Modify these two lines according to the project */
#include <special_Math_Functions.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_logarithm(void);
void test_exponent(void);
void test_squareroot(void);
void test_trigonometry(void);

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
  RUN_TEST(test_logarithm);
  RUN_TEST(test_exponent);
  RUN_TEST(test_squareroot);
  RUN_TEST(test_trigonometry);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_logarithm(void) {
  TEST_ASSERT_EQUAL(1, logarithm(10));
   
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(Error, logarithm(-10));
}
void test_exponent(void) {
  TEST_ASSERT_EQUAL(2.7, exponent(1));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(3.1, exponent(2));
}

void test_squareroot(void) {
  TEST_ASSERT_EQUAL(12, squareroot(144));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(50, squareroot(100));
}

void test_trigonometry(void) {
  TEST_ASSERT_EQUAL(1, trigonometry(90));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(3, trigonometry(45));
}
