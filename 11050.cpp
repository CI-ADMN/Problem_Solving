#include<iostream>
using namespace std;

int binCoeff(int n,int k) {
	if (k == 0 || n == k) {
		return 1;
	}
	return binCoeff(n - 1, k - 1) + binCoeff(n - 1, k);
}
int main() {
	int N, K;
	cin >> N >> K;
	cout<<binCoeff(N, K);
	return 0;
}

/*���� ����� ���� �⺻���� ���� �ڵ�(���)*/
//n�� Ŀ���� ������ ���� ��κ��� ��ȸ���� mod�� ���Ѱ��� ��������ó��
//�̶��� return (binCoeff(n - 1, k - 1) + binCoeff(n - 1, k))%mod �̷���
//���� �ż��� factorial ����� �δ��� ŭ O(2n) (n��Ŀ�� �� ����)