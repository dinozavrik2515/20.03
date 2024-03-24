#include <iostream>



int main()
{

	for (int i = 9; i > 0; i--)
	{
		if (i == 9)
		{
			std::cout << "   a  b  c  d  e  f  g  h\n\n";
		}
		if (i == 1)
		{
			std::cout << "\n   a  b  c  d  e  f  g  h";
		}
		else
		{
			std::cout << i - 1 << "  " << "a" << i - 1 << " ";
			std::cout << "b" << i - 1 << " ";
			std::cout << "c" << i - 1 << " ";
			std::cout << "d" << i - 1 << " ";
			std::cout << "e" << i - 1 << " ";
			std::cout << "f" << i - 1 << " ";
			std::cout << "g" << i - 1 << " ";
			std::cout << "h" << i - 1 << "  " << i - 1;
			std::cout << "\n";
		}

	}

}


