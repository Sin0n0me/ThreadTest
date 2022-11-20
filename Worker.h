#pragma once
#include <string>

class Worker {
private:
	const std::string name;
public:

	explicit Worker(const std::string);

	void sabotage(void);
	void work(void);
	void superWork(void);

};

