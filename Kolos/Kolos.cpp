#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
template <typename T>
void show(set <T> s) {
	typename set<T>::iterator itr;
	for (itr = s.begin(); itr != s.end(); itr++)
		cout << *itr << " ";
	cout << endl;
}
template <typename T >
set<T> funkcja(set<T> set1, set<T> set2) {
	set <T> kontener;
	set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(),insert_iterator<set<T>>(kontener, kontener.begin()));
	return kontener;
}

int main() {
	set <int> s = { 1, 2, 3, 7 };
	set <int> s2 = { -2, 4, 1, 7, 6 };
	set <string> s1 = { "jebanie", "dupa" };
	set <string> s3 = { "dupa", "guwno" };
	cout << "Int: " << endl;
	show(funkcja(s, s2));
	cout << "String: " << endl;
	show(funkcja(s1, s3));
	return 0;
};
