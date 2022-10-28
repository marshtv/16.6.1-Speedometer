#include <iostream>

bool compare(double value, double reference, double epsilon) {
	return (value >= reference - epsilon) && (value <= reference + epsilon);
}

int main() {
	float speed_value = 0.0f, speed_delta, speed_limit = 150.0f;
	char speed_str[0];

	std::cout << "Let's start!" << std::endl;
	do {
		std::sprintf(speed_str, "%.1f", speed_value);
		std::cout << "Speed: " << speed_str << " km/h."<< std::endl;
		std::cout << "-------------------------" << std::endl;
		std::cout << "Input delta speed:";
		std::cin >> speed_delta;

		if (speed_value + speed_delta > speed_limit) {
			speed_value = speed_limit;
			std::cout 	<< "You have reached the speed limit of 150 km/h. "
						<< "You need to slow down!" << std::endl;
		} else
			speed_value += speed_delta;
		if (speed_value < 0.0f)
			speed_value = 0.0f;
	} while (!compare(speed_value, 0.00f, 0.01));

	std::cout << "********************" << std::endl;
	std::cout << "Your car is stopped." << std::endl;
}
