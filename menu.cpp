#include <iostream>
#include "menu.h"

Menu::Menu()
{
}

Menu::~Menu()
{
}

void Menu::help_911() {	
	std::cout << std::endl << "Help is here! mutxer fusker11" << std::endl;
	std::cout << "- - - - - - - - - - - - - - - -" << std::endl
		<< '"' << "myLibrary" << '"' << " versoin 0.3.2(beta)" << std::endl
		<< std::endl
		<< "!!! Search not released !!!" << std::endl << std::endl
		<< "    If you choise incorrect reader ID, follow the next steps:"
		<< std::endl
		<< "0.Main menu -> 5.View our readers -> 1.Change current reader"
		<< std::endl
		<< "Book status: 1 - in library, 0 - borrowed" << std::endl
		<< "also readme.txt" << std::endl;
			
	std::cout << std::endl << "Student: Timon" << std::endl;
	std::cout << "- - - - - - - - - - - - - - - -" << std::endl;
	std::cout << "Press any key to continue.";
	std::cin.get();
	std::cin.clear();
}

void Menu::default_case() {
	std::cout << std::endl << "Intput error. Try agin.\a" << std::endl;
}

void Menu::menu_main() {
	//main menu
	std::cout << std::endl;
	std::cout << "- - - - - - Main Menu - - - - - - -" << std::endl
		<< "1.View all books in the library." << std::endl
		<< "2.View books in stock." << std::endl
		<< "3.Book search." << std::endl
		<< "4.Register in our library." << std::endl
		<< "5.View our readers." << std::endl
		<< "6.Reader search." << std::endl
		<< "7.View books that readers have." << std::endl
		<< "8.Donate a book to the library." << std::endl
		<< "9.Show orders history." << std::endl
		<< std::endl 
		<< "999.Exit" << std::endl
		<< "0.Main menu." << std::endl
		<< "-------------------------------------" << std::endl;
}
 
void Menu::menu_start() {
		std::cout << std::endl
		<< "Weclome to our libery!" << std::endl
		<< "-------------------------------------" << std::endl
		<< "Use numbers to navigate. (Help - 911)" << std::endl
		<< "-------------------------------------" << std::endl
		<< "1.Login with your ID." << std::endl
		<< "2.Create new ID." << std::endl
		<< "3.Show all our readers." << std::endl
		<< "-------------------------------------" << std::endl;
}

void Menu::menu_start_3(){
	std::cout << std::endl
	    << "-------------------------------------" << std::endl
		<< "1.Login with your ID." << std::endl
		<< "2.Create new ID." << std::endl
		<< "-------------------------------------" << std::endl;
}

void Menu::title_1() {
	std::cout << "-------------------------------------" << std::endl
	    << "        All books in library" << std::endl
	    << "-------------------------------------" << std::endl;
}

void Menu::menu_1() {
	// View all books in the library
	std::cout << std::endl;
	
	std::cout << "-------------------------------------" << std::endl
	    << "1.Book search." << std::endl
		<< "2.View books that readers have." << std::endl
		<< "3.View books in stock." << std::endl
		<< "4.Donate a book to the library." << std::endl
		<< "0.Back to main menu." << std::endl
		<< "-------------------------------------" << std::endl;
}

void Menu::title_2() {
	std::cout << std::endl
		<< "All books in stock:" << std::endl
		<< "-------------------------------------" << std::endl;
}

void Menu::menu_2() {
	// View all books in stock
	std::cout << std::endl
		<< "-------------------------------------" << std::endl
		<< "1.Book search in stock" << std::endl
		<< "2.Give the book to the reader" << std::endl
		<< "0.Back to main menu" << std::endl
		<< "-------------------------------------" << std::endl;
}

void Menu::menu_3() {
	// Search books
	std::cout << std::endl
		<< "Book search." << std::endl
		<< "-------------------------------------" << std::endl
		<< "1.Find a book." << std::endl
		<< "0.Back to main menu." << std::endl
		<< "-------------------------------------" << std::endl;
}

void Menu::menu_4() {
	// Register in our library.
	std::cout << std::endl
		<< "Register in our library." << std::endl
		<< "-------------------------------------" << std::endl
		<< "1.Regisration." << std::endl
		<< "0.Back to main menu." << std::endl
		<< "-------------------------------------" << std::endl;
}

void Menu::title_5() {
	std::cout << std::endl
		<< "View our readers:" << std::endl
		<< "-------------------------------------" << std::endl;
}

void Menu::menu_5() {
	// View our readers.
	std::cout << "-------------------------------------" << std::endl
		<< "1.Change current reader." << std::endl
		<< "2.Select reader to add or remove a book." << std::endl
		<< "0.Back to main menu." << std::endl
		<< "-------------------------------------" << std::endl;
}

void Menu::menu_5_1() {
	//action from readers
	std::cout << std::endl
		<< "-------------------------------------" << std::endl
		<< "1.Add book." << std::endl
		<< "2.Remove book." << std::endl
		<< "0.Back to main menu." << std::endl
		<< "-------------------------------------" << std::endl;
}

void Menu::menu_6() {
	// Reader search.
	std::cout << std::endl;

	std::cout << "-------------------------------------" << std::endl
		<< "1.Reader's books." << std::endl
		<< "2.Take the book from the reader." << std::endl
		<< "3.Give the book to the reader." << std::endl
		<< "0.Back to main menu." << std::endl
		<< "-------------------------------------" << std::endl;
}

void Menu::title_7() {
	// output of all books from readers
	std::cout << std::endl
		<< "-------------------------------------" << std::endl
		<< "          Books on readers:" << std::endl
		<< "-------------------------------------" << std::endl;
}

void Menu::menu_7() {
	// output of all books from readers
	std::cout << std::endl
		<< "-------------------------------------" << std::endl
		<< "1.Remove book from current user." << std::endl
		<< "2.Change reader and remove book." << std::endl
		<< "0.Main menu." << std::endl
		<< "-------------------------------------" << std::endl;
}

void Menu::menu_8() {
	// Donate a book
	std::cout << std::endl
		<< "-------------------------------------" << std::endl
		<< "1.Donate a book." << std::endl
		<< "0.Back to main menu." << std::endl
		<< "-------------------------------------" << std::endl;
}

void Menu::menu_9() {
	//order history
	std::cout << std::endl
		<< "-------------------------------------" << std::endl
		<< "           Orders history." << std::endl
		<< "-------------------------------------" << std::endl;
}
