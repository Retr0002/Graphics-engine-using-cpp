#pragma once
//\==========================================================================
// Vector2 - Two dimensional vector class
//\==========================================================================
class Vector2
{
public:
	//\======================================================================
	// Member variables
	//\======================================================================
	float x; float y;
#pragma region Constructors/Decstructors
	//\======================================================================
	// Constructors
	//\======================================================================
	Vector2();
	Vector2(const float a_x, const float a_y);
	Vector2(const Vector2& a_v2);
	//\======================================================================
	// Destructors
	//\======================================================================
	~Vector2();
#pragma endregion
#pragma region Operator Overloads
	//\======================================================================
	// Equivalence Operators
	//\==================================================
	bool			operator ==			(const Vector2& a_v2) const;
	bool			operator !=			(const Vector2& a_v2) const;
	//\======================================================================
	// Negate Operator
	//\======================================================================
	const Vector2	operator - () const;
	//\======================================================================
	// Addition Operators
	//\======================================================================
	Vector2			operator +			(const Vector2& a_v) const;
	//\======================================================================
	//Dot Product Functionality
	//\======================================================================
	float					Dot(const Vector2& a_v2) const;
	friend float			Dot(const Vector2& a_v2A, const Vector2& a_v2B);
	//\======================================================================
#pragma endregion
};