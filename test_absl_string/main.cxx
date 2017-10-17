#include <iostream>
#include "absl/strings/str_split.h"
#include <algorithm>
using std::cout;
using std::endl;

void analyse(absl::string_view v) {
	cout << v << endl;;
}

int main() {
	//cout << "hi\n";
	std::vector<std::string> v1 = absl::StrSplit("a, b, c", ", ");
	std::for_each(v1.begin(), v1.end(), [](auto x) {cout << x << endl; });

	analyse("hi anil kumar");
	const std::string t{ "vijay kumar" };
	analyse(t);
}