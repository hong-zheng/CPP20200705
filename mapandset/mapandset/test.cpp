#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <functional>
#include <vector>
#include <stack>
using namespace std;




// շת����������Լ��
int gcd(int a, int b){
	if (a < b) swap(a, b);
	if (a%b == 0) return b;
	else gcd(b, a - b);
}

int main(){
	int a;
	int b;
	cin >> a >> b;
	cout << gcd(a, b) << endl;
	system("pause");
	return 0;
}
//bool islexicographically(vector<string> strvec, int n){
//	for (size_t i = 0; i<n - 1; ++i){
//		if (strvec[i].compare(strvec[i + 1]) > 0){
//			return false;
//		}
//	}
//	return true;
//}
//bool islengths(vector<string> strvec, int n){
//	for (size_t i = 0; i<n - 1; ++i){
//		if (strvec[i].size() > strvec[i + 1].size()){
//			return false;
//		}
//	}
//	return true;
//}
//int main(){
//	int n;
//	while (cin >> n){
//		if (!n) {
//			cout << "none" << endl;
//			continue;
//		}
//		vector<string> strvec;
//		strvec.reserve(n);
//		for (int i = 0; i<n; ++i){
//			string str;
//			cin >> str;
//			strvec.push_back(str);
//		}
//		bool islex = islexicographically(strvec, n);
//		bool islen = islengths(strvec, n);
//		if ((1 == n) || (islex && islen)){
//			cout << "both" << endl;
//		}
//		else if (islex){
//			cout << "lexicographically" << endl;
//		}
//		else if (islen){
//			cout << "lengths" << endl;
//		}
//		else{
//			cout << "none" << endl;
//		}
//	}
//	return 0;
//}
//int main(){
//
//	int n = 0;
//	vector<int> vi;
//	cin >> n;
//	
//	for (int i = 0; i < n; i++){
//		vi.reserve(1);
//		cin >> vi[i];
//	}
//	system("pause");
//	return 0;
//}
//void swap(int& a, int& b){
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//int zdgys(int A, int B){
//	if (B > A) swap(A, B);
//	for (int i = B; i > 0; i--){
//		if ((A%i == 0) && (B % i == 0)){
//			return i;
//		}
//	}
//	return 0;
//}
//int main(){
//	int A, B;
//	cin >> A >> B;
//	int k = zdgys(A, B);
//	cout << A*B / k << endl;
//	return 0;
//}

//class A{
//public:
//	virtual int getInt() = 0;
//	virtual void print() = 0;
//};
//class B :public A{
//public:
//	void print(){
//		cout << "B:print()" << endl;
//	}
//	int getInt(){
//		return 100;
//	}
//};
//
//void test(){
//	B b;
//	b.print();
//}
//class A{
//	int _id;
//public:
//	virtual void print(){};
//	//void  print1(){
//	//	cout << _id;
//	//}
//};
//void test(){
//	A a;
//	a.print();
//}
//int main(){
//	test();
//	system("pause");
//	return 0;
//}
/*
bool islexicographically(vector<string>& strvec, int n){
	for (size_t i = 0; i<n - 1; ++i){
		if (strvec[i].compare(strvec[i + 1]) > 0){
			return false;
		}
	}
	return true;
}
bool islengths(vector<string>& strvec, int n){
	for (size_t i = 0; i<n - 1; ++i){
		if (strvec[i].size() > strvec[i + 1].size()){
			return false;
		}
	}
	return true;
}
int mains(){
	int n;
	cin >> n;
	if (!n) {
		cout << "none" << endl;
	}
	vector<string> strvec;
	strvec.reserve(n);
	for (int i = 0; i<n; ++i){
		cin >> strvec[i];
	}
	bool islex = islexicographically(strvec, n);
	bool islen = islengths(strvec, n);
	if ((1 == n) || (islex && islen)){
		cout << "both" << endl;
	}
	else if (islex){
		cout << "lexicographically" << endl;
	}
	else if (islen){
		cout << "lengths" << endl;
	}
	else{
		cout << "none" << endl;
	}
	system("pause");
	return 0;
}
*/
int smasin(){
	int n = 0;
	vector<int> vi;
	cin >> n;
	vi.reserve(n);
	for (int i = 0; i < n; i++){
		cin >> vi[i];
	}
	system("pause");
	return 0;
}


class Person{
public:
	Person(int no = 0, string name = "")
		:_no(no)
		, _name(name)
	{}

	static void printSchool(){
		cout << _school << endl;
	}

	static void a(){
		printSchool();
	}
	void b(){
		printSchool();
	}
private:
	int _no;
	string _name;
	static string _school;
};
string Person::_school = "sxkjdx";
void printv(vector<int>& vec){
	vec[0] = 111;
}

int findPos(vector<int> A, int begin, int end, int x){
	while (begin < end){
		int mid = (begin + end) / 2;
		if (A[mid] == x){
			return mid;
		}
		else if (A[mid] < x){
			begin = mid + 1;
		}
		else{
			end = mid - 1;
		}
	}
	return -1;
}
int changeIdx(vector<int> ret){
	int i = 0;
	int n = ret.size() - 1;
	if (ret[0]<ret[1]){
		// 123987
		while (i < n && ret[i]<ret[i + 1])
			i++;
	}
	else{
		while (i < n &&  ret[i]>ret[i + 1])
			++i;
	}
	return i;
}
int findElement(vector<int> A, int n, int x) {
	int begin = 0;
	int end = A.size() - 1;
	if (x <= A[end])  if (x == A[end]) return end; else begin = changeIdx(A);
	else if(x > A[begin]) if (x == A[begin]) return begin; else end = changeIdx(A);
	return  findPos(A, begin, end, x);
}

