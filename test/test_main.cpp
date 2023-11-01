#include <unity.h>
#include "stdio.h"
#include "SimpleCLI.h"

void setUp(void) {
}

void tearDown(void) {
}


void test_string_replace(void) {
    
    TEST_ASSERT_EQUAL_STRING("Helo, world?", "Hello, world?");
}

int main()
{

    UNITY_BEGIN();
    printf("ciao\n");

    RUN_TEST(test_string_replace);

    UNITY_END(); // stop unit testing
}

void loop()
{
}