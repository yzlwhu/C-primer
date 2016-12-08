#include <iostream>
#include <string.h>
using namespace std;

class BookItem {
    private:
	string isbn = "";
	int sold_num = 0;
	float price = 0;
    public:
	bool same_isbn (BookItem &book);
	BookItem & operator+ (BookItem &book);
	BookItem & operator>> (BookItem &book);
	void operator<< (BookItem &book);
	BookItem & operator= (BookItem &book);
};

bool BookItem::same_isbn (BookItem &book)
{
    if (book == NULL)
    {
        cout << "book is null!" << endl;
	return false;
    } else {
        if (this->isbn == book.isbn)
	{
	    return true;
	} else {
	    return false;
	}
    }
}

BookItem BookItem::operator= (BookItem &book)
{
    this->isbn = book.isbn;
    this->sold_num = book.sold_num;
    this->price = book.price;
    return *this;
}

BookItem BookItem::operator+ (BookItem &book)
{
    bool flag = same_isbn (book);
    if (flag)
    {
	this->isbn = book.isbn;
	this->sold_num = this->sold_num + book.sold_num;
	this->price = (this->price * this->sold_num + book.price * book.sold_num) * 1.0 / this->sold_num;
	return *this;
    } else {
	cout << " two book is different kind!" << endl;
	return NULL;
    }
}

BookItem BookItem::operator>> (BookItem &book)
{
    string newIsbn;
    int newSold_num;
    fload newPrice;
    cin >> newIsbn >> newSold_num >> newPrice;
    book.isbn = newIsbn;
    book.sold_num = newSold_num;
    book.price = newPrice;
    return book;
}

void BookItem::operator<< (BookItem &book)
{
    cout << book.isbn << " " << book.sold_num << " " << (book.sold_num * book.price) << " " << book.price << endl;
    return;
}
