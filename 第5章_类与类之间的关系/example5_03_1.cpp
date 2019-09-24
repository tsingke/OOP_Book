//example5_03_1.cpp:类的依赖：掷骰子
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

class Dice			//骰子类
{
public:
		int run( )
		{
			return (rand( )%6+1);
		}
};

class Gambler		//赌徒类
{
public:
		void play(Dice a, Dice b, Dice c)
		{
			int num1, num2, num3;
			num1 = a.run( );
			num2 = b.run( );
			num3 = c.run( );
			if ( num1 == num2 && num1 == num3 )
				cout << num1 << " " << num2 << " " << num3 << " 豹子" << endl;
			else if ( num1 + num2 + num3 > 10 )
				cout << num1 << " " << num2 << " " << num3 << " 大" << endl;
			else
				cout << num1 << " " << num2 << " " << num3 << " 小" << endl;
		}
};

int main( )
{
		Dice d1, d2, d3;
		Gambler Jack;
		srand(time(NULL));
		Jack.play(d1, d2, d3);
		return 0;
}
