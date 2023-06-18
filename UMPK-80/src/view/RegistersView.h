#pragma once

#include "View.h"

class RegistersView : public View
{
public:
	RegistersView();
	~RegistersView();

	void Render(KR580VM80A* emu);
private:
	void DrawRegister(const char* label, KR580VM80A::WORD& reg);
	void DrawRegisterPair(const char* label, KR580VM80A::DWORD& reg);

	struct State
	{
		void*	DataEditingAddr;
		bool	DataEditingTakeFocus;
		char	DataInputBuf[32];
	};

	struct Style
	{
		const char* FormatByte;
		const char* FormatPair;
	};

	struct Sizes
	{
		float GlyphWidth;

		Sizes() { memset(this, 0, sizeof(*this)); }
	};

	State m_State;
	Style m_Style;
	Sizes m_Sizes;
};