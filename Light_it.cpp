#include <iostream>
#include <ctime>
#include <stdlib.h> 
#include <stdio.h> 
#include <time.h> 




using namespace std;


int main(int argc, char **argv) // argc-���������� ����������, ������������ ����� ���������� �� �������� ������| argv-������ ���������
{
  setlocale(LC_ALL, "RUS");
  const int size_array_value = 9;
  int n;
  srand (time(0)); 
  string array_value[size_array_value] = { "6", "7", "8", "9", "10", "������", "����", "�����", "���" };  //��� ��������� ������� rand ������ ����� �����
  string array_suit[4]={"�����","����","�����","������"};  //������� rand ������ �����
  
  cout << "������� ���������� �������(�� ������ 6): ";
  cin >> n;
  if(n<=6 )  {
     cout << "������� � ����: " << n << "\n";
  

  for(int i = 0; i < n; i++){
    for(int i = 0; i < 6; i++){           //���� ��� ������� 6 ���� ������� ������
      cout << ' ' << array_value[rand() % size_array_value] << ' ' << array_suit[rand() % 4] << endl;
    }
    cout<<endl;}
    }
  else if(n>6){
    cout<<"�� ����� �������� ����� (���������� ������� ������ ���� �� ������ 6)!"<<endl;
  }
 
system("pause");
return 0;
}
