#ifndef VECTOR2_CLASS_HPP
# define VECTOR2_CLASS_HPP

class Vector2 {

private:
	double theta;
	double magnitude;

public:
	Vector2 (void);
	Vector2 (Vector2 const &cc);
	Vector2 (double _theta, double _mag);
	~Vector2 (void);

	Vector2 &operator=(Vector2 const &input);

	double getTheta(void) const;
	double getMagnitude(void) const;

	void setAngle(double _theta);
	void setMag(double _mag);
};

#endif
