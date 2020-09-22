//#include <iostream>
//using namespace std;
//
//bool evaluate(bool p, bool q, const string& op) {
//	if (op == "^")
//		return p && q;
//	if (op == "v")
//		return p || q;
//	if (op == "xor")
//		return p ^ q;
//	if (op == "cond") {
//		if (p) {
//			return q ? true : false;
//		}
//		else return true;
//	}
//	if (op == "bi-cond") {
//		bool flag = false;
//		if (!p && !q)
//			return true;
//		return (p && q) ? true : false;
//	}
//	else throw exception("Non recognized operation");
//}
//
//int main() {
//	const string op = "bi-cond";
//	constexpr bool prop1 = true;
//	constexpr bool prop2 = true;
//	if (evaluate(prop1, prop2, op)) {
//		cout << "Pass\n";
//	}
//	else cout << "No pass\n";
//}