#ifndef FIXED_H
#define FIXED_H

class Fixed {
    private:
        int value;
        static const int fract = 8;
    public:
        Fixed ();
        Fixed (Fixed const &input);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        Fixed &operator=(Fixed const &f);
        ~Fixed ();
};

#endif
