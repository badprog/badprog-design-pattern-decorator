#ifndef __BADPROG_DSHIPTINY_H__
#define __BADPROG_DSHIPTINY_H__

// Badprog.com

#include "IDecorator.h"

//-----------------------------------------------------------------------------
// DShipTiny
//-----------------------------------------------------------------------------
class DShipTiny : public IDecorator
{
public:
	DShipTiny();
	~DShipTiny();

	double getWeight(double weight) override;
};

#endif // __BADPROG_DSHIPTINY_H__