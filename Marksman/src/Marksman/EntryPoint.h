#pragma once

#ifdef MK_PLATFORM_WINDOWS

extern Marksman::Application* Marksman::CreateApplication();

int main(int argc, char** argv)
{
	Marksman::Log::Init();
	MK_CORE_WARN("Initialized Log!");
	MK_INFO("Hello!");

	auto app = Marksman::CreateApplication();
	app->Run();
	delete app;
}

#endif