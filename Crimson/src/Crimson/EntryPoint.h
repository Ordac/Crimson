#pragma once

#ifdef CR_PLATFORM_WINDOWS

extern Crimson::Application* Crimson::CreateApplication();

int main(int arc, char** argv)
{
	auto app = Crimson::CreateApplication();
	app->Run();
	delete app;
}

#endif