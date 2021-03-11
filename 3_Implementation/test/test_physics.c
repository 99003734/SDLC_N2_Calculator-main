#include "unity.h"
#include <physics.h>

/* Modify these two lines according to the project */
#include <physics.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions 
void test_permutation(void);
void test_permutation2(void);
void test_combination(void);
*/

void test_acceleration(void);
void test_capacitive_rec(void);
void test_circular_velocity(void);
void test_gravitation_force(void);
void test_projectile_motion(void);

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
  RUN_TEST(test_acceleration);
  RUN_TEST(test_capacitive_rec);
  RUN_TEST(test_circular_velocity);
  RUN_TEST(test_gravitation_force);
  RUN_TEST(test_projectile_motion);
  
  
  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_acceleration(void) {
	
  TEST_ASSERT_EQUAL(1, acceleration(5,2,3));
  TEST_ASSERT_EQUAL(3, acceleration(12,3,3));
  
}
void test_capacitive_rec(void) {

  TEST_ASSERT_EQUAL(0.0015915, capacitive_rec(10,10));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, capacitive_rec(5, 2));
}
void test_circular_velocity(void) {
	
  TEST_ASSERT_EQUAL(6.283185, circular_velocity(3,3));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(30, circular_velocity(5,2));
}

void test_gravitation_force(void) {
	
  TEST_ASSERT_EQUAL(0.0000010005, gravitation_force(100,150,1));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, gravitation_force(1000,1500,10));
}

void test_projectile_motion(void) {
	
  TEST_ASSERT_EQUAL(2.209248, projectile_motion(5,30));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(80, projectile_motion(25,45));
}
