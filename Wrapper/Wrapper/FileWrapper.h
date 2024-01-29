#pragma once
#include <string>
#include <list>
#include <fstream>
#include <memory>
#include <iostream>

class FileWrapper
{
private:
	std::unique_ptr<std::string> fpath;

public:
	FileWrapper(std::string path);
	
	std::list<std::string> ReadFile();
	void WriteFile(std::string* line);
};

