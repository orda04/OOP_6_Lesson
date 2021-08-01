#include <iostream>
using namespace std;

inline std::ostream & endll( std::ostream & os )
   {

   os.put( os.widen('\n') ); // http://en.cppreference.com/w/cpp/io/manip/endl
   os.put('1');
   os.put( os.widen('\n') );
   os.put('2');
   os.flush();//чистим буфер
   return os;
   }



int main()
{
    int iChoise= 0;//переменная отвечающая за ввод пользователя
    bool bWork = true;//флаг продолжения работы алгоритма
    while( bWork )
    {

        cout<<"\tВведите целое число: "<<endl;

       if(!(cin>>iChoise) || cin.get() != '\n')
        {
            cout<<"Incorrect input!"<<endl;
            cin.clear(); // сбрасывает все биты потока, тоесть поток становится "хорошим"
            cin.ignore(9999, '\n');// без этой штуки вообще работать не хочет бесконечный цикл получается
            cin.sync();//Удалим данные из буффера
        }

       bWork=false;

    }

    cout<<"\n\n\n\n\tSecond part of lesson 6 with endl trick\n";
    cout<<"Using manual endl with name endll  every enter will be noun by digits"<<endll;
    return 0;
}
