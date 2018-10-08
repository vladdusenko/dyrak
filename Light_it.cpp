#include <iostream>
#include <ctime>
#include <stdlib.h> 
#include <stdio.h> 
#include <time.h> 




using namespace std;


int main(int argc, char **argv) // argc-количество аргументов, передаваемых вашей программой из комндной строки| argv-массив аргумента
{
  setlocale(LC_ALL, "RUS");
  const int size_array_value = 9;
  int n;
  srand (time(0)); 
  string array_value[size_array_value] = { "6", "7", "8", "9", "10", "Король", "Дама", "Валет", "Туз" };  //эти значиение функция rand тасует между собой
  string array_suit[4]={"черви","пика","бубна","крести"};  //функция rand тасеут масти
  
  cout << "Введите количество игроков(не больше 6): ";
  cin >> n;
  if(n<=6 )  {
     cout << "Игроков в игре: " << n << "\n";
  

  for(int i = 0; i < n; i++){
    for(int i = 0; i < 6; i++){           //цикл для раздачи 6 карт каждому игроку
      cout << ' ' << array_value[rand() % size_array_value] << ' ' << array_suit[rand() % 4] << endl;
    }
    cout<<endl;}
    }
  else if(n>6){
    cout<<"Вы ввели неверное число (количество игроков должно быть не больше 6)!"<<endl;
  }
 
system("pause");
return 0;
}
