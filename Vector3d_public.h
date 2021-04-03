#pragma once
#include "Triad.h"
class Vector3d_public :
    public Triad
{
public:
	Vector3d_public()
		:Triad()
	{}
	Vector3d_public(const Triad v)
		:Triad(v)
	{}
	Vector3d_public(const Vector3d_public& v)
	{
		int a = v.getX();
		int b = v.getY();
		int c = v.getZ();
		setX(a);
		setY(b);
		setZ(c);
	}

	friend ostream& operator <<(ostream& out, const Vector3d_public& c);
	friend istream& operator >>(istream& in, Vector3d_public& c);

	operator string () const;

	friend Vector3d_public operator + (const Vector3d_public&, const Vector3d_public&);
	friend int operator * (const Vector3d_public, const Vector3d_public);
};

