#include "Window.h"

int _stdcall WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nCmdShow
)
{
	Window window(500, 500, "Physics Engine");

	while (true)
	{
		if (const auto msgCode = Window::ProcessMessages())
			return *msgCode;
	}
}