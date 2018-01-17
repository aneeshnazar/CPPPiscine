#ifndef FORM_H
#define FORM_H

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private:
		std::string name;
		int grade_sign;
		int grade_exec;
		bool vsigned;
	public:
        Form ();
        Form (Form const &cc);
        Form(std::string _name, int _grade_sign, int _grade_exec, bool _signed);
        Form(std::string _name, int _grade_sign, int _grade_exec);
        ~Form ();
        Form &operator=(Form const &input);

		std::string getName(void) const;
		void setName(std::string _name);
		int getGrade_Sign(void) const;
		void setGrade_Sign(int _grade_sign);
		int getGrade_Exec(void) const;
		void setGrade_Exec(int _grade_exec);
		bool getSigned(void) const;
		void setSigned(bool _signed);
        void beSigned(Bureaucrat b);
        virtual void execute(Bureaucrat const & executor) const = 0;

        class GradeTooLowException : public std::exception {
            private:
                std::string name;
            public:
                GradeTooLowException ();
                GradeTooLowException (std::string e_name);
                GradeTooLowException (GradeTooLowException const &cc);
                virtual ~GradeTooLowException () throw();
                GradeTooLowException &operator=(GradeTooLowException const &input);
                const char *what(void) const throw();
        };

        class GradeTooHighException : public std::exception {
            private:
                std::string name;
            public:
                GradeTooHighException ();
                GradeTooHighException (std::string e_name);
                GradeTooHighException (GradeTooHighException const &cc);
                virtual ~GradeTooHighException () throw();
                GradeTooHighException &operator=(GradeTooHighException const &input);
                const char *what(void) const throw();
        };
};

std::ostream    &operator<<(std::ostream &o, Form const &f);

#endif
