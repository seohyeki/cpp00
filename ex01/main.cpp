#include <iostream>
#include <iomanip>
#include <string>

class Contact {
	private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	secret;

	public:
	void	set_contact(std::string _first_name, std::string _last_name, std::string _nickname, std::string _phone_number, std::string _secret);
	int		get_contact(int index);
	int		show_contact();
};

void Contact::set_contact(std::string _first_name, std::string _last_name, std::string _nickname, std::string _phone_number, std::string _secret) {
	this->first_name = _first_name;
	this->last_name = _last_name;
	this->nickname = _nickname;
	this->phone_number = _phone_number;
	this->secret = _secret;
}

int Contact::get_contact(int index) {
	if (first_name.empty())
		return (1);
	else {
		std::cout << std::setw(10) << std::right << index << "|";
		if (this->first_name.length() > 10)
			std::cout << std::setw(9) << std::right << this->first_name.substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << std::right << this->first_name << "|";
		if (this->last_name.length() > 10)
			std::cout << std::setw(9) << std::right << this->last_name.substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << std::right << this->last_name << "|";
		if (this->nickname.length() > 10)
			std::cout << std::setw(9) << std::right << this->nickname.substr(0, 9) << "." << std::endl;
		else
			std::cout << std::setw(10) << std::right << this->nickname << std::endl;
	}
	return (0);
}

int Contact::show_contact() {
	if (first_name.empty())
		return (1);
	else {
		std::cout << "1. first name: " << first_name << std::endl;
		std::cout << "2. last_name: " << last_name << std::endl;
		std::cout << "3. nickname: " << nickname << std::endl;
		std::cout << "4. phone_number: " << phone_number << std::endl;
		std::cout << "5. secret: " << secret << std::endl;
	}
	return (0);
}

class PhoneBook {
	private:
	Contact	contact[8];
	
	public:
	void	add_contact(int index);
	void	search_contact();
};

void PhoneBook::add_contact(int index) {
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	secret;
	
	std::cout << "first name을 입력해주세요." << std::endl;
	std::getline(std::cin, first_name, '\n');
	std::cout << "last name을 입력해주세요." << std::endl;
	std::getline(std::cin, last_name, '\n');
	std::cout << "nickname을 입력해주세요." << std::endl;
	std::getline(std::cin, nickname, '\n');
	std::cout << "phone number을 입력해주세요." << std::endl;
	std::getline(std::cin, phone_number, '\n');
	std::cout << "dark secret을 입력해주세요." << std::endl;
	std::getline(std::cin, secret, '\n');
	contact[index % 8].set_contact(first_name, last_name, nickname, phone_number, secret);
}

void PhoneBook::search_contact() {
	int	index;

	if (contact[0].get_contact(0)) {
		std::cout << "저장된 연락처가 없습니다." << std::endl;
		return ;
	}
	for (int i = 0; i < 8; i++)
		contact[i].get_contact(i);
	while (1) {
		std::cout << "몇번째 연락처를 보고싶으신가요?" << std::endl;
		std::cin >> index;
		if (index >= 8 || index < 0 || contact[index].show_contact())
			std::cout << "없는 연락처입니다." << std::endl;
		break ;
	}
}

int main() {
	PhoneBook phone_book;
	int	index = 0;
	std::string cmd;

	while (1) {
		std::cout << "ADD 또는 SEARCH 또는 EXIT 중 하나를 입력하세요." << std::endl;
		std::getline(std::cin, cmd, '\n');
		if (cmd == "ADD") {
			phone_book.add_contact(index);
			index++;
		}
		else if (cmd == "SEARCH")
			phone_book.search_contact();
		else if (cmd == "EXIT")
			break;
		else
			std::cout << "존재하지 않는 명령어입니다." << std::endl;
	}
	return (0);
}