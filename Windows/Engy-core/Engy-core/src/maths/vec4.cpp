#include "vec4.h"

namespace engy { namespace maths {

	vec4::vec4(const float x, const float y, const float z, const float w)
	{
		(*this).x = x;
		(*this).y = y;
		(*this).z = z;
		(*this).w = w;
	}

	vec4& vec4::add(const vec4 other)
	{
		(*this).x += other.x;
		(*this).y += other.y;
		(*this).z += other.z;
		(*this).w += other.w;

		return *this;
	}

	vec4& vec4::sub(const vec4 other)
	{
		(*this).x -= other.x;
		(*this).y -= other.y;
		(*this).z -= other.z;
		(*this).w -= other.w;

		return *this;
	}

	vec4& vec4::multi(const vec4 other)
	{
		(*this).x *= other.x;
		(*this).y *= other.y;
		(*this).z *= other.z;
		(*this).w *= other.w;

		return *this;
	}

	vec4& vec4::divide(const vec4 other)
	{
		(*this).x /= other.x;
		(*this).y /= other.y;
		(*this).z /= other.z;
		(*this).w /= other.w;

		return *this;
	}

	vec4 operator+(vec4 left, const vec4 right)
	{
		return left.add(right);
	}

	vec4 operator-(vec4 left, const vec4 right)
	{
		return left.add(right);
	}

	vec4 operator*(vec4 left, const vec4 right)
	{
		return left.add(right);
	}

	vec4 operator/(vec4 left, const vec4 right)
	{
		return left.add(right);
	}

	vec4& vec4::operator+=(const vec4 other)
	{
		return add(other);
	}

	vec4& vec4::operator-=(const vec4 other)
	{
		return sub(other);
	}

	vec4& vec4::operator*=(const vec4 other)
	{
		return multi(other);
	}

	vec4& vec4::operator/=(const vec4 other)
	{
		return divide(other);
	}

	bool vec4::operator==(const vec4 other)
	{
		return ((*this).x == other.x && (*this).y == other.y && (*this).z == other.z && (*this).w == other.w);
	}

	bool vec4::operator!=(const vec4 other) {
		return !(*this == other);
	}

	std::ostream& operator<<(std::ostream& stream, const vec4 vector)
	{
		stream << "(" << vector.x << ", " << vector.y << ", " << vector.z << ", " << vector.w << ")";
		return stream;
	}
} }