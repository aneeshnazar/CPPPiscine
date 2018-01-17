#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("None", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) : Form(_target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cc) : Form(cc.getName(), 145, 137)
{
    *this = cc;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &input)
{
    (void) input;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    std::string fname = this->getName() + "_shrubbery";
    if (executor.getGrade() <= this->getGrade_Exec())
    {
        if (!this->getSigned())
            std::cout << "Form " << *this << " hasn't been signed yet!" << std::endl;
        else
        {
            std::ofstream o(fname.c_str());

            if (o)
            {
                o   << "       _-_" << std::endl
                    << "    /~~   ~~\\" << std::endl
                    << " /~~         ~~\\" << std::endl
                    << "{               }" << std::endl
                    << " \\  _-     -_  /" <<std::endl
                    << "   ~  \\\\ //  ~" <<std::endl
                    << "_- -   | | _- _" <<std::endl
                    << "  _ -  | |   -_" << std::endl
                    << "      // \\\\" <<std::endl;
            }
            o.close();
        }
    }
    else
        throw (Form::GradeTooLowException());
}
