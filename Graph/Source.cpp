#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
int main() {
	srand(time(NULL));
	int s = rand() % 3;
	if (s == 0) cout << "an ngay bay gio" << endl;
	else if (s == 1) cout << "ngu" << endl;
	else cout << "10h roi an" << endl;
}
