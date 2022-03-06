#pragma once

#include "Emulator.h"

class View
{
public:
	View() = default;
	virtual ~View() = default;

	virtual void Render(KR580VM80A* emu) = 0;

protected:
	bool m_Open = true;
};