#pragma once

#include <iostream>
#include <cmath>

#include "Maths.h"

namespace engy { namespace maths {

	struct mat4
	{
		union
		{
			float elements[4 * 4];
			vec4 columns[4];
		};

		mat4();
		mat4(float diagonal);

		~mat4();

		static mat4& identity();

		mat4& multi(const mat4 other);
		friend mat4 operator*(mat4 left, const mat4 right);
		mat4& operator*=(const mat4 other);

		static mat4& orthographic(float left, float right, float bottom, float top, float near, float far);
		static mat4& perspective(float fov, float aspectRatio, float near, float far);

		static mat4& translate(const vec3 translation);
		static mat4& rotate(float angle, const vec3 axis);
		static mat4& scale(const vec3 scale);

		friend std::ostream& operator<<(std::ostream& stream, const mat4 matrix);
	};
} }
