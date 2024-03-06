////question n0 3;
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "         FAST BANK LIMITED       " << endl;
//	long long card = 0;
//	cout << "enter u r card number " << endl;
//	cin >> card;
//	int pin = 0;
//	cout << "enter u r pin (00)" << endl;
//	cin >> pin;
//	int total = 0, tfiveth = 1000, toneth = 1000, tfivehn = 1000, tonehn = 1000, fiveth = 0, oneth = 0, fivehn = 0, onehn = 0;
//	int draw = 0;
//	if (pin == 0)
//	{
//		cout << "Successfully Entered " << endl;
//		cout << "enter amount to withdraw in multiples of 100 " << endl;
//		cin >> draw;
//		if (draw % 100 != 0)
//		{
//			cout << "Invalid Amount enter" << endl;
//			return 0;
//		}
//		total = (tfiveth * 5000) + (toneth * 1000) + (tfivehn * 500) + (tonehn * 100);
//		if (draw > total)
//		{
//			cout << "Insufficient Cash" << endl;
//			return 0;
//		}
//		fiveth = draw / 5000;
//		if (fiveth > tfiveth)
//			fiveth = tfiveth;
//		draw = draw - fiveth * 5000;
//
//		if (draw > 0)
//		{
//			oneth = draw / 1000;
//			if (oneth > toneth)
//			{
//				oneth = toneth;
//			}
//			draw = draw - (oneth * 1000);
//
//			if (draw > 0)
//				fivehn = draw / 500;
//			if (draw > 0)
//				onehn = draw / 100;
//			cout << "Total Number of 5000: " << fiveth << endl;
//			cout << "Total Number of 1000: " << oneth << endl;
//			cout << "Total Number of 500: " << fivehn << endl;
//			cout << "Total Number of 100: " << onehn << endl;
//
//		}
//
//	}
//	else {
//		cout << "invalid pin " << endl;
//	}
//	return 0;
//}
////question n0 3;
#include <iostream>
using namespace std;
int main()
{
	char arr[] = { "hello world" };
	//cout << arr[12];
	return 0;
}