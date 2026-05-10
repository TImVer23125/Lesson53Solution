#include <iostream>
#include <string>
#define DEFAULT_SIZE 100'000

using namespace std;

void test01() {
	for (int i = 0; i < 100'000'000; i++);
}

void test02() {
	for (int i = 0; i < 1'000'000'000; i++);
}

int main() {
	long long start = time(NULL);
	test01();
	long long finish = time(NULL);
	cout << "Test01 running with: " << finish - start << " seconds.\n";

	start = time(NULL);
	test01();
	finish = time(NULL);
	cout << "Test02 running with: " << finish - start << " seconds.\n";

	return 0;
}