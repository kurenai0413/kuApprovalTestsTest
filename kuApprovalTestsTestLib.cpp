#include "kuApprovalTestsTestLib.h"

int kuApprovalTestsTestLib::Foo(std::string testStrInput)
{
    if ((testStrInput == "foo") || (testStrInput == "Foo"))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

bool kuApprovalTestsTestLib::Bar(std::string testStrInput)
{
    if ((testStrInput == "Bar") || (testStrInput == "bar"))
    {
        return true;
    }
    else
    {
        return false;
    }
}

std::string kuApprovalTestsTestLib::FooBar(int testInput)
{
    if (testInput == 1)
    {
        return std::string("FooBar");
    }
    else
    {
        return std::string("BOO");
    }
}
