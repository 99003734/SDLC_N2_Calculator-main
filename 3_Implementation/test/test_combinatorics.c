#include "unity.h"
#include <Combinatorics.h>

/* Modify these two lines according to the project */
#include <Combinatorics.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_permutation(void);
void test_permutation2(void);
void test_combination(void);

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
  RUN_TEST(test_permutation);
  RUN_TEST(test_permutation2);
  RUN_TEST(test_combination);
  
  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_permutation(void) {
  TEST_ASSERT_EQUAL(5, permutations(5, 1));
  TEST_ASSERT_EQUAL(12, permutations(4,2));
}
void test_permutation2(void) {
 
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(10, permutations(6, 4));
}
void test_combination(void) {
  TEST_ASSERT_EQUAL(2, combinations(2, 1));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(40, combinations(10, 4));
}

