#include "IOWrapper.h"

IOWrapper::IOWrapper()
{
	FileManager = new FileWrapper("IOContent.txt");
}

IOWrapper::~IOWrapper()
{
	delete FileManager;
	FileManager = nullptr;
}

void IOWrapper::GetUserInput()
{
	std::string localInput;

	std::cin >> localInput;
	FileManager->WriteFile(&localInput);
}

void IOWrapper::DisplayAllInputs()
{
	std::list<std::string> inputs = FileManager->ReadFile();

	std::list<std::string>::iterator it = inputs.begin();

	while (it != inputs.end()) {
		std::cout << *it << std::endl;
		it++;
	}
}
