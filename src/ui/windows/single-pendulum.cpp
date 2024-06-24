#include "single-pendulum.h"

void single_pendulum::setup(void)
{
    std::cout << "This is setup code for single-pendulum!" << std::endl;
}

void single_pendulum::loop(void)
{
    ImGui::Begin("Simulation");
    ImGui::Text("This is window for Single Pendulum.");
    ImGui::End();

    ImPlot::CreateContext();
    ImPlot::ShowDemoWindow();
    ImPlot::DestroyContext();
}