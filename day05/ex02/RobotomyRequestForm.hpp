#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "Form.hpp"

class RobotomyRequestForm : public Form {
    private:
	public:
        RobotomyRequestForm ();
        RobotomyRequestForm (std::string target);
        RobotomyRequestForm (RobotomyRequestForm const &cc);
        ~RobotomyRequestForm ();
        RobotomyRequestForm &operator=(RobotomyRequestForm const &input);
        void execute(Bureaucrat const & executor) const;
};
#endif
