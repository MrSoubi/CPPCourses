#include "FileWrapper.h"

FileWrapper::FileWrapper(std::string path)
{
	fpath = std::make_unique<std::string>(path);
}

std::list<std::string> FileWrapper::ReadFile()
{
	std::list<std::string> localData; // Stack allocation

	std::ifstream fstream(*fpath);
	
	std::string line;

	while (!fstream.eof()) {
		std::getline(fstream, line);
		localData.emplace_back(line);
	}

	fstream.close();

	return localData;
}

void FileWrapper::WriteFile(std::string* line)
{
	std::ofstream fstream(*fpath, std::ios_base::app);

	if (!fstream) {
		std::cout << "Bug avec l'ouverture du fichier" << std::endl;
		return;
	}

	fstream << *line << std::endl;

	fstream.close();
}
