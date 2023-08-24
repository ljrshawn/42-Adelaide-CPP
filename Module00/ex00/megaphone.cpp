#include <iostream>
#include <cctype>

void print_argv(char *argv[]) {
	while (*argv != nullptr) {
		char *str = *argv;
		while (*str != '\0') {
			*str = std::toupper(*str);
			std::cout << *str;
			str++;
		}
		argv++;
	}
}

int main(int argc, char *argv[]) {
	if (argc > 1) {
		print_argv(++argv);
	} else {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	std::cout << std::endl;
	return 0;
}