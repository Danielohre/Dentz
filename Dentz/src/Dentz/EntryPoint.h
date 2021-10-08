#pragma once

#ifdef DZ_PLATFORM_WINDOWS

extern Dentz::Application* Dentz::CreateApplication();

int main(int argc, char** argv)
{
	Dentz::Log::Init();
	DZ_CORE_WARN("Initialized Log!");
	DZ_INFO("Hello Client!");
	auto app = Dentz::CreateApplication();
	app->Run();
	delete app;

}

#endif