// ��������֮ǰ�����ȱ�֤�䲻Ϊ�գ�����ͻ����ʧ��
bool chkParenthesis(string A, int n) {
	//����ջ
	stack<char> src;
	stack<char> tmp;
	for (int i = 0; i<n; ++i){
		src.push(A[i]);
	}

	while (!src.empty()){
		char top1 = src.top();
		src.pop();
		if (top1 == ')'){
			if (!src.empty() && src.top() == '(') {
					src.pop();
			}else if(!tmp.empty()){ 
				if (tmp.top() == '('){
					tmp.pop();
				}
			}else{
				tmp.push(top1);
			}
		}else if (top1 == '('){
			if (!src.empty()){
				if (src.top() == ')'){
					src.pop();
				}
			}
			else if (!tmp.empty() && tmp.top() == ')'){
				tmp.pop();
			}else{
				tmp.push(top1);
			}
		}else {
			break;
		}
	}

	if (src.empty() && tmp.empty()){
		return true;
	}
	return false;
}
int maian(void) { 
	string A = "(()())";
	cout << chkParenthesis(A, 6) << endl;

	stack<int> st; 
	st.push(1);
	st.pop();
	//vector<int> mat = { 6, 1, 2, 3, 4, 5 };
	//int ret = findElement(mat, 6, 2);
	//cout << (char)48 << endl;
	//vector<int> vec = { 0, 0 };
	//printv(vec);
	//for (int i = 0; i < vec.size(); ++i)
	//	cout << vec[i] << " ";



	//int p[4];
	//int *(p1[4]);
	//int(*p2)[4];
	//cout << sizeof(p) << endl;
	//cout << sizeof(p1) << endl;
	//cout << sizeof(p2) << endl;
	//printf("%s , %5.3s\n", "computer", "computer"); 
	system("pause");
	return 0; 
}
//
//
//void printSet(const set<int,greater<int>>& s2){
//	set<int>::iterator sit = s2.begin();
//	while (sit != s2.end()){
//		cout << *sit << " ";
//		sit++;
//	}
//	cout << endl;
//}
//void test(){
//	// set : ���򣬿������򣬱������򣬵ײ���������
//	// �����������������������
//	set<int> si;
//
//	int arr[] = { 10, 3, 2, 8, 11 };
//	set<int> s2(arr, arr + 5);
//	set<int> copy(s2);
//	set<int,greater<int>> copy2(arr,arr+5);
//
//	// set : ֻ���������޸�
//	set<int>::iterator sit = s2.begin();
//	while (sit != s2.end()){
//		cout << *sit << " ";
//		sit++;
//	}
//	cout << endl;
//
//	// set : ֻ���������޸�
//	set<int>::iterator sit1 = copy2.begin();
//	while (sit1 != copy2.end()){
//		cout << *sit1 << " ";
//		sit1++;
//	}
//}
//void test1(){
//	int arr[] = { 10, 3, 2, 8, 11 };
//	set<int,greater<int>> s2(arr, arr + 5);
//
//	
//	printSet(s2);
//	s2.insert(56);
//	// iteratorλ�ò���ֻ��һ�����飬�²����Ԫ��λ�ò�һ����һ��ָ��λ�ã����ղ���λ����Ҫ��ѭ������
//	// ��������ظ���Ԫ��
//	s2.insert(s2.begin(), 12);
//	s2.insert(s2.begin(), 12);
//	printSet(s2);
//
//	s2.erase(10);
//	printSet(s2);
//	// ����ڵ�
//	// ɾ���ӿڴ����λ�ñ�����Ч
//	// ����Ǹ���ֵɾ��
//	s2.erase(s2.begin());
//	printSet(s2);
//
//	// count : ͳ�ƴ�Ŵ��������ڣ�1�������ڣ�0
//	cout <<"3-->"<< s2.count(3) << endl;
//
//	set<int>::iterator fit = s2.find(3);
//	if (fit != s2.end()){
//		cout << "fit" << endl;
//		cout << *fit << endl;
//	}
//	auto it = s2.begin();
//	auto it2 = ++it;
//	cout << *it2 << endl;
//	// ���µ�ǰλ�õĵ�����ʧЧ������Ӱ������������
//	// ʧЧ�ĵ�������Ҫ���»�ȡ��
//	s2.erase(it);
//// ɾ����ʱ�ͷŽڵ㣬������ʧЧ��Ұָ�룬�����ٷ���
//	//cout << *it << endl;
//	// ����ҿ�
//	//s2.erase(s2.begin(), s2.end());
//
//}
//
//
//void test2(){
//	// ������������
//	map<int, string> m;
//	// key : ����һ��;value:�����ظ�
//	// ����ɾ�����ǰ��� keyֵ���ߵģ���˲����ظ�
//	
//	map<string, int> si;
//	
//	vector<pair<string, int>> vec;
//	for (int i = 0; i < 10; ++i){
//		pair<string, int> p(string("hong") + (char)(i+'0'), i);
//		vec.push_back(p);
//
//		vec.push_back(pair<string, int>("69", 10));
//		vec.push_back(make_pair("68", 3));
//	}
//
//	map<string, int> m2(vec.begin(), vec.end());
//	map<string, int> copy(m2);
//
//	cout <<"size:"<< m2.size() << endl;
//
//	map<string, int>::iterator it = m2.begin();
//
//	// ������������Ϊ��pair
//	// ����������˳�򣺰���keyֵ������
//	// Ĭ�ϱȽ���С��,����ͨ��key���бȽϣ�value������Ƚ�
//	cout << "pair:������" << endl;
//	while (it != m2.end()){
//		cout << it->first << "-->" << it->second << endl;
//		it++;
//	}
//
//	// ��const������֧��value���޸ģ���֧��key���޸�
//	// ��Ϊ����޸�key���ᵼ�½ṹ�ĸı�
//	
//	map<vector<vector<int>>, int> m3;
//}
//
//void test3(){
//	map<int, int> m;
//	// at:key�����ڣ����쳣
//	// operator[] : key�����ڣ��߲������
//	// operator : 
//	// value& perator[](key)
//	// 1������һ��kv(vĬ��ֵ)��ֵ��
//	// 2��ִ�в�������������һ��������kv��ֵ��
//	// 3����ȡ����ӿڷ���ֵ�ĵ�һ����������Ա: pair<iterator,bool.first
//	//			iterator -->ָ��map�е�һ��kvֵ
//	cout << m[2] << endl;  
//	// ������ֱ�����쳣
//	//cout << m.at(2)<< endl;
//
//	pair<map<int,int>::iterator,bool> ret =  m.insert(make_pair(3,3));
//	cout << ret.first->first << ret.first->second<< endl;
//	cout << "����ɹ����" << endl;
//	cout << ret.second << endl;
//
//	//pair<iterator,bool> : iterator : kv��ֵ����map�еĵ�����
//	// bool : ��ʾ�Ƿ����ɹ�
//	// ����ɹ���iterator ��ʾ�²���kv��ֵ�Ե�����
//	// ����ʧ�ܣ�iterator ��ʾ�Ѿ����ڶ�Ӧkey��Ӧ��kv��ֵ�Ե�����
//
//	// ����ʧ�ܣ���Ϊkey�Ѿ�����
//	// ����Ҳ�᷵���Ѿ����ڵ�<k,v>������λ��
//	ret = m.insert(make_pair(3, 3));
//	cout << ret.first->first << ret.first->second << endl;
//	cout << "����ɹ����" << endl;
//	cout << ret.second << endl;
//
//	// �Ѿ����ڵ�ֵ�ͻ����ʧ��
//	// key���ڲ���ʧ��
//	// pair<iterator,bool> :
//	// iterator : kv��ֵ����map�е�λ��
//	// ��ʾ��kv��ֵ�Զ�Ӧ�ĵ�����
//	// bool : �����Ƿ�ɹ�
//	// ����ɹ� �� iterator ��ʾ�²���kv��ֵ�Եĵ�����
//	// ����ʧ�� ��iterator ��ʾ�Ѿ����ڵ�kv��ֵ��
//	// ���ص�Ϊһ����Ч�ĵ�����
//
//	//(*((this->insert(make_pair(k, mapped_type()))).first)).second
//
//	cout<< m[2];
//}
//
//void printMap(const map<int,int> m){
//	map<int, int>::const_iterator cit = m.begin();
//	while (cit != m.end()){
//		cout << cit->first << "-->" << cit->second << endl;
//		cit++;
//	}
//	cout << endl;
//}
//void test4(){
//
//	map<int, int> m;
//	m[1] = 1;
//	m[2] = 2;
//	m[3] = 3;
//	m[4] = 4;
//	printMap(m)
//		;
//
//	///�޸�
//	m[1] = 10;
//	m[2] = 20;
//	m[3] = -3;
//	printMap(m);
//
//	map<int, int>::iterator it = m.begin();
//	cout << it->first << "--->" << it->second << endl;
//	// ɾ���ᵼ�µ�ǰ������ʧЧ
//	m.erase(it);
//	//cout << it->first << "--->" << it->second << endl;
//	it = m.find(3);
//	cout << (it == m.end()) << endl;
//	it = m.find(100);
//	cout << (it == m.end()) << endl;
//
//	cout << m.count(3) << endl;
//	cout << m.count(100) << endl;
//}
//int main(){
//	//int capacity = 0;
//	//for (; capacity < 100;){
//	//	capacity = capacity + (((capacity >> 1) > 1) ? (capacity >> 1) : 1);
//	//	cout << capacity << endl;
//	//}
//	//
//	test4();
//	//test3();
//	//test2();
//	//test1();
//	//test();
//	queue<int> q;
//	q.push(1);
//
//	system("pause");
//	//while (1);
//	return 0;
//}