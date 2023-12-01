#pragma once
#include "cTexture.h"
#include "cDirectApplication.h"
#include "SceneNode.h"
#include "cUnit.h"

class cPriest : public cUnit
{
protected:
public:
	cPriest(float initfX);
	~cPriest(void);
	void Render();
	void Attack(cUnit people);
	void Move();
};
