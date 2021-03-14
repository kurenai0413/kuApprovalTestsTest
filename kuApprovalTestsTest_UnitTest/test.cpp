#include "pch.h"
#include "ApprovalTests.hpp"
#include "kuApprovalTestsTestLib.h"

using namespace ApprovalTests;

TEST(Test_Foo, ApplyString_Foo_ExpectedInteger_One)
{
	kuApprovalTestsTestLib testObj;

	//EXPECT_EQ(testObj.Foo("Foo"), 1);
	Approvals::verify(testObj.Foo("Foo"));
}
TEST(Test_Foo, ApplyString_Otherwise_ExpectedInteger_Zero)
{
	kuApprovalTestsTestLib testObj;

	//EXPECT_EQ(testObj.Foo("bar"), 0);
	Approvals::verify(testObj.Foo("bar"));
}
TEST(Test_Bar, ApplyString_Bar_Expected_True)
{
	kuApprovalTestsTestLib testObj;

	//EXPECT_TRUE(testObj.Bar("Bar"));
	Approvals::verify(testObj.Bar("Bar"));
}
TEST(Test_Bar, ApplyString_Bar_Expected_False)
{
	kuApprovalTestsTestLib testObj;

	//EXPECT_FALSE(testObj.Bar("foo"));
	Approvals::verify(testObj.Bar("foo"));
}
TEST(Test_FooBar, ApplyInteger_One_ExpectedString_FooBar)
{
	kuApprovalTestsTestLib testObj;

	//EXPECT_EQ(testObj.FooBar(1), "FooBar");
	Approvals::verify(testObj.FooBar(1));
}
TEST(Test_FooBar, ApplyInteger_Otherwise_ExpectedString_BOO)
{
	kuApprovalTestsTestLib testObj;

	//EXPECT_EQ(testObj.FooBar(23), "BOO");
	Approvals::verify(testObj.FooBar(23));
}