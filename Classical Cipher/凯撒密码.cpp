#include<bits/stdc++.h>
using namespace std;
string EX(string m) {
	string c;
	c = m;
	for(int i = 0; i < m.length(); i++) {
		if (m[i] >= 'a' && m[i] <= 'z') {
			c[i] = (m[i] - 'a' + 3) % 26 + 'a';
		}else {
			c[i] = (m[i] - 'A' + 3) % 26 + 'A';
		}
	}
	return c;
}
string DX(string c) {
	string m;
	m = c;
	for(int i = 0; i < c.length(); i++) {
		if (c[i] >= 'a' && c[i] <= 'z') {
			m[i] = (c[i] - 'a' - 3) % 26 + 'a';
		}else {
			m[i] = (c[i] - 'A' - 3) % 26 + 'A';
		}
	}
	return m;
}
int main(){
	string in;
	char flag;
	while(1) {
		cout << "请输入操作指令，1为加密，2为解密，其他为退出" << endl;        
        cin >> flag; //输入1进行加密，输入2进行解密，输入其他推出
		if (flag == '1') {
            cout << "请输入需要加密的字符串：" << endl;
            cin >> in; //输入字符串
			cout << EX(in) << endl; 
		} else if (flag == '2') {
            cout << "请输入需要解密的字符串：" << endl;
            cin >> in; //输入字符串
			cout << DX(in) << endl;
		} else break;
	}
	return 0;
}