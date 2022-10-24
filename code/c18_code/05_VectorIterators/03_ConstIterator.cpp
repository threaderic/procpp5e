import <vector>;
import <string>;
import <iostream>;

using namespace std;

int main()
{
	vector<string> stringVector(10, "hello");
	for (auto iter{ cbegin(stringVector) }; iter != cend(stringVector); ++iter) {
		cout << *iter << endl;
	}

	
	for (const auto& element : stringVector) {
		cout << element << endl;
	}
}
