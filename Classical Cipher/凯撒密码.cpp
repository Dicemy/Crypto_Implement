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
		cout << "���������ָ�1Ϊ���ܣ�2Ϊ���ܣ�����Ϊ�˳�" << endl;        
        cin >> flag; //����1���м��ܣ�����2���н��ܣ����������Ƴ�
		if (flag == '1') {
            cout << "��������Ҫ���ܵ��ַ�����" << endl;
            cin >> in; //�����ַ���
			cout << EX(in) << endl; 
		} else if (flag == '2') {
            cout << "��������Ҫ���ܵ��ַ�����" << endl;
            cin >> in; //�����ַ���
			cout << DX(in) << endl;
		} else break;
	}
	return 0;
}