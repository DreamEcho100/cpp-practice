#include <iostream>

void Log(const char* message) {
	std::cout << "----------------\n" << message << "\nFrom `Log`\n" << "----------------" << std::endl;
}
