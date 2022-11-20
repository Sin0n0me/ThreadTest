#include "Worker.h"
#include <iostream>
#include "boost/random.hpp"
#include "boost/random/random_device.hpp"
#include <windows.h>

Worker::Worker(const std::string name) : name(name) {

}

void Worker::sabotage(void) {
	boost::random::random_device seed_gen;
	boost::random::mt19937 gen(seed_gen);
	boost::random::uniform_int_distribution<> dist(100, 500);
	const int spleepTime = dist(gen);

	Sleep(spleepTime);
	std::cout << this->name << ":" << "sabotage " << spleepTime << "ms" << std::endl;
}

void Worker::work(void) {
	boost::random::random_device seed_gen;
	boost::random::mt19937 gen(seed_gen);
	boost::random::uniform_int_distribution<> dist(100, 200);
	const int spleepTime = dist(gen);

	Sleep(spleepTime);
	std::cout << this->name << ":" << "work" << spleepTime << "ms" << std::endl;
}

void Worker::superWork(void) {
	boost::random::random_device seed_gen;
	boost::random::mt19937 gen(seed_gen);
	boost::random::uniform_int_distribution<> dist(500, 2000);
	const int spleepTime = dist(gen);

	Sleep(spleepTime);
	std::cout << this->name << ":" << "superWork" << spleepTime << "ms" << std::endl;
}
