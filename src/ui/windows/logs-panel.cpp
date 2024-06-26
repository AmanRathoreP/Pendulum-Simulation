#include "logs-panel.h"

logs_panel::logs_panel(std::string window_name, bool& show_window) :window_name(window_name), show_window(show_window) {
	std::cout << "Creating " << window_name << std::endl;
	this->setup();
}

void logs_panel::setup()
{
	std::cout << "This is setup code for log panel!" << std::endl;
}

void logs_panel::loop(void)
{
	if (this->show_window) {
		ImGui::Begin(this->window_name.c_str(), &(this->show_window));
		ImGui::Text("This is window for Log panel.");
		ImGui::End();
	}
}