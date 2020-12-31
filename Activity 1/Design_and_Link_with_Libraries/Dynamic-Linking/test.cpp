#include "mystring.h"
#include "myutils.h"
#include "bitmask.h"
#include <gtest/gtest.h>

TEST(mystrlen, mystrlength)
{
	EXPECT_EQ(7,mystrlen("Naveen"));
}
TEST(mystrcpy, mystringcopy)
{
	std::string str="Naveen", str1 = "Naveen", str2 = "w";
	EXPECT_EQ(str, mystrcpy(str2, str1));
}
TEST(mystrcat, mystringconcat)
{
	std::string str="Naveen", str1 = "Nav", str2 = "een";
	EXPECT_EQ(str, mystrcat(str1, str2));
}
TEST(mystrcmp, mystringcompare)
{
	std::string str1 = "Naveen", str2 = "Naveen";
	EXPECT_TRUE(mystrcmp(str1, str2));
}
TEST(factorial, factorial)
{
	EXPECT_EQ(120, factorial(5));
}
TEST(isPrime, prime_or_not)
{
	EXPECT_TRUE(isPrime(17));
}
TEST(isPalindrome, palindrome_or_not)
{
	EXPECT_TRUE(isPalindrome(5665));
}
TEST(vsum, vsumargs)
{
	EXPECT_EQ(6, vsum(3,1,2,3));
}
TEST(set, set_bit)
{
	EXPECT_EQ(10,set(2,8));
}
TEST(reset, reset_bit)
{
	EXPECT_EQ(5, reset(2, 7));
}
TEST(flip, flip_bit)
{
	EXPECT_EQ(15, flip(4, 7));
}

