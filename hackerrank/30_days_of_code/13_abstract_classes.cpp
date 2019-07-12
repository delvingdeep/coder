#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

/* --------------------------- Driver code : 1 ---------------------------------------- */
class Book
{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};

/* ----------------------------------- Solution code ------------------------------------ */
class MyBook : public Book
{
    //   Class Constructor
    //   
    //   Parameters:
    //   title - The book's title.
    //   author - The book's author.
    //   price - The book's price.
    //
    public: 
        int price;
        MyBook(string tle, string auth, int pr) : Book(tle, auth), price(pr) {}
    
    
        //   Function Name: display
        //   Print the title, author, and price in the specified format.
        //
        void display() {
            cout << "Title: " << this->title << endl;
            cout << "Author: " << this->author << endl;
            cout << "Price: " << this->price << endl;
        }
    
// End class
};


/* ------------------------------ Driver Code : 2 ----------------------------------- */
int main() {
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}
