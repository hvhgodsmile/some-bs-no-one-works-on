#include "..\cmenu.hpp"

C_SliderFloat::C_SliderFloat(std::string n_label, float * n_value, float n_min, float n_max, std::string n_follower, std::vector< C_ControlFlag * > n_flags) {
	parent = g_cfg.menu.last_group;
	label = n_label;
	value = n_value;
	min = n_min;
	max = n_max;
	follower = n_follower;

	flags = n_flags;

	area.h = 15;

	if (n_label != "") {
		height_offset = 14;
		area.h += 14;
	}

	parent->add_control(this);
}

void C_SliderFloat::draw() {
	rect_t n_area = area;

	render::get().text(fonts[TAHOMA12], area.x, area.y, Color::White, HFONT_CENTERED_NONE, label.c_str());

	n_area.y += height_offset;
	n_area.h -= height_offset;

	render::get().gradient(n_area.x, n_area.y, area.w, 5, Color{ 62, 62, 62, 255 }, Color{ 55, 55, 55, 255 }, GRADIENT_VERTICAL);

	float ratio = (*value - min) / (max - min);
	float location = ratio * area.w;

	render::get().gradient(n_area.x, n_area.y, location, 5, g_cfg.menu.menu_theme[0], g_cfg.menu.menu_theme[1], GRADIENT_VERTICAL);

	render::get().rect(n_area.x, n_area.y, area.w, 5, Color::Black);

	char value_transformed[128];
	sprintf_s(value_transformed, "%.2G", *value);

	std::stringstream ss;
	ss << value_transformed << follower.c_str();

	render::get().text(fonts[TAHOMA12], n_area.x + location, n_area.y + 3, Color::White, HFONT_CENTERED_X, ss.str().c_str());
}

void C_SliderFloat::update() {
	if (dragging) {
		if (GetAsyncKeyState(VK_LBUTTON)) {
			POINT mouse;  GetCursorPos(&mouse);

			float
				new_x,
				ratio;

			new_x = mouse.x - area.x;

			if (new_x < 0) { new_x = 0; }
			if (new_x > area.w) { new_x = area.w; }

			ratio = new_x / float(area.w);
			*value = min + (max - min) * ratio;
		}
		else {
			dragging = false;
		}
	}
}

void C_SliderFloat::click() {
	dragging = true;
}







































