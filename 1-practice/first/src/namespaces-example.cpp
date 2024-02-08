#include <iostream>
#include <string>

// This is an example of a namespace and namespace is used to avoid name conflicts.
// For example, if you have a function called "print" and you want to use a library that also has a function called "print",
// you can put your function in a namespace to avoid name conflicts.
// You can also use a namespace to group functions and variables together.
// You can also use a namespace to avoid name conflicts with other libraries.
// And access the functions and variables in the namespace using the scope resolution operator (::).
namespace namespaceTest1
{
	const std::string test = "test - 1";
} // namespace namespaceTest1

namespace namespaceTest2
{
	const std::string test = "test - 2";
} // namespace namespaceTest2

void namespacesExample()
{

	std::cout << "namespaceTest1::test: " << namespaceTest1::test << std::endl;
	std::cout << "namespaceTest2::test: " << namespaceTest2::test << std::endl;
}