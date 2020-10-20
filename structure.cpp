#include<iostream>
#include<cstring>

using namespace std;

struct Books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};
int main()
{
    struct Books book1, book2;
    strcpy(book1.title, "Hash");
    strcpy(book1.author, "Tijaksu");
    strcpy(book1.subject, "CSE");
    book1.book_id=52416;

    cout<<book1.title<<endl;
}
