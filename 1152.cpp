#include<cstdio>
#include<cstring>
using namespace std;

int main(void)
{
	int count = 1;
	char arr[1000001];
	gets(arr);
	int len = strlen(arr);
	for (int i = 1; i < len; i++){
		if (arr[i] == ' '){ count++; }
	}
	if (arr[len - 1] == ' ')count--;
	printf("%d", count);
	return 0;
}

/*
�߸� ���� �����ε��ϴ�. 
������ �������� ���, �������� �����Ѱ�� ��
������鿡�� ���� ������ �ǵ��ʹ� ���������� ����� ���� �ִ�.
�������� �ð��� ��ƸԴ� ������� ����.
*/