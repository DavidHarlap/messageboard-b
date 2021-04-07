 #include <vector>
 #include <iostream>
 #include "Direction.hpp"


 using namespace std;
 
 namespace ariel{
    class Board{
        //private:
            vector<vector<char>> board;
           // unsigned int rownum=0;
           // unsigned int colnum=0;
        public:
            //vector<vector<char>> board;

            void post(unsigned int row,unsigned int column,ariel::Direction dir,string const &str);
            string read(unsigned int row,unsigned int column,ariel::Direction dir,unsigned int length);
            void show();

            Board();
            ~Board();
            /*vector<vector<char>>& get_board(){
                return board;
                }
            

            unsigned int get_rownum() {return rownum;}
            unsigned int get_colnum() {return colnum;}
            & set_row(unsigned int r){
                rownum = r;
                return this*;
            }
            Board& set_col(unsigned int c){
                colnum= c;
                return this*;
            }*/

    };
 }