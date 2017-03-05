/*
 * GyroAxis.h
 *
 *  Created on: Dec 6, 2016
 *      Author: Deepali Jain
 */

#ifndef GYROAXIS_H_
#define GYROAXIS_H_
#include <iostream>
#include <math.h>

namespace wvrobotics {

class GyroAxis {

private:
	double xAxis;
	double yAxis;
	double zAxis;
	float zAxisArray[];
	float sum;
	float avg = 0;
public:
	GyroAxis();
	double getxAxis()
	{
		return xAxis;
	}
	double getyAxis()
	{
		return yAxis;
	}
	double getzAxis()
	{
		return zAxis;
	}
	void setxAxis(double x)
	{
		xAxis = x;
	}
	void setyAxis(double y)
	{
		yAxis = y;
	}
	void setzAxis(double z)
	{
		zAxis = z;

		//std::cout << "z axis: " << z << std::endl;
	}
	void setAxis(double x, double y, double z)
	{
		xAxis = x;
		yAxis = y;
		zAxis = z;
	}
	void addAxis(double x, double y, double z)
	{
		xAxis += x;
		yAxis += y;
		zAxis += z;
	}

	float checkForZAxis(int counterGyro);
	void overrunofAxis();
	void invertGyro()
	{
		xAxis = -xAxis;
		yAxis = -yAxis;
		zAxis = -zAxis;
	}
	~GyroAxis();
};

} /* namespace wvrobotics */

#endif /* GYROAXIS_H_ */
