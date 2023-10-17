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
int inv(int t, int p){//如果不存在，返回-1 
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
			m[i] = (((c[i] - 'a' - b) * inva) % 26 + 26) % 26  + 'a'; //模这里容易出错，不知道为啥。
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
    cout << "请输入加密密钥a和b，其中a的取值范围为:1 3 5 7 9 11 15 17 19 21 23 25" << endl;
    cin >> a >> b;
    // cout << a << ' ' << b << endl;
    if (gcd(a, 26) != 1) return -1;
	while(1) {
        cout << "请输入操作指令，1为加密，2为解密，其他为退出" << endl;        
        cin >> flag; //输入1进行加密，输入2进行解密，输入其他推出
		if (flag == '1') {
            cout << "请输入需要加密的字符串：" << endl;
            cin >> in; //输入字符串
			cout << EX(in, a, b) << endl; 
		} else if (flag == '2') {
            cout << "请输入需要解密的字符串：" << endl;
            cin >> in; //输入字符串
			cout << DX(in, a, b) << endl;
		} else break;
	}
	return 0;
}