#include <vector>
#include <iostream>

using namespace std;

int main()
{
	int res = 0;
	for (int a = 0; a <= 200; ++a)
	{
		for (int b = 0; b <= 100; ++b)
		{
			for (int c = 0; c <= 50; ++c)
			{
				for (int d = 0; d <= 20; ++d)
				{
					for (int e = 0; e <= 10; ++e)
					{
						for (int f = 0; f <= 4; ++f)
						{
							for (int g = 0; g <= 2; ++g)
							{
								for (int h = 0; h <= 1; ++h)
								{
									if (a * 1 + b * 2 + c * 5 + d * 10 + e * 20 + f * 50 + g * 100 + h * 200 == 200)
										++res;
								}
							}
						}
					}
				}
			}
		}
	}
	cout << res << endl;
	return 0;
}