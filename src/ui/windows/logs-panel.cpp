#include "logs-panel.hpp"

logs_panel::logs_panel(std::string window_name) :window_name(window_name) {
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
		std::cout << "Looping logs!" << std::endl;

		ImGui::Begin(this->window_name.c_str(), &(this->show_window));
		ImGui::Text("This is window for Log panel.");

		ImGui::Checkbox("Show Trace", &(this->show_trace));
		ImGui::SameLine();
		ImGui::Checkbox("Show Debug", &(this->show_debug));
		ImGui::SameLine();
		ImGui::Checkbox("Show Info", &(this->show_info));
		ImGui::SameLine();
		ImGui::Checkbox("Show Warning", &(this->show_warning));
		ImGui::SameLine();
		ImGui::Checkbox("Show Error", &(this->show_error));
		ImGui::SameLine();
		ImGui::Checkbox("Show Fatal", &(this->show_fatal));

		ImGui::Checkbox("Show All", &(this->show_all));
		ImGui::SameLine();
		ImGui::Checkbox("Show all the above logs that are selected", &(this->show_all_the_above_logs_that_are_selected));

		ImGui::End();
	}
}