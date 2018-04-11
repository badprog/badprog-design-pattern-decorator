#ifndef __BADPROG_DECORATOR_H__
#define __BADPROG_DECORATOR_H__

// Badprog.com

#include <memory>
#include "IDecorator.h"

//-----------------------------------------------------------------------------
// Decorator
//-----------------------------------------------------------------------------
class Decorator : public IDecorator
{
public:
	Decorator(std::unique_ptr<IDecorator> decorator = nullptr);
	virtual ~Decorator();

  virtual double getWeight(double weight) override;

private:
  double _weight;
  std::unique_ptr<IDecorator>_decorator;
};

#endif // __BADPROG_DECORATOR_H__
