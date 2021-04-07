#include <iostream>
#include "Board.hpp"
#include "Direction.hpp"


using namespace std;

int main(){
    ariel::Board b1;
    cout << b1.read(4,5,ariel::Direction::Horizontal,7)<< endl;
    b1.post(3,3,ariel::Direction::Vertical,"PPOP");
    cout<<endl<<b1.read(5,0,ariel::Direction::Horizontal,4)<<endl;
    b1.post(2,0,ariel::Direction::Horizontal,"hiEveryONE");
    b1.show();





    return 0;
}