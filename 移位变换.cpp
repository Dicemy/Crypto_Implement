#include<bits/stdc++.h>
using namespace std;
string EX(string m, int k) {
	string c;
	c = m;
	for(int i = 0; i < m.length(); i++) {
		if (m[i] >= 'a' && m[i] <= 'z') {
			c[i] = (m[i] - 'a' + k) % 26 + 'a';
		}else {
			c[i] = (m[i] - 'A' + k) % 26 + 'A';
		}
	}
	return c;
}
string DX(string c, int k) {
	string m;
	m = c;
	for(int i = 0; i < c.length(); i++) {
		if (c[i] >= 'a' && c[i] <= 'z') {
			m[i] = (c[i] - 'a' - k) % 26 + 'a';
		}else {
			m[i] = (c[i] - 'A' - k) % 26 + 'A';
		}
	}
	return m;
}
int main(){
	string in;
	char flag;
    int k = 0;
    cout << "�����������Կ" << endl;
    cin >> k;
	while(1) {
        cout << "���������ָ�1Ϊ���ܣ�2Ϊ���ܣ�����Ϊ�˳�" << endl;        
        cin >> flag; //����1���м��ܣ�����2���н��ܣ����������Ƴ�
		if (flag == '1') {
            cout << "��������Ҫ���ܵ��ַ�����" << endl;
            cin >> in; //�����ַ���
			cout << EX(in, k) << endl; 
		} else if (flag == '2') {
            cout << "��������Ҫ���ܵ��ַ�����" << endl;
            cin >> in; //�����ַ���
			cout << DX(in, k) << endl;
		} else break;
	}
	return 0;
}