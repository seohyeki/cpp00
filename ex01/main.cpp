#include <iostream>
#include <string>

class Contact {
	private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string secret;

	public:
	void set_contact(std::string _first_name, std::string _last_name, std::string _nickname, std::string _phone_number, std::string _secret);
};

void Contact::set_contact(std::string _first_name, std::string _last_name, std::string _nickname, std::string _phone_number, std::string _secret) {
	first_name = _first_name;
	last_name = _last_name;
	nickname = _nickname;
	phone_number = _phone_number;
	secret = _secret;
}

class PhoneBook {
	private:
	Contact contact[8];
	
	public:
	void add_contact();
	void search_contact();
};

void PhoneBook::add_contact(){
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string secret;
	
	std::cout << "first name을 입력해주세요." << std::endl;
	std::cin >> first_name;
	std::cout << "last name을 입력해주세요." << std::endl;
	std::cin >> last_name;
	std::cout << "nickname을 입력해주세요." << std::endl;
	std::cin >> nickname;
	std::cout << "phone number을 입력해주세요." << std::endl;
	std::cin >> phone_number;
	std::cout << "dark secret을 입력해주세요." << std::endl;
	std::cin >> secret;
	set_contact(first_name, last_name, nickname, phone_number, secret);
}

void PhoneBook::search_contact(){

}

int main() {
	PhoneBook phone_book;
	std::string cmd;

	while (1) {
		std::cout << "ADD 또는 SEARCH 또는 EXIT 중 하나를 입력하세요." << std::endl;
		std::cin >> cmd;
		if (cmd == "ADD")
			phone_book.add_contact();
		else if (cmd == "SEARCH") {

		}
		else if (cmd == "EXIT")
			break;
		else
			std::cout << "존재하지 않는 명령어입니다." << std::endl;
	}
	return (0);
}