#ifndef _FILE_MANIPULATOR_H_
#define _FILE_MANIPULATOR_H_

#include <iostream>
#include <string>
#include <fstream>

class FileManipulator
{
	private:
	 const std::string _filePath;
	 const std::string _stringToReplace;
	 const std::string _replacementString;
	 std::string _text;

	public:
	 FileManipulator(const std::string filePath, const std::string stringToReplace, const std::string replacementString);
	 ~FileManipulator();
	 bool setText();
	 bool replaceWord();
	 bool createAndWriteFile();
};

#endif // _FILE_MANIPULATOR_H_
