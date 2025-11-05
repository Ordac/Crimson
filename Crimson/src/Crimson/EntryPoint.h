#pragma once

#ifdef CR_PLATFORM_WINDOWS

extern Crimson::Application* Crimson::CreateApplication();

int main(int arc, char** argv)
{
	Crimson::Log::Init();
	CR_CORE_WARN("Initialized Log!");
	int a = 5;
	CR_INFO("Hello! Var={0}", a);

	auto app = Crimson::CreateApplication();
	app->Run();
	delete app;
}

#endif