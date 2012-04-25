#ifndef FORCE_H_
#define FORCE_H_

#include "vec.h"

class Force {
public:
	virtual void applyTo(Vec3<float>& speed) = 0;
};

class Gravity : public Force {
public:
	Gravity(Vec3<float> v) : val(v) {}
	Vec3<float> val;
	virtual void applyTo(Vec3<float>& speed);
};

class Friction : public Force {
public:
	Friction(float m) : mag(m) {}
	float mag;
	virtual void applyTo(Vec3<float>& speed);
};

#endif 