#include "Parser.h"

class DB:public Parser{
protected:
    vector <pair<int, int>> answer;//здесь запишем итоговый ответ, т.е. какая вершина 
                                   //будет какого цвета
    vector <int> colour; //вектор доступных цветов
public:
    DB (ifstream &f_in);
    void writting();
    void function();
};