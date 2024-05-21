#include "PhoneBook.hpp"

int PhoneBook::add_contact(int index) {
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	secret;
	
	std::cout << "first name을 입력해주세요." << std::endl;
	std::getline(std::cin, first_name, '\n');
	if (first_name.empty())
		return (1);
	std::cout << "last name을 입력해주세요." << std::endl;
	std::getline(std::cin, last_name, '\n');
	if (last_name.empty())
		return (1);
	std::cout << "nickname을 입력해주세요." << std::endl;
	std::getline(std::cin, nickname, '\n');
	if (nickname.empty())
		return (1);
	std::cout << "phone number을 입력해주세요." << std::endl;
	std::getline(std::cin, phone_number, '\n');
	if (phone_number.empty())
		return (1);
	std::cout << "dark secret을 입력해주세요." << std::endl;
	std::getline(std::cin, secret, '\n');
	if (secret.empty())
		return (1);
	contact[index % 8].set_contact(first_name, last_name, nickname, phone_number, secret);
	return (0);
}

void PhoneBook::search_contact() {
	int	index;

	if (contact[0].is_empty()) {
		std::cout << "저장된 연락처가 없습니다." << std::endl;
		return ;
	}
	for (int i = 0; i < 8; i++) {
		if (contact[i].is_empty() == 0)
			contact[i].show_contact(i);
	}
	while (1) {
		std::cout << "몇번째 연락처를 보고싶으신가요?" << std::endl;
		std::cin >> index;
		if (std::cin.fail()) {
			std::cin.clear();
			return ;
		}
		if (index >= 8 || index < 0 || contact[index].is_empty())
			std::cout << "없는 연락처입니다." << std::endl;
		else
			contact[index].show_contact_detail();
		break ;
	}
}