#include "unity.h"
#include <mensuration.h>

/* Modify these two lines according to the project */
#include <mensuration.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_area of square(void);
void test_area of square_testcase2(void);
void test_area of circle(void);
void test_area of sphere(void);
void test_volume of sphere(void);

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
  RUN_TEST(test_area of square();
  RUN_TEST(test_area of square(_testcase2);
  RUN_TEST(test_area of circle);
  RUN_TEST(test_area of sphere();
  RUN_TEST(test_volume of sphere();

  /* Close the Unity Test Framework */
  return UNITY_END();
}
           

/* Write all the test functions */ 
void test_area of square(void) {
  TEST_ASSERT_EQUAL(4, area of square(2));
  TEST_ASSERT_EQUAL(9, area of square(3));
}
void test_area of square_testcase2(void) {
 
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(59, area of square(7));
}
void test_area of circle(void) {
  TEST_ASSERT_EQUAL(28, area of circle(3));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(30, area of circle(10));
}

void test_area of sphere(void) {
  TEST_ASSERT_EQUAL(50, area of sphere(2));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(2,area of sphere(5));
}

void test_volume of sphere(void) {
  TEST_ASSERT_EQUAL(4, volume of sphere(1));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(20, volume of sphere(2));
}
           
           
