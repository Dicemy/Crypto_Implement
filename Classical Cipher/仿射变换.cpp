#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}
void ex_gcd(int a, int b, int &x, int &y, int &d){
      if (!b) {d = a, x = 1, y = 0;}
      else{
          ex_gcd(b, a % b, y, x, d);
          y -= x * (a / b);
      }
  }
int inv(int t, int p){//��������ڣ�����-1 
    int d, x, y;
    ex_gcd(t, p, x, y, d);
    return d == 1 ? (x % p + p) % p : -1;
 }
string EX(string m, int a, int b) {
	string c;
	c = m;
	for(int i = 0; i < m.length(); i++) {
		if (m[i] >= 'a' && m[i] <= 'z') {
			c[i] = ((m[i] - 'a') * a + b) % 26 + 'a';
		}else {
			c[i] = ((m[i] - 'A') * a + b) % 26 + 'A';
		}
	}
	return c;
}
string DX(string c, int a, int b) {
	string m;
	m = c;
    int inva = inv(a, 26);
	for(int i = 0; i < c.length(); i++) {
		if (c[i] >= 'a' && c[i] <= 'z') {
			m[i] = (((c[i] - 'a' - b) * inva) % 26 + 26) % 26  + 'a'; //ģ�������׳�����֪��Ϊɶ��
            // cout << (((c[i] - 'a' - b) * inva) % 26 + 26) % 26 <<endl;
		}else {
			m[i] = (((c[i] - 'A' - b) * inva) % 26 + 26) % 26 + 'A';
		}
	}
	return m;
}
int main(){
	string in;
	char flag;
    int a, b;
    cout << "�����������Կa��b������a��ȡֵ��ΧΪ:1 3 5 7 9 11 15 17 19 21 23 25" << endl;
    cin >> a >> b;
    // cout << a << ' ' << b << endl;
    if (gcd(a, 26) != 1) return -1;
	while(1) {
        cout << "���������ָ�1Ϊ���ܣ�2Ϊ���ܣ�����Ϊ�˳�" << endl;        
        cin >> flag; //����1���м��ܣ�����2���н��ܣ����������Ƴ�
		if (flag == '1') {
            cout << "��������Ҫ���ܵ��ַ�����" << endl;
            cin >> in; //�����ַ���
			cout << EX(in, a, b) << endl; 
		} else if (flag == '2') {
            cout << "��������Ҫ���ܵ��ַ�����" << endl;
            cin >> in; //�����ַ���
			cout << DX(in, a, b) << endl;
		} else break;
	}
	return 0;
}