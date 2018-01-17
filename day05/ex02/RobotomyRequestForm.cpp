#include "RobotomyRequestForm.hpp"
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() : Form ("None", 72, 45){}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : Form (_target, 72, 45){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cc) : Form(cc.getName(), 72, 45)
{
    *this = cc;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &input)
{
    (void) input;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    time_t t = time(NULL);
    if (executor.getGrade() <= this->getGrade_Exec())
    {
        if (this->getSigned())
        {
            if (t % 2)
            {
                std::cout << "<drilling noises>" << std::endl;
                std::cout << this->getName() << " has been successfully robotomized." << std::endl;
            }
            else
                std::cout << "Robotomy failed." << std::endl;
        }
        else
            std::cout << "Form " << *this << " hasn't been signed" << std::endl;
    }
    else
    {
        throw (Form::GradeTooLowException());
    }
}
