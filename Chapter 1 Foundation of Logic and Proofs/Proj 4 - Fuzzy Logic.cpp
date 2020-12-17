//#include <iostream>
//
//using namespace std;
//
//const double EPSILON = 0.0001;
//
//bool compareZero (const double& val)  {
//	return (fabs(val) - 0.0) <= EPSILON;
//}
//
//double negateVal (const double& val)  {
//	return 1 - val;
//}
//
//bool evaluate (const double& p, const double& q, const char& op) {
//	switch (op) {
//	case '^':
//		if (p < q)
//			if (compareZero(p))	//bad, use other way to compare to 0
//				return false;
//			else return true;
//		else 
//			if (compareZero(q))
//				return false;
//			else return true;
//		break;
//	case 'v':
//		if (p > q)
//			if (p > 0)
//				return true;
//			else return false;
//		else
//			if (q > 0)
//				return true;
//			else return false;
//		break;
//	default:
//		break;
//	}
//	throw logic_error ("arguments out of range");
//}
//
//int main () {
//	double p = 0.0;
//	double q = 0.0;
//
//	cout << "Fred and John are happy: " << evaluate (p, q, '^') << "\n";
//	cout << "Neither Fred nor John is happy: " << evaluate (negateVal (p), negateVal (q), '^') << "\n";
//	cout << "Fred is happy, or John is happy: " << evaluate (p, q, 'v') << "\n";
//	cout << "Fred is not happy, or John is not happy: " << evaluate (negateVal (p), negateVal (q), 'v') << endl;
//
//	cout << numeric_limits<double>::epsilon ();
//}