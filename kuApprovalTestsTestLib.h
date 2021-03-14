#pragma once

#ifdef KUAPPROVALTESTSTESTLIB_EXPORTS
#define KUAPPROVALTESTSTESTLIB_API __declspec(dllexport)
#else
#define KUAPPROVALTESTSTESTLIB_API __declspec(dllimport)
#endif

#include <iostream>

class KUAPPROVALTESTSTESTLIB_API kuApprovalTestsTestLib
{
public:
	int Foo(std::string testStrInput);
	bool Bar(std::string testStrInput);
	std::string FooBar(int testInput);
};

