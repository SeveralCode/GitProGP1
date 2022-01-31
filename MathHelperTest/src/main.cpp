#include <math_helper.h>
#include <iostream>

int main()
{
	const Vector mylocation(1,1,1);

	printf("location: %f, %f, %f\n", 
		static_cast<float>(mylocation[VectorAxis::AXIS_X]), 
		static_cast<float>(mylocation[VectorAxis::AXIS_Y]),
		static_cast<float>(mylocation[VectorAxis::AXIS_Z]));

	system("pause");
	
	return 0;
}