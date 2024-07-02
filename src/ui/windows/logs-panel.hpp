#pragma once
#define PROJ_SINGLE_PENDULUM

#include <iostream>
#include <imgui.h>
#include <implot.h>

class logs_panel
{
public:
	std::string window_name;

	logs_panel(std::string window_name);
	void loop(void);

	bool get_show_window(void) { return show_window; }

	bool get_show_trace(void) { return show_trace; }
	void set_show_trace(bool show_trace) { this->show_trace = show_trace; }
	bool get_show_debug(void) { return show_debug; }
	void set_show_debug(bool show_debug) { this->show_debug = show_debug; }
	bool get_show_info(void) { return show_info; }
	void set_show_info(bool show_info) { this->show_info = show_info; }
	bool get_show_warning(void) { return show_warning; }
	void set_show_warning(bool show_warning) { this->show_warning = show_warning; }
	bool get_show_error(void) { return show_error; }
	void set_show_error(bool show_error) { this->show_error = show_error; }
	bool get_show_fatal(void) { return show_fatal; }
	void set_show_fatal(bool show_fatal) { this->show_fatal = show_fatal; }
	bool get_show_all(void) { return show_all; }
	void set_show_all(bool show_all) { this->show_all = show_all; }
	bool get_show_all_the_above_logs_that_are_selected(void) { return show_all_the_above_logs_that_are_selected; }
	void set_show_all_the_above_logs_that_are_selected(bool show_all_the_above_logs_that_are_selected) { this->show_all_the_above_logs_that_are_selected = show_all_the_above_logs_that_are_selected; }

private:
	void setup(void);
	bool show_window = true;
	bool show_trace = false;
	bool show_debug = false;
	bool show_info = false;
	bool show_warning = true;
	bool show_error = true;
	bool show_fatal = true;
	bool show_all = false;
	bool show_all_the_above_logs_that_are_selected = false;
};