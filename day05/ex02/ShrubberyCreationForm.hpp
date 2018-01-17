#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
    private:
	public:
        ShrubberyCreationForm ();
        ShrubberyCreationForm (std::string _target);
        ShrubberyCreationForm (ShrubberyCreationForm const &cc);
        ~ShrubberyCreationForm ();
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &input);
        void execute(Bureaucrat const & executor) const;
};
#endif
