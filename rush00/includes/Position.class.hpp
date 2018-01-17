#ifndef POSITION_CLASS_HPP
#define POSITION_CLASS_HPP

class Position {

private:
	double _x;
	double _y;

public:
	Position (void);
	Position (double x, double y);
	Position (Position const &cc);
	~Position (void);

	Position &operator=(Position const &input);

	double getX(void) const;
	double getY(void) const;

	void setX(double x);
	void setY(double y);
};

#endif
