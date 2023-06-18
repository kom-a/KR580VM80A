#pragma once

#include "View.h"

#include "Compiler.h"

class ToolbarView : public View
{
public:
	ToolbarView();
	~ToolbarView();

	void Render(KR580VM80A* emu);

private:
	Compiler m_Compiler;
	Disassembler m_Disassembler;
};