#include "FileManipulator.hpp"

int main(int argc, char *argv[]) {
	if (argc != 4)
	{
		std::cerr << "Error:Please enter four parameters." << std::endl;
		std::cerr << "Usage: ./replace <file_path> <string_to_replace> <replacement_string>" << std::endl;
		return 1;
	}
	FileManipulator file(argv[1], argv[2], argv[3]);
	if (!file.setText() || !file.replaceWord() || !file.createAndWriteFile())
		return 1;
    return 0;
}
