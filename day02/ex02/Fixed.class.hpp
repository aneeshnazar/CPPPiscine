#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {
    private:
        int value;
        static const int fract = 8;
    public:
        Fixed ();
        Fixed (int num);
        Fixed (float num);
        Fixed (Fixed const &input);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float   toFloat(void) const;
        int   toInt(void) const;
        Fixed &operator=(Fixed const &f);
        Fixed operator+(Fixed const &f1);
        Fixed operator-(Fixed const &f1);
        Fixed operator*(Fixed const &f1);
        Fixed operator/(Fixed const &f1);
        Fixed &operator++();
        Fixed &operator--();
        Fixed operator++(int input);
        Fixed operator--(int input);
        static Fixed &min(Fixed &f1, Fixed &f2);
        static Fixed &max(Fixed &f1, Fixed &f2);
        static Fixed const &min(Fixed const &f1, Fixed const &f2);
        static Fixed const &max(Fixed const &f1, Fixed const &f2);
        bool operator==(Fixed const &f1);
        bool operator!=(Fixed const &f1);
        bool operator>=(Fixed const &f1);
        bool operator<=(Fixed const &f1);
        bool operator>(Fixed const &f1);
        bool operator<(Fixed const &f1);
        ~Fixed ();
};

std::ostream &operator<<(std::ostream &o, Fixed const &f);

#endif
