#include <iostream>

int main()
{
	int x, y, z, a, b, GCD, LCM;


	std::cout << "�� ���ڸ� �Է��ϼ���!" << std::endl;
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
	std::cout << "�ִ������� "<< GCD << "�̰�, �ּҰ������ " << LCM << "�Դϴ�.";
}