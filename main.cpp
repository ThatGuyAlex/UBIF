#include <iostream>
#include <string>
#include <process.h>
#include <windows.h>
using namespace std;

int main() {
	string a;
	cout << "Please scan barcode: ";
	cin >> a;
	auto sub = a.substr(3);
	string base_url = "https://portal.ubif.net/pos/workorder/";
	string search_url = base_url + sub;
	ShellExecuteA(NULL, "open", search_url.c_str(), NULL, NULL, SW_SHOWNORMAL);


	return main();
}
