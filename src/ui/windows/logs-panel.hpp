#pragma once
#define PROJ_SINGLE_PENDULUM

#include <iostream>
#include <imgui.h>
#include <implot.h>

class logs_panel
{
public:
	std::string window_name;
	bool& show_window;

	logs_panel(std::string window_name, bool& show_window);
	void loop(void);

private:
	void setup(void);
};