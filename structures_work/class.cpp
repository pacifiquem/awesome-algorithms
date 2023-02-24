#include <bits/stdc++.h>

using namespace std;


class Book {
	
	private string author;
	private int price;
	
	Book(string author, int price) {
		this->author = author;
		this->price = price;
	}
	
	
	
	public void getBook() {
		cout << "Book author: " << this.author << "Book price" << this.price;
	}
	
};

int main() {
	
	Book book1 = new Book("pacifiquem", 5000);
	book1->getBook();
	
	return 0;
	
}