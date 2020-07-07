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




// 辗转相除法求最大公约数
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

// 访问容器之前必须先保证其不为空，否则就会断言失败
bool chkParenthesis(string A, int n) {
	//两个栈
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
//	// set : 无序，看似无序，遍历有序，底层是搜索树
//	// 遍历有序：搜索树的中序遍历
//	set<int> si;
//
//	int arr[] = { 10, 3, 2, 8, 11 };
//	set<int> s2(arr, arr + 5);
//	set<int> copy(s2);
//	set<int,greater<int>> copy2(arr,arr+5);
//
//	// set : 只读，不能修改
//	set<int>::iterator sit = s2.begin();
//	while (sit != s2.end()){
//		cout << *sit << " ";
//		sit++;
//	}
//	cout << endl;
//
//	// set : 只读，不能修改
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
//	// iterator位置插入只是一个建议，新插入的元素位置不一定是一个指定位置，最终插入位置需要遵循搜索树
//	// 不会插入重复的元素
//	s2.insert(s2.begin(), 12);
//	s2.insert(s2.begin(), 12);
//	printSet(s2);
//
//	s2.erase(10);
//	printSet(s2);
//	// 最左节点
//	// 删除接口传入的位置必须有效
//	// 最好是根据值删除
//	s2.erase(s2.begin());
//	printSet(s2);
//
//	// count : 统计存放次数：存在：1；不存在：0
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
//	// 导致当前位置的迭代器失效，不会影响其他迭代器
//	// 失效的迭代器需要重新获取，
//	s2.erase(it);
//// 删除的时释放节点，迭代器失效，野指针，不能再访问
//	//cout << *it << endl;
//	// 左闭右开
//	//s2.erase(s2.begin(), s2.end());
//
//}
//
//
//void test2(){
//	// 至少两个参数
//	map<int, string> m;
//	// key : 不能一样;value:可以重复
//	// 查找删除都是按照 key值来走的，因此不能重复
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
//	// 迭代器解引用为：pair
//	// 迭代器遍历顺序：按照key值来遍历
//	// 默认比较是小于,都是通过key进行比较，value不参与比较
//	cout << "pair:迭代器" << endl;
//	while (it != m2.end()){
//		cout << it->first << "-->" << it->second << endl;
//		it++;
//	}
//
//	// 非const迭代器支持value的修改，不支持key的修改
//	// 因为如果修改key将会导致结构的改变
//	
//	map<vector<vector<int>>, int> m3;
//}
//
//void test3(){
//	map<int, int> m;
//	// at:key不存在，抛异常
//	// operator[] : key不存在，走插入操作
//	// operator : 
//	// value& perator[](key)
//	// 1、创建一个kv(v默认值)键值对
//	// 2、执行插入操作，插入第一步创建的kv键值对
//	// 3、获取插入接口返回值的第一个迭代器成员: pair<iterator,bool.first
//	//			iterator -->指向map中的一个kv值
//	cout << m[2] << endl;  
//	// 不存在直接抛异常
//	//cout << m.at(2)<< endl;
//
//	pair<map<int,int>::iterator,bool> ret =  m.insert(make_pair(3,3));
//	cout << ret.first->first << ret.first->second<< endl;
//	cout << "插入成功与否" << endl;
//	cout << ret.second << endl;
//
//	//pair<iterator,bool> : iterator : kv键值对在map中的迭代器
//	// bool : 表示是否插入成功
//	// 插入成功：iterator 表示新插入kv键值对迭代器
//	// 插入失败：iterator 表示已经存在对应key对应的kv键值对迭代器
//
//	// 插入失败：因为key已经存在
//	// 但是也会返回已经存在的<k,v>迭代器位置
//	ret = m.insert(make_pair(3, 3));
//	cout << ret.first->first << ret.first->second << endl;
//	cout << "插入成功与否" << endl;
//	cout << ret.second << endl;
//
//	// 已经存在的值就会插入失败
//	// key存在插入失败
//	// pair<iterator,bool> :
//	// iterator : kv键值对在map中的位置
//	// 表示中kv键值对对应的迭代器
//	// bool : 插入是否成功
//	// 插入成功 ： iterator 表示新插入kv键值对的迭代器
//	// 插入失败 ：iterator 表示已经存在的kv键值对
//	// 返回的为一个有效的迭代器
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
//	///修改
//	m[1] = 10;
//	m[2] = 20;
//	m[3] = -3;
//	printMap(m);
//
//	map<int, int>::iterator it = m.begin();
//	cout << it->first << "--->" << it->second << endl;
//	// 删除会导致当前迭代器失效
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