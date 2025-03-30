#include "hw06.h"

int main(){
  int selection;
  bool quit = false;
  BookList *list = nullptr;
  BookEntry *entry = nullptr;

  populateList(list);
  do{
    selection = menu();
  
    switch (selection){
      case 1: 
        addRecord(list);
        break;
      case 2:
        deleteRecord(list);
        break;
      case 3:
        displayRecord(list);
        break;
      /*case 4:
        displayRecords();
        break;*/
      case 5:
        quit = saveExit(list);
        break;
    }
  }while(!quit);
  return 0;
}
