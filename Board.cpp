#include "Board.hpp"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

namespace ariel{

ariel::Board::Board(){
    board.push_back(vector<char>(1,'_'));
}
    
ariel::Board::~Board(){}
    
/*
void set_size(Board& b, unsigned int row,unsigned int column,ariel::Direction dir, size_t str_len){
    unsigned int row_size = b.board.size();
    unsigned int col_size = b.board.at(0).size();
    unsigned int new_col= column;
    unsigned int new_row= row;

    if(dir==ariel::Direction::Horizontal)
        { new_col +=str_len;}
    else
        { new_row +=str_len;}

    if(new_col > col_size ){  
         for(size_t i=0;i<row_size;i++){
            *b::board[i].insert( *b->board[i].end(),new_col,'_');
        }
        
        
        for(auto temp : b::board){
            auto it= temp.end();
            .insert(it,new_col,'_');

        }
        //ariel::Board::set_col(new_col);
    }
    if( new_row >row_size){
        for(size_t i=row_size;i<new_row;i++){
            *b->board.push_back(vector<char>temp (max(new_col,col_size),'_'));
        }
        //ariel::Board::set_row(new_row);
    }
}
*/
 void ariel::Board::post(unsigned int row,unsigned int column,ariel::Direction dir, string const &str){
    //set_size(row,column,dir,strlen(str))
    size_t str_len = str.length()-1;
    unsigned int row_size = board.size();
    unsigned int col_size = board.at(0).size();
    unsigned int new_col= column;
    unsigned int new_row= row;
    cout<<row_size<<" - "<<col_size<< " - "<<new_row<< " - "<<new_col <<endl;
    
    if(dir==ariel::Direction::Horizontal)
        { new_col +=str_len;}
    else
        { new_row +=str_len;}
    
    cout<<row_size<<" - "<<col_size<< " - "<<new_row<< " - "<<new_col <<endl;

    if(new_col > col_size ){  
         for(size_t i=0;i<row_size;i++){
            cout<<"44";
            board[i].insert( board[i].end(),new_col-col_size+1,'_');
/*
             for(size_t j=col_size;j<new_col; j++){
                cout<<"33"<<endl;
                board[i].push_back('_');
                this->show();
                }*/
            }
        cout<<"444";
        col_size=new_col;
        /* for(auto temp : b::board){
            auto it= temp.end();
            .insert(it,new_col,'_');

        }*/
    }
    cout<<"1";
    if( new_row >row_size){
        for(size_t i=row_size;i<new_row;i++){
            board.push_back(vector<char> (max(new_col+1,col_size),'_'));
        }
    }
    cout<<"2";
    for(size_t i =0; i<= str_len; i++){
        if(dir==ariel::Direction::Horizontal){
            board[row][column+i]=str[i];
        }else{
            board[row+i][column]= str[i];
            
        }
    }
 }

string ariel::Board::read(unsigned int row,unsigned int column,ariel::Direction dir,unsigned int len){
    unsigned int row_size = ariel::Board::board.size();
    unsigned int col_size = ariel::Board::board[0].size();
    string answer= "";
    for(size_t i =0; i<len; i++){
        if(dir==ariel::Direction::Horizontal){
            if((column+i) > col_size)
                {answer+= '_';}
            else
                {answer+= board[row][column+i];}
        }
        else{
            if((row+i) > row_size)
                {answer+= '_';}
            else
                {answer+= board[row+i][column];}
        }
    }
    return answer;
}

void ariel::Board::show(){
    for(size_t i=0;i<board.size();i++){        
        for(size_t j=0;j<board[0].size();j++){
            cout<< board[i][j];

        }
        cout<< endl;
    }
}

}

