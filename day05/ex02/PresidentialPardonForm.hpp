#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "Form.hpp"

class PresidentialPardonForm : public Form {
    private:
	public:
        PresidentialPardonForm ();
        PresidentialPardonForm (std::string target);
        PresidentialPardonForm (PresidentialPardonForm const &cc);
        ~PresidentialPardonForm ();
        PresidentialPardonForm &operator=(PresidentialPardonForm const &input);
        void execute(Bureaucrat const & executor) const;
};
#endif
