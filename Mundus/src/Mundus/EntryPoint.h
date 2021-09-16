#pragma once

#ifdef MN_PLATFORM_WINDOWS

extern Mundus::Application* Mundus::CreateApplication();

int main(int argc, char** argv) {
	Mundus::Application* app = Mundus::CreateApplication();
	app->Run();
	delete app;
}

#endif
