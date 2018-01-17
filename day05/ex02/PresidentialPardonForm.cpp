#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form ("None", 25, 5){}

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : Form (_target, 25, 5){}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cc) : Form (cc.getName(), 25, 5)
{
    *this = cc;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &input)
{
    (void) input;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() <= this->getGrade_Exec())
    {
        if (this->getSigned())
        {
            std::cout << this->getName() << " has been pardoned by Zafod Beeblebrox." << std::endl;
        }
        else
            std::cout << "Form " << *this << " hasn't been signed" << std::endl;
    }
    else
    {
        throw (Form::GradeTooLowException());
    }
}
