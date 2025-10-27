#include "FileManipulator.hpp"

FileManipulator::FileManipulator(const std::string filePath, const std::string stringToReplace, const std::string replacementString)
	: _filePath(filePath),_stringToReplace(stringToReplace),_replacementString(replacementString),_text("") {}

FileManipulator::~FileManipulator() {}

bool FileManipulator::setText() {
    std::ifstream inputFile(_filePath.c_str());
    if (!inputFile.is_open()) {
        std::cerr << "Error: can not open " << _filePath << std::endl;
        return false;
    }
    std::string content(
        (std::istreambuf_iterator<char>(inputFile)),
         std::istreambuf_iterator<char>()
    );
	_text = content;
    return true;
}

bool FileManipulator::replaceWord() {
    if (_stringToReplace.empty())
        return true;
    size_t pos = true;
    while ((pos = _text.find(_stringToReplace, pos)) != std::string::npos) {
        _text.erase(pos, _stringToReplace.length());
        _text.insert(pos, _replacementString);
        pos += _replacementString.length();
    }
	return true;
}

bool FileManipulator::createAndWriteFile() {
    std::ofstream outputFile((_filePath + ".replace").c_str());

    if (!outputFile.is_open()) {
    	std::cerr << "Error: can not create/open " << _filePath + ".replace" << std::endl;
        return false;
    }
    outputFile << _text << std::endl;
    return true;
}
