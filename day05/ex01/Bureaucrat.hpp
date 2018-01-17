#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>

class Form;

class Bureaucrat {
    private:
		std::string const name;
		int grade;
	public:
        Bureaucrat ();
        Bureaucrat (Bureaucrat const &cc);
        Bureaucrat (std::string _name, int _grade);
        ~Bureaucrat ();
        Bureaucrat &operator=(Bureaucrat const &input);

		std::string getName(void) const;
		int getGrade(void) const;
		void setGrade(int _grade);
        void incGrade(int val);
        void decGrade(int val);

        void SignForm(Form f);

        class GradeTooHighException : public std::exception{
            private:

            public:
                GradeTooHighException ();
                GradeTooHighException (GradeTooHighException const &cc);
                virtual ~GradeTooHighException () throw();
                GradeTooHighException &operator=(GradeTooHighException const &input);
                const char *what(void) const throw();
        };

        class GradeTooLowException {
            private:

            public:
                GradeTooLowException ();
                GradeTooLowException (GradeTooLowException const &cc);
                virtual ~GradeTooLowException () throw();
                GradeTooLowException &operator=(GradeTooLowException const &input);
                const char *what(void) const throw();
        };
};

std::ostream    &operator<<(std::ostream &o, Bureaucrat const &b);

#endif
