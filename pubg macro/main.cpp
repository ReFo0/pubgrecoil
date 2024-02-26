#include <windows.h>
#include <iostream>
#include <thread>


void mouse_move(float x, float y) {
	INPUT iNPUT = { 0 };
	iNPUT.type = INPUT_MOUSE;
	iNPUT.mi.dwFlags = MOUSEEVENTF_MOVE;
	iNPUT.mi.dx = x;
	iNPUT.mi.dy = y;
	SendInput(1, &iNPUT, sizeof(iNPUT));
}



int main() {
	std::cout << "PUBG Macro All Weapon" << std::endl;
	std::cout << "Press the Numpad1 button then click the mouse" << std::endl;
	std::cout << "DPI: 500, Vertical Recoil: 1( 1 - 1.50 )" << std::endl;
	std::cout << "More effective when using holo/red dot/2x scope/3x scope" << std::endl;
	for (;;) {
		if (!GetKeyState(VK_NUMPAD1))
			continue;
		if (GetAsyncKeyState(VK_LBUTTON)) {
			Sleep(25);
			mouse_move(0, 0);
			Sleep(25);
			mouse_move(0, 15);
		}
		Sleep(1);
	}
}
