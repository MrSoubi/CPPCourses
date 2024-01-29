#pragma once
#include <string>
#include <list>
#include <iostream>
#include "FileWrapper.h"

class IOWrapper
{
private:
	FileWrapper* FileManager;

public:
	IOWrapper();
	~IOWrapper();
	void GetUserInput();
	void DisplayAllInputs();
};