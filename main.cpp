#include <iostream>

int main()
{
	int x, y, z, a, b, GCD, LCM;


	std::cout << "두 숫자를 입력하세요!" << std::endl;
	std::cin >> x >> y;

	a = x;
	b = y;

	for (z = 2; z <= x && z <= y; z++)
	{	
		if (x % z == 0 && y % z == 0)
		{
			x = x / z;
			y = y / z;
			z--;
			continue;
		}

		else 
		{
			continue;
		}
		
	}

	GCD = a / x;
	LCM = GCD * x * y;
	std::cout << "최대공약수는 "<< GCD << "이고, 최소공배수는 " << LCM << "입니다.";
}