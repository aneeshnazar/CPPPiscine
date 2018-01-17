#include "Bureaucrat.hpp"

int main(void) {
    Bureaucrat n("Aneesh", 1);

    std::cout << n << std::endl;
    try {n.decGrade(1);}
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
