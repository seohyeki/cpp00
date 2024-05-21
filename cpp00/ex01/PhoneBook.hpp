#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook {
	private:
			Contact	contact[8];
	
	public:
			int		add_contact(int index);
			void	search_contact();
};

#endif