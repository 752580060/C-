//2018��10��30��19��49��
//	���ݣ�����������
//	���ͣ�C++ �����������������������������ȡ��ͬ�����֣�ֻҪ������ͬ���ɣ�
//			��������������أ��������ء������������ء�����Ӣ���� overload�������ؾ�
//				��װ�ض��ֶ�������˼����ͬһ����������ɲ�ͬ���ܡ�
//					�ڵ���ͬ������ʱ��������ͨ��ʵ�εĸ������������ж� ���׵��õ����Ǹ�������
//						���Ա���ȷ��������ʵ�θ������������������壬�����ĺ�������ͬ��

#include <iostream>
using namespace std;
void Max(int a, int b)
{
	cout << "Max 1" << endl;
}
void Max(double a, double b)
{
	cout << "Max 2" << endl;
}
void Max(double a, double b, double c)
{
	cout << "Max 3" << endl;
}
int main()
{
	Max(3, 4);  //���� int Max(int, int)
	Max(2.4, 6.0);  //���� double Max(doubleA double)
	Max(1.2, 3.4, 5);  //���� double Max(double, double, double)    
	Max(1, 2, 3);  //���� double Max(double, double, double)      ��ͬ����һ�У����ﲻ���ֶ����ԣ�����Ϊ��Ϊ��Max�������ʵ������Ϊ3�ĺ���ֻ��һ��
//	Max(3, 1.5);  //�������������
	return 0;
}
//���н����
