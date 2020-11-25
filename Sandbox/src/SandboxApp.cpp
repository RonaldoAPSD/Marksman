#include <Marksman.h>

class Sandbox : public Marksman::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Marksman::Application* Marksman::CreateApplication()
{
	return new Sandbox();
}