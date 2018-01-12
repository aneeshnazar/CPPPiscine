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
        ~Fixed ();
};

std::ostream &operator<<(std::ostream &o, Fixed const &f);

#endif
