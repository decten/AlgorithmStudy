#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	for (int i = 0; i < 10; i++) {
		int test_case;
		cin >> test_case;

		int arr[1000];
		for (int i = 0; i < test_case; i++) {
			cin >> arr[i];
		}

		int count = 0;
		for (int i = 2; i < test_case - 2; i++) {
			int comp[4];
			comp[0] = arr[i - 2];
			comp[1] = arr[i - 1];
			comp[2] = arr[i + 1];
			comp[3] = arr[i + 2];
			sort(comp, comp + 4);
			if (comp[3] < arr[i]) count += arr[i] - comp[3];
		}

		cout << '#' << (i + 1) << ' ' << count << endl;
	}

	return 0;
}
