#include <iostream>
using namespace std;
class Book{
    string title;
    string author;
    float price;
    string publisher;
    int stockposition;
    public:
    void getdata(string t, string a, float p, string pub, int s)
    {
        title = t;
        author = a;
        price = p;
        publisher = pub;
        stockposition = s;
    }
    void display()
    {
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Publisher: "<<publisher<<endl;
        cout<<"Stock Position: "<<stockposition<<endl;
    }
    void search(string t, string a)
    {
        if (title == t && author == a)
        {
            cout << "Book is available."<<endl;
            cout<<"--------------------------------"<<endl;
            display();
            cout<<"--------------------------------"<<endl;
        }
        else
        {
            cout <<"Book not found."<<endl;
            cout<<"--------------------------------"<<endl;
        }
    }
    void purchase(int copies)
    {
        if (copies <= stockposition)
            cout << "Total cost = " << price * copies << endl;
        else
            cout << "Required copies not in stock." << endl;
    }
};
int main()
{
    Book b1;
    b1.getdata("The Merchant of Venice", "Willian Shakespeare", 150, "James Roberts", 5);
    b1.display();
    b1.search("The Merchant of Venice", "Willian Shakespeare");
    b1.purchase(3);
    return 0;
}
