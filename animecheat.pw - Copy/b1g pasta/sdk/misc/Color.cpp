#include "Color.hpp"

Color Color::Black(0, 0, 0, 255);
Color Color::White(255, 255, 255, 100);
Color Color::Red(255, 0, 0, 255);
Color Color::Green(125, 176, 17, 255);
Color Color::Blue(0, 0, 255, 255);
Color Color::Grey(210, 210, 210, 255);
Color Color::Skeet(124, 174, 9, 255);
Color Color::Gray_v2(55, 55, 55);
Color Color::Gray_v3(45, 45, 45);

Color::Color()
{
	*((int *)this) = 0;
}
Color::Color(int _r, int _g, int _b)
{
	SetColor(_r, _g, _b, 255);
}
Color::Color(int _r, int _g, int _b, int _a)
{
	SetColor(_r, _g, _b, _a);
}
void Color::SetRawColor(int color32)
{
	*((int *)this) = color32;
}
int Color::GetRawColor() const
{
	return *((int *)this);
}
__inline void Color::SetColor(int _r, int _g, int _b, int _a)
{
	_CColor[0] = (unsigned char)_r;
	_CColor[1] = (unsigned char)_g;
	_CColor[2] = (unsigned char)_b;
	_CColor[3] = (unsigned char)_a;
}
__inline void Color::SetColor(float _r, float _g, float _b, float _a)
{
	_CColor[0] = static_cast<unsigned char>(_r * 255.0f);
	_CColor[1] = static_cast<unsigned char>(_g * 255.0f);
	_CColor[2] = static_cast<unsigned char>(_b * 255.0f);
	_CColor[3] = static_cast<unsigned char>(_a * 255.0f);
}
void Color::SetColor(float* color)
{
	if (!color)
		return;

	_CColor[0] = (unsigned char)(color[0] * 255.f);
	_CColor[1] = (unsigned char)(color[1] * 255.f);
	_CColor[2] = (unsigned char)(color[2] * 255.f);
	_CColor[3] = (unsigned char)(color[3] * 255.f);
}
void Color::GetColor(int &_r, int &_g, int &_b, int &_a) const
{
	_r = _CColor[0];
	_g = _CColor[1];
	_b = _CColor[2];
	_a = _CColor[3];
}
bool Color::operator== (const Color &rhs) const
{
	return (*((int *)this) == *((int *)&rhs));
}
bool Color::operator!= (const Color &rhs) const
{
	return !(operator==(rhs));
}
Color& Color::operator=(const Color &rhs)
{
	SetRawColor(rhs.GetRawColor());
	return *this;
}







































