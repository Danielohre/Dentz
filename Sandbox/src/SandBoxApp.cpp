#include <Dentz.h>

class Sandbox : public Dentz::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}




};


Dentz::Application* Dentz::CreateApplication()
{
	return new Sandbox();
}