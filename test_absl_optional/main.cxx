#include <iostream>
#include "absl/types/optional.h"

using std::cout;
using std::endl;

 absl::optional<int> test_optional(int v){
	if( v > 31)
		return absl::optional<int>{43};
	
	return absl::optional<int>{};
 }

 void print_value(absl::optional<int> r) {
	 if (r.has_value())
		 cout << "value = " << r.value() << endl;
	 else
		 cout << "no value \n";
 }

int main() {
	//cout << "hi\n";
	{
		const auto r = test_optional(30);
		print_value(r);
	}

	const auto r = test_optional(32);
	print_value(r);

}