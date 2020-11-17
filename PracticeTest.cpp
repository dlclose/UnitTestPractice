/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};
//Tests for isPalindrome
TEST(PracticeTest, is_not_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Not a palindrome");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_simple_palindrome_one)
{
    Practice obj;
    bool actual = obj.isPalindrome(":(:");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, is_simple_palindrome_two)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, is_simple_palindrome_three)
{
    Practice obj;
    bool actual = obj.isPalindrome("a");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, is_simple_palindrome_four)
{
    Practice obj;
    bool actual = obj.isPalindrome("balloon");
    ASSERT_FALSE(actual);
}
TEST(PracticeTest, is_simple_palindrome_five)
{
    Practice obj;
    bool actual = obj.isPalindrome("racecar");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, is_simple_palindrome_six)
{
    Practice obj;
    bool actual = obj.isPalindrome("%1abbaccab~baccabba1%");
    ASSERT_TRUE(actual);
}

//end of tests for isPalindrome


//Tests for sortDescending
TEST(PracticeTest, sort_descending_123)
{
    Practice obj;
    int a = 1, b = 2, c =3;
    bool actual = obj.sortDescending(a, b, c);
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, sort_descending_132)
{
    Practice obj;
    int a = 1, b = 2, c =3;
    bool actual = obj.sortDescending(a, c, b);
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, sort_descending_213)
{
    Practice obj;
    int a = 1, b = 2, c =3;
    bool actual = obj.sortDescending(b, a, c);
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, sort_descending_231)
{
    Practice obj;
    int a = 1, b = 2, c =3;
    bool actual = obj.sortDescending(b, c, a);
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, sort_descending_312)
{
    Practice obj;
    int a = 1, b = 2, c =3;
    bool actual = obj.sortDescending(c, a, b);
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, sort_descending_321)
{
    Practice obj;
    int a = 1, b = 2, c =3;
    bool actual = obj.sortDescending(c, b, a);
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, sort_descending_empty)
{
    Practice obj;
    int a = NULL, b, c;
    bool actual = obj.sortDescending(c, b, a);
    ASSERT_FALSE(actual);
}
TEST(PracticeTest, sort_descending_one_empty)
{
    Practice obj;
    int a, b = 1, c = 2;
    bool actual = obj.sortDescending(c, b, a);
    ASSERT_TRUE(actual);
}
//end of sortDescending tests
