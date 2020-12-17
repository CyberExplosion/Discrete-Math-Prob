//#include <iostream>
//#include <string>
//using namespace std;
//
//int convertCharBitToNum(const char ch) {
//	return ch - '0';
//}
//
//int bitResult(int firstBit, int secondBit, const string& op) {
//	if (op == "AND")
//		return (static_cast<bool>(firstBit) && static_cast<bool>(secondBit));
//	if(op == "OR")
//		return (static_cast<bool>(firstBit) || static_cast<bool>(secondBit));
//	if (op == "XOR")
//		return (static_cast<bool>(firstBit) ^ static_cast<bool>(secondBit));
//	else
//		throw exception("Not recognized Operation");
//}
//
//string convertBitString(const string& first, const string& second, const string& op) {
//	if (first.size() == second.size()) {
//		string result{};
//		for (auto i = 0; i < first.size(); ++i) {
//			int firstBit{ convertCharBitToNum(first.at(i)) };
//			int secondBit{ convertCharBitToNum(second.at(i)) };
//			result += std::to_string(bitResult(firstBit, secondBit, op));
//		}
//		return result;
//	}
//	else
//		throw exception("Two string not having same size");
//}
//
//int main() {
//	string op{ "XOR" };
//	string first{ "10101" };
//	string second{ "10101" };
//	string result{ convertBitString(first, second, op) };
//	cout << "Show magic: " << result << endl;
//}