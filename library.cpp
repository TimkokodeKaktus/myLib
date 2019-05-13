#include <limits>
#include <iostream>
#include "library.h"


void Library::LibRun()
{
	int navigate;
    ////////////////////////////////////////////////////////////////////
    
	menu->menu_start();
					
	std::cin >> navigate;
	std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	switch (navigate) {
		case 1: {
			ChangeReader();
			break;
		}
		case 2:{
			AddReader();
			ID = getReaderID();
			break;
		}
		case 3:{
			ShowAllReaders();
			menu->menu_start_3();
			
			std::cin >> navigate;
			switch(navigate){
				case 1:{
					ChangeReader();
					break;
				}
				case 2:{
					AddReader();
					ID = getReaderID();
					break;
				}
			}
			break;
		}
	}
	
	////////////////////////////////////////////////////////////////////	

	BackToMainMenu();
	
	bool run = true;
	while (run) {
		run = false;
		
		std::cin >> navigate;
		std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		switch (navigate) {
		case 1: {
			menu->title_1();
			ShowAllBooks();
			menu->menu_1();
			
			std::cin >> navigate;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			switch (navigate) {
			case 1: {std::cout << "Search not released." << std::endl; BackToMainMenu(); run = true; break; }
			case 2: {
				ShowBooksBorrowed();
				
				BackToMainMenu();
				run = true;
				break;
			}
			case 3: {
				ShowBooksInStock();
				
				BackToMainMenu();
				run = true;
				break;
			}
			case 4: {
				AddBook();
				
				BackToMainMenu();
				run = true;
				break;
			}
			case 0: {BackToMainMenu(); run = true; break; }
			case 911: {menu->help_911(); BackToMainMenu(); run = true; break; }
			default: {menu->default_case(); BackToMainMenu(); run = true; break; }
			}
			break;
		}
		case 2: {
			menu->title_2();
			ShowBooksInStock();
			menu->menu_2();
			
			std::cin >> navigate;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			switch (navigate) {
			case 1: {std::cout << "Search book in stock not released."; BackToMainMenu(); run = true; break; }
			case 2: {
				AddBookToReader();
								
				BackToMainMenu();
				run = true; break;
		    }
			case 0: {BackToMainMenu(); run = true; break; }
			case 911: {menu->help_911(); BackToMainMenu(); run = true; break; }
			default: {menu->default_case(); BackToMainMenu(); run = true; break; }
			}
			break;
		}
		
		/////////////////////////not released//////////////////////////////
		case 3: {
			menu->menu_3();
			std::cin >> navigate;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			switch (navigate) {
			case 1: {std::cout << "Search book not released."; BackToMainMenu(); run = true; break; }
			case 911: {menu->help_911(); BackToMainMenu(); run = true; break; }
			case 0: {BackToMainMenu(); run = true; break; }
			default: {menu->default_case(); BackToMainMenu(); run = true; break; }
			}
			break;
		}
		/////////////////////////not released//////////////////////////////
		
		case 4: {
			menu->menu_4();
			std::cin >> navigate;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			switch (navigate) {
			case 1: {	
				AddReader();
				ID = getReaderID();
				
            	BackToMainMenu();
            	run = true;
            	break;
            }
			case 911: {menu->help_911(); BackToMainMenu(); run = true; break; }
			case 0: {BackToMainMenu(); run = true; break; }
			default: {menu->default_case(); BackToMainMenu(); run = true; break; }
			}
			break;
		}
		case 5: {
			menu->title_5();
			ShowAllReaders();
			menu->menu_5();
			
			std::cin >> navigate;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			switch (navigate) {
			case 1: {
				ChangeReader();
				
				BackToMainMenu();
				run = true;
				break; 
			}
			case 2: {
				ChangeReader();
				
				menu->menu_5_1();
				
				std::cin >> navigate;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				switch (navigate) {
				case 1: {
					ShowBooksInStock();
					AddBookToReader();
										
					BackToMainMenu();
					run = true;
					break; 
				}
				case 2: {
					TakeBookFromReader();
						
					BackToMainMenu();
					run = true;
					break;
				}
				case 911: {menu->help_911(); BackToMainMenu(); run = true; break; }
				case 0: {BackToMainMenu(); run = true; break; }
				default: {menu->default_case(); BackToMainMenu(); run = true; break; }
				}
				break;
			}
			case 911: {menu->help_911(); BackToMainMenu(); run = true; break; }
			case 0: {BackToMainMenu(); run = true; break; }
			default: {menu->default_case(); BackToMainMenu(); run = true; break; }
			}
			break;
		}
		
		///////////////////////////not released///////////////////////////
		case 6: {
			//search_readers();
			std::cout << "Sorry, search is not released.";
			menu->menu_6();
			std::cin >> navigate;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			switch (navigate) {
			case 1: {std::cout << "Book from readers"; menu->menu_main(); run = true; break; }
			case 2: {std::cout << "Take book<-reader"; menu->menu_main(); run = true; break; }
			case 3: {std::cout << "Give book->reader"; menu->menu_main(); run = true; break; }
			case 0: {BackToMainMenu(); run = true; break; }
			case 911: {menu->help_911(); BackToMainMenu(); run = true; break; }
			default: {menu->default_case(); BackToMainMenu(); run = true; break; }
			}
			break;
		}
		//////////////////////////////////////////////////////////////////
		
		case 7: {
			menu->title_7();			
			ShowBooksBorrowed();
			
			menu->menu_7();
			
			std::cin >> navigate;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			switch (navigate) {
			case 1: {
				TakeBookFromReader();
					
				BackToMainMenu();
				run = true;					
				break;
			}
			case 2: {
				ShowAllReaders();
				ChangeReader();
				TakeBookFromReader();
				
				BackToMainMenu();
				run = true;					
				break;
			}
			case 0: {BackToMainMenu(); run = true; break; }
			case 911: {menu->help_911(); BackToMainMenu(); run = true; break; }
			default: {menu->default_case(); BackToMainMenu(); run = true; break; }
			}
			break;
		}
		case 8: {
			menu->menu_8();
			
			std::cin >> navigate;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			switch (navigate) {
			case 1:{
				AddBook();
				
				BackToMainMenu();
				run = true;
				break;
			}
           	case 0: {BackToMainMenu(); run = true; break; }
			case 911: {menu->help_911(); BackToMainMenu(); run = true; break; }
			default: {menu->default_case(); BackToMainMenu(); run = true; break; }
			}
		}
		case 9: {
			menu->menu_9();
			
			ShowAllOrders();
			
			BackToMainMenu();
			run = true;
			break;
		}
		case 0: {BackToMainMenu(); run = true; break; }
		case 999: {break;}
		case 911: {menu->help_911(); BackToMainMenu(); run = true; break; }
		default: {BackToMainMenu(); run = true; break;}
		}
	}
}

void Library::BackToMainMenu() {
	currentUser();
	menu->menu_main();
} 

void Library::ShowAllReaders() {
	personstore->showAll();
}

void Library::currentUser() {
	std::cout << std::endl << "User ID:" << ID+1 << ": ";
	personstore->showUserName(ID);
}

void Library::ShowAllBooks() {
	itemstore->showAll();
}

void Library::ShowBooksBorrowed() {
	orderstore->showAllBookBorrow(itemstore, personstore);
}

void Library::ShowBooksInStock() {
	itemstore->showAllInStock();
}

void Library::AddBook() {
	std::cout << "----------------------------" << std::endl;
	std::cout<<"Title: ";
	std::cin>>title;
	std::cout<<"Autor name: ";
	std::cin>>a_name;
	std::cout<<"Autor surname: ";
	std::cin>>a_sname;
	itemstore->addBook(title, a_name, a_sname, 1);
}

void Library::AddReader(){
	std::cout<<"Enter name: ";
	std::cin>>a_name;
	std::cout<<"Enter surname: ";
	std::cin>>a_sname;
	personstore->addUser(a_name, a_sname);
}

void Library::ChangeReader() {
	std::cout<<"Enter user ID:";
	std::cin>>ID;
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	ID = ID-1;
}

void Library::AddBookToReader(){
	std::cout<<"------------------------"<<std::endl;
	while(true)	{
		std::cout<<"ID book to add: ";
		std::cin>>isbn;
		if(isbn>0 && isbn<=itemstore->getCount())
			break;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        itemstore->showAll();
		std::cout<<"----------------------"<<std::endl;
		}
		if(itemstore->getStatus(isbn-1)) // check is book's status is available
		{
			orderstore->addOrder(ID,isbn-1,0);
			itemstore->changeStatus(isbn-1);
		}
		else
			std::cout<<"Sorry, this book is unavailable"<<std::endl;
}

void Library::TakeBookFromReader(){
	orderstore->showUserOrders(itemstore, personstore, ID);
	while(true)	{
		std::cout << std::endl << "Choose book to return" << std::endl;
		std::cin >> isbn;
		if(isbn > 0)
			break;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		if(orderstore->endOrder(itemstore, ID, isbn))
			std::cout << "Book returned" << std::endl;
		else
			std::cout << "Error: Wrong book ID" << std::endl;
}

void Library::ShowAllOrders() {
	orderstore->showAll(itemstore, personstore);
}

int Library::getReaderID() {
	return (personstore->getCount())-1;
}

int Library::getBookID() {
	return (itemstore->getCount())-1;
}

Library::Library()
	:orderstore(new Orderstore())
    ,itemstore(new Itemstore())
    ,personstore(new Personstore())
    ,file(new Readfile(personstore))
{
	file->readBooks(itemstore);
	file->readUsers(personstore);
	file->readOrders(orderstore);
}

Library::~Library()
{
    orderstore->saveOrderstore();
    itemstore->saveItemstore();
    personstore->savePersonstore();

    delete file;
}

