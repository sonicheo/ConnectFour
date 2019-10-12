#include <iostream>

//I realized that I could have used arrays >.> Not going back now though
//Nvm have to use arrays
using namespace std;



//This is the gameboard
void gameBoard(int counter, string input, string* a, string* b, string* c, string* d,
	string* e, string* f, string* g) {
	int num = 0;

	cout << "    A   B   C   D   E   F   G" << "\n";
	for (int i = 0; i < 6; i++) {
		num++;
		cout << num << " | " << a[i] << " | " << b[i] << " | " << c[i] << " | " << d[i] << " | " << e[i] << " | " << f[i] << " | " << g[i] << " | " << "\n";
	}
}
//This checks for g
void gChecker(int counter, string* g) {
	string chip;
	if (counter == 1)
		chip = "Z";
	else if (counter == 2)
		chip = "T";
	for (int i = 5; i >= 0; i--) {
		if (g[i] == "O") {
			g[i] = chip;
			break;
		}
	}
}

void fChecker(int counter, string* f) {
	string chip;
	if (counter == 1)
		chip = "Z";
	else if (counter == 2)
		chip = "T";
	for (int i = 5; i >= 0; i--) {
		if (f[i] == "O") {
			f[i] = chip;
			break;
		}
	}
}

void eChecker(int counter, string* e) {
	string chip;
	if (counter == 1)
		chip = "Z";
	else if (counter == 2)
		chip = "T";
	for (int i = 5; i >= 0; i--) {
		if (e[i] == "O") {
			e[i] = chip;
			break;
		}
	}
}

void dChecker(int counter, string* d) {
	string chip;
	if (counter == 1)
		chip = "Z";
	else if (counter == 2)
		chip = "T";
	for (int i = 5; i >= 0; i--) {
		if (d[i] == "O") {
			d[i] = chip;
			break;
		}
	}
}


void cChecker(int counter, string* c) {
	string chip;
	if (counter == 1)
		chip = "Z";
	else if (counter == 2)
		chip = "T";
	for (int i = 5; i >= 0; i--) {
		if (c[i] == "O") {
			c[i] = chip;
			break;
		}
	}
}

void bChecker(int counter, string* b) {
	string chip;
	if (counter == 1)
		chip = "Z";
	else if (counter == 2)
		chip = "T";
	for (int i = 5; i >= 0; i--) {
		if (b[i] == "O") {
			b[i] = chip;
			break;
		}
	}
}

void aChecker(int counter, string* a) {
	string chip;
	if (counter == 1)
		chip = "Z";
	else if (counter == 2)
		chip = "T";
	for (int i = 5; i >= 0; i--) {
		if (a[i] == "O") {
			a[i] = chip;
			break;
		}	
	}
}

int playerCount(int counter)
{
	if (counter == 1) {
		cout << "Player 1: ";
		counter++;
	}
	else if (counter == 2) {
		cout << "Player 2: ";
		counter--;
	}
	return counter;
}



void mainGame(int counter, string input,string *a, string *b, string *c, string *d,
	string *e, string *f, string*g) {
	string brk;

	gameBoard(counter, input, a, b, c, d, e, f, g);
	playerCount(counter);

	while (true) {
		cin >> input;

		if (input == "A" || input == "a") {
			aChecker(counter, a);
			gameBoard(counter, input, a, b, c, d, e, f, g);
			counter = playerCount(counter);
		}
		else if (input == "B" || input == "b") {
			bChecker(counter, b);
			gameBoard(counter, input, a, b, c, d, e, f, g);
			counter = playerCount(counter);
		}
		else if (input == "C" || input == "c") {
			bChecker(counter, c);
			gameBoard(counter, input, a, b, c, d, e, f, g);
			counter = playerCount(counter);
		}
		else if (input == "D" || input == "d") {
			eChecker(counter, d);
			gameBoard(counter, input, a, b, c, d, e, f, g);
			counter = playerCount(counter);
		}
		else if (input == "E" || input == "e") {
			eChecker(counter, e);
			gameBoard(counter, input, a, b, c, d, e, f, g);
			counter = playerCount(counter);
		}
		else if (input == "F" || input == "f") {
			fChecker(counter, f);
			gameBoard(counter, input, a, b, c, d, e, f, g);
			counter = playerCount(counter);
		}
		else if (input == "G" || input == "g") {
			gChecker(counter, g);
			gameBoard(counter, input, a, b, c, d, e, f, g);
			counter = playerCount(counter);
		}
		else if (input == "exit" || input == "escape")
			break;
		else {
		cout << "Please input a letter to continue playing, or exit to leave the game \n";
		playerCount(counter);
	}
	}
}

int main()
{
	string appName, appAuthors, appVersion, brk, input;
	string a[] = { "O", "O", "O", "O", "O", "O" };
	string b[] = { "O", "O", "O", "O", "O", "O" };
	string c[] = { "O", "O", "O", "O", "O", "O" };
	string d[] = { "O", "O", "O", "O", "O", "O" };
	string e[] = { "O", "O", "O", "O", "O", "O" };
	string f[] = { "O", "O", "O", "O", "O", "O" };
	string g[] = { "O", "O", "O", "O", "O", "O" };
	int counter = 1;

	appName = "Connect Four";
	appAuthors = "Juan Gomez";
	appVersion = "1.0.0";

	cout << appName << ": Version " << appVersion << " by " << appAuthors << "\n \n ";

	mainGame(counter,input,a,b,c,d,e,f,g);
}