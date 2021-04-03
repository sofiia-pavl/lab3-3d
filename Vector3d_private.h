#pragma once
#include "Triad.h"
class Vector3d_private :
    private Triad
{
	Vector3d_private()
		:Triad()
	{}
	Vector3d_private(const Triad v)
		:Triad(v)
	{}
	Vector3d_private(const Vector3d_private& v)
	{
		int a = v.getX();
		int b = v.getY();
		int c = v.getZ();
		setX(a);
		setY(b);
		setZ(c);
	}

	friend ostream& operator <<(ostream& out, const Vector3d_private& c);
	friend istream& operator >>(istream& in, Vector3d_private& c);

	operator string () const;

	friend Vector3d_private operator + (const Vector3d_private&, const Vector3d_private&);
	friend int operator * (const Vector3d_private, const Vector3d_private);

};

