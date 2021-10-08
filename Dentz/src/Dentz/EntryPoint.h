#pragma once

#ifdef DZ_PLATFORM_WINDOWS

extern Dentz::Application* Dentz::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Dentz::CreateApplication();
	app->Run();
	delete app;

}

#endif
