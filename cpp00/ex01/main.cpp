#include "PhoneBook.hpp"

int main() {
	PhoneBook	phone_book;
	std::string	cmd;
	int			index = 0;

	while (1) {
		std::cout << "ADD 또는 SEARCH 또는 EXIT 중 하나를 입력하세요." << std::endl;
		std::getline(std::cin, cmd, '\n');
		if (cmd == "ADD") {
			if (phone_book.add_contact(index) == 0)
				index++;
		}
		else if (cmd == "SEARCH") {
			phone_book.search_contact();
			std::cin.ignore();
		}
		else if (cmd == "EXIT")
			break;
		else
			std::cout << "존재하지 않는 명령어입니다." << std::endl;
	}
	return (0);
}