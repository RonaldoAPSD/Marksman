#pragma once

#ifdef MK_PLATFORM_WINDOWS

extern Marksman::Application* Marksman::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Marksman::CreateApplication();
	app->Run();
	delete app;
}

#endif