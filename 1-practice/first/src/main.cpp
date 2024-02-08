#include <iostream>
#include <string>
#include <vector>
#include <ctime>

#include "fancy-log.h"
#include "namespaces-example.h"
#include "random-example.h"
#include "while-loop-input-example.h"
#include "overloded-fn-and-random-int-example.h"

// void FancyLog(const char *message);

int main()
{
	// Using std::cout and std::endl
	// '<<' is used to insert the value of a variable into the output stream.
	// And what is an output stream?
	// An output stream is a sequence of characters that can be written to a file, console, etc.
	// std::cout is used to print on the console
	// std::endl is used to print a new line and flush the buffer
	// std::endl is used to improve performance
	// And what does flushing the buffer means?
	// It means that it writes the buffer to the console.
	// And why is it important to flush the buffer?
	// Because the buffer is used to store the output before it's written to the console.
	// And if the program crashes before the buffer is written to the console, the output will be lost.
	// But it can hurt performance.
	// By using instead of '\n' for simple newline.
	// Which could lead to a lot of unnecessary flushing.
	// So it's better to use '\n' for simple newline.
	// And use std::endl for flushing the buffer.
	std::cout << "Hello, World!" << std::endl;

	std::cout << "getRandomInt  " << getRandomInt() << ", " << getRandomInt() << std::endl;
	std::cout << "getRandomInt(10): " << getRandomInt(10) << ", " << getRandomInt(10) << std::endl;
	FancyLog("Hello, World!");
	namespacesExample();
	// whileLoopInputExample();
	// numberGuessingGame();

	// This is an example of a vector.
	// A vector is a dynamic array is an array that can change in size.
	// And it's used to store a collection of elements of the same type in a contiguous memory location.
	// And have useful methods like push_back, pop_back, size, etc.
	std::vector<int> vec = {1, 2, 3};

	std::cout << "vec.size(): " << vec.size() << std::endl;

	for (auto num : vec)
	{
		std::cout << "num: " << num << std::endl;
	}

	std::string hobby;
	std::cout << "What's your hobby?" << std::endl;
	std::cin >> hobby;

	std::cout << "What's your name?" << std::endl;

	// 'std::getline' is used to read a line from the input stream.
	// 'std:getLine' needs parameters, the first parameter is the input stream and the second parameter is the variable to store the line.
	// And what is a line?
	// A line is a sequence of characters that ends with a newline character.
	// for example, 'std::getline(std::cin, name);' is used to read a line from the console and store it in the variable 'name'.
	// And 'std::cin' is used to read from the input stream.
	// And 'std::ws' is used to ignore leading whitespace.
	// And what is leading whitespace?
	// Leading whitespace is the whitespace at the beginning of a line.
	// It could come from the previous input.
	std::string name;
	std::getline(std::cin >> std::ws, name);
	std::cout << "Hello, " << name << ", your hobby is " << hobby << std::endl;

	// You have been saying stream this and stream that.
	// But I still don't understand what a stream is.
	// A stream is a sequence of characters that can be read from or written to a file, console, etc.
	// Why is so hard to grasp and understand? could you explain it in a simpler way with examples?
	// A stream is like a conveyor belt that moves characters from one place to another.
	// For example, 'std::cin' is a conveyor belt that moves characters from the console to the program.
	// And 'std::cout' is a conveyor belt that moves characters from the program to the console.

	std::cin.get();

	return 0;
}
