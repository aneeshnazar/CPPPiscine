#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("none"), grade(150) {}

Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name)
{
    if (_grade > 150)
        throw (GradeTooLowException());
    else if (_grade < 1)
        throw (GradeTooHighException());
    grade = _grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &cc)
{
    *this = cc;
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &input)
{
    grade = input.grade;
    return (*this);
}

std::string Bureaucrat::getName(void) const { return name;}

int Bureaucrat::getGrade(void) const { return grade;}

void Bureaucrat::setGrade(int _grade){grade = _grade;}

void Bureaucrat::incGrade(int val)
{
    if (grade + val > 150)
        throw (GradeTooLowException());
    grade += val;
}

void Bureaucrat::decGrade(int val)
{
    if (grade - val < 1)
        throw (GradeTooHighException());
    grade -= val;
}

void Bureaucrat::executeForm(Form const & form)
{
    if (grade > form.getGrade_Exec())
        throw (Form::GradeTooLowException());
    else
        std::cout << *this << " successfully executes form " << form << std::endl;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(){}

Bureaucrat::GradeTooLowException::GradeTooLowException(Bureaucrat::GradeTooLowException const &cc)
{
    *this = cc;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw(){}

const char *Bureaucrat::GradeTooLowException::what(void) const throw() {return "GradeTooLowException: grade cannot go above 150";}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(Bureaucrat::GradeTooLowException const &input)
{
    (void) input;
    return (*this);
}

Bureaucrat::GradeTooHighException::GradeTooHighException(){}

Bureaucrat::GradeTooHighException::GradeTooHighException(Bureaucrat::GradeTooHighException const &cc)
{
    *this = cc;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw(){}

const char *Bureaucrat::GradeTooHighException::what(void) const throw() {return "GradeTooHighException: grade cannot go below 1";}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(Bureaucrat::GradeTooHighException const &input)
{
    (void) input;
    return (*this);
}

std::ostream    &operator<<(std::ostream &o, Bureaucrat const &b)
{
    o << "<" << b.getName() << ">" << "Bureaucrat grade " << "<" << b.getGrade() << ">";
    return (o);
}
