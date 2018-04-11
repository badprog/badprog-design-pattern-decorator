#ifndef __BADPROG_IDECORATOR_H__
#define __BADPROG_IDECORATOR_H__

// Badprog.com

#include <memory>
#include <string>

//-----------------------------------------------------------------------------
// IDecorator
//-----------------------------------------------------------------------------
class IDecorator
{
public:
	virtual ~IDecorator() {};
	virtual double getWeight(double weight) = 0;

};

#endif // __BADPROG_IDECORATOR_H__