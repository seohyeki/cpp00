#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
	std::string		filename;
	std::string		s1;
	std::string		s2;

	if (argc == 4) {
		filename = argv[1];
		s1 = argv[2];
		s2 = argv[3];

		std::ifstream	infile(filename);
		std::ofstream	outfile(filename + ".replace");
		std::string		s;
		
		if (!infile.is_open() || !outfile.is_open()) {
			std::cout << "File open error." << std::endl;
			return (1);
		}
		getline(infile, s);
		while (infile) {
			if (s == s1)
				outfile << s2 << std::endl;
			else
				outfile << s << std::endl;
			getline(infile, s);
		}
	} else {
		std::cout << "Wrong number of parameters." << std::endl;
		return (1);
	}
	return (0);
}