
#include "Worker.h"
#include <thread>

int main(void) {

	std::thread th1([]() {Worker woker1("Alice"); for (int i = 0; i < 10; ++i)woker1.work(); });
	std::thread th2([]() {Worker woker2("Bob"); for (int i = 0; i < 10; ++i)woker2.sabotage(); });

	th1.join();
	th2.join();

	return 0;
}
