#include "Form.hpp"

Form::Form() : name("none"), grade_sign(150), grade_exec(150), vsigned(false) {}

Form::Form(Form const &cc) : name(cc.name), grade_sign(cc.grade_sign), grade_exec(cc.grade_exec)
{
    std::string exception_name = "";
    if (grade_sign > 150 || grade_exec > 150)
    {
        if (grade_sign > 150 && grade_exec > 150)
            exception_name = "Signing grade and Execute grade are ";
        else if (grade_sign > 150)
            exception_name = "Signing grade is ";
        else if (grade_exec > 150)
            exception_name = "Execute grade is ";
        throw (Form::GradeTooLowException(exception_name));
    }
    else if (grade_sign < 1 || grade_exec < 1)
    {
        if (grade_sign < 1 && grade_exec < 1)
            exception_name = "Signing grade and Execute grade are ";
        else if (grade_sign < 1)
            exception_name = "Signing grade is ";
        else if (grade_exec < 1)
            exception_name = "Execute grade is ";
        throw (Form::GradeTooHighException(exception_name));
    }
    vsigned = cc.vsigned;
    *this = cc;
}

Form::~Form(){}

Form &Form::operator=(Form const &input)
{
	vsigned = input.vsigned;
	return (*this);
}

Form::Form(std::string _name, int _grade_sign, int _grade_exec) : name(_name), grade_sign(_grade_sign), grade_exec(_grade_exec)
{
    vsigned = false;
}

Form::Form(std::string _name, int _grade_sign, int _grade_exec, bool _signed) : name(_name), grade_sign(_grade_sign), grade_exec(_grade_exec)
{
    vsigned = _signed;
}

std::string Form::getName(void) const { return name;}

int Form::getGrade_Sign(void) const { return grade_sign;}

int Form::getGrade_Exec(void) const { return grade_exec;}

bool Form::getSigned(void) const { return vsigned;}

void Form::setSigned(bool _signed){vsigned = _signed;}

void Form::beSigned(Bureaucrat b)
{
    if (b.getGrade() > 150)
        throw (Form::GradeTooLowException());
    if (vsigned)
        std::cout << *this << " has already been signed." << std::endl;
    else
    {
        vsigned = true;
        std::cout << *this << " was just signed by " << b << std::endl;
    }
}

Form::GradeTooLowException::GradeTooLowException(){}

Form::GradeTooLowException::GradeTooLowException(Form::GradeTooLowException const &cc)
{
    *this = cc;
}

Form::GradeTooLowException::GradeTooLowException (std::string e_name)
{
    this->name = e_name;
}

Form::GradeTooLowException::~GradeTooLowException() throw(){}

Form::GradeTooLowException &Form::GradeTooLowException::operator=(Form::GradeTooLowException const &input)
{
    name = input.name;
    return (*this);
}

const char *Form::GradeTooLowException::what(void) const throw()
{
    return ((name + std::string("too low")).c_str());
}

Form::GradeTooHighException::GradeTooHighException(){}

Form::GradeTooHighException::GradeTooHighException (std::string e_name)
{
    this->name = e_name;
}

Form::GradeTooHighException::GradeTooHighException(Form::GradeTooHighException const &cc)
{
    *this = cc;
}

Form::GradeTooHighException::~GradeTooHighException() throw(){}

Form::GradeTooHighException &Form::GradeTooHighException::operator=(Form::GradeTooHighException const &input)
{
    name = input.name;
    return (*this);
}

const char *Form::GradeTooHighException::what(void) const throw()
{
    return ((name + std::string("too high")).c_str());
}

std::ostream    &operator<<(std::ostream &o, Form const &b)
{
    o << "<" << b.getName() << "> <" << b.getSigned() <<"> Min grade to sign <" << b.getGrade_Sign() << "> Min grade to exec: < " << b.getGrade_Exec() << ">";
    return (o);
}
