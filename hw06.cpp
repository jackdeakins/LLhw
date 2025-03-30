#include "hw06.h"

int main(){
  int selection;
  bool quit = false;
  BookList *list = nullptr;
  BookEntry *entry = nullptr;

  do{
    selection = menu();
    populateList(list);
  
  
    switch (selection){
      case 1: 
        addRecord(list);
        break;
      /*case 2:
        deleteRecord();
        break;
      case 3:
        displayRecord();
        break;
      case 4:
        displayRecords();
        break;*/
      case 5:
        quit = saveExit(list);
        break;
    }
  }while(!quit);
  return 0;
}
