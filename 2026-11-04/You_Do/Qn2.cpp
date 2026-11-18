#include<iostream>
int main(){
    int tot_books=250;
    int books_issued=63;
    int books_available=tot_books-books_issued;
    std::cout<<"books in the shelf: "<<books_available<<std::endl;
    return 0;
}   