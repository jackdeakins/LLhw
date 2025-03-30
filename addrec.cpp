#include "hw06.h"

void addRecord(BookList*& list){
  
  std::string isbn;
  std::string author;
  std::string title;
  std::string space;
  BookEntry *loop = new BookEntry;
  BookEntry *tmp = list->tail;
  BookEntry *first = list->head;
  
  std::ofstream fout("booksdb.txt", std::ios::app);

  cout << "Please enter book isbn: ";
  std::getline(cin, isbn);
  //std::cin.clear();
  //std::cin.ignore(1000, '\n');
  cout << "Please enter book author: ";
  std::getline(cin, author);
  //std::cin.clear();
  //std::cin.ignore(1000, '\n');
  cout << "Please enter book title: ";
  std::getline(cin, title);
  //std::cin.clear();
  //std::cin.ignore(1000, '\n');

  //populateList(list);

  if(list->head == nullptr){
    first = loop;
    list->head = first;
    list->tail = first;
    first->list = list;
    first->next = nullptr;
    first->previous = nullptr;
    first->book = new BookData;
    first->book->isbn = isbn;
    first->book->author = author;
    first->book->title = title;
    tmp = first;
    list->length++;
  }
  else{
    loop->list = list;
    list->tail = loop;
    tmp->next = loop;
    loop->next = nullptr;
    loop->previous = tmp;
    loop->book = new BookData;
    loop->book->isbn = isbn;
    loop->book->author = author;
    loop->book->title = title;
    list->length++;
  } 
  tmp = loop;

  fout << loop->book->isbn << "\n";
  fout << loop->book->author << "\n";
  fout << loop->book->title << "\n\n";

  fout.close();
}
