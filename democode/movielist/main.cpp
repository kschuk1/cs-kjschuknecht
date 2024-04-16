#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

#include "HDDB.h"

const int MAXDB = 100;

struct disc {
    char* title;
    char* director;
    int year;
    int runtime;
    char* genre;
    char* pic;
};

typedef disc* discPtr;
discPtr DB[MAXDB];
bool selected[MAXDB];
int numDB;

//**
// * Generates HTML output for the selected movies.
 //*//
void HTMLGen() {
    char fname[256];
    ofstream ofs;
    cout << "Output file name: ";
    cin.getline(fname,255,'\n');
    ofs.open(fname);
    if (!ofs.is_open()) {
        cerr << "Could not open output file " << fname << endl;
        exit(1);
    }

    // Generate HTML header
    ofs << "<html>" << endl;
    ofs << "<head>" << endl;
    ofs << "<title>Movie Database</title>" << endl;
    ofs << "</head>" << endl;
    ofs << "<body>" << endl;

    // Generate HTML content
    for (int i=0; i<numDB; i++) {
        if (selected[i]) {
            ofs << "<h2>" << DB[i]->title << "</h2>" << endl;
            ofs << "<p>Year: " << DB[i]->year << "</p>" << endl;
            ofs << "<p>Genre: " << DB[i]->genre << "</p>" << endl;
            ofs << "<p>Runtime: " << DB[i]->runtime << "</p>" << endl;
            ofs << "<p>Director: " << DB[i]->director << "</p>" << endl;
            ofs << "<img src=\"" << DB[i]->pic << "\" />" << endl;
        }
    }

    // Generate HTML tail
    ofs << "</body>" << endl;
    ofs << "</html>" << endl;
    ofs.close();
}

/**
 * Filters the movies by year.
 */
void YearFilter() {
    int year;
    cout << "Please specify the year: ";
    cin >> year;
    cin.ignore(100, '\n');

    for (int i=0; i<MAXDB; i++) {
        selected[i] = (DB[i]->year == year);
    }
    HTMLGen();
}

/**
 * Filters the movies by genre.
 */
void GenreFilter() {
    string genre;
    cout << "Please specify the genre: ";
    getline(cin, genre);

    for (int i=0; i<MAXDB; i++) {
        selected[i] = (DB[i]->genre == genre);
    }
    HTMLGen();
}

/**
 * Filters the movies by runtime.
 */
void TimeFilter() {
    int max;
    cout << "Please specify the max time length: ";
    cin >> max;
    cin.ignore(100, '\n');

    for (int i=0; i<MAXDB; i++) {
        selected[i] = (DB[i]->runtime < max);
    }
    HTMLGen();
}

/**
 * Displays all movies.
 */
void DisplayAll() {
    for (int i=0; i<numDB; i++) {
        selected[i] = true;
    }
    HTMLGen();
}

/**
 * Loads the movie database from a file.
 */
void LoadDB() {
    ifstream ifs;
    char fname[128], temp[256], ch;
    cout << "Database file name please: ";
    cin.getline(fname, 128, '\n');
    ifs.open(fname);
    if (!ifs.is_open()) {
        cerr << "Could not open or find the file you specified " << fname << endl;
        exit(1);
    }

    numDB = 0;
    ifs.getline(temp, 255, '\n');
    while (!ifs.eof()) {
        DB[numDB] = new disc;
        DB[numDB]->title = new char[strlen(temp)+1];
        strcpy(DB[numDB]->title, temp);
        ifs >> DB[numDB]->year;
        ifs >> temp;
        DB[numDB]->genre = new char[strlen(temp)+1];
        strcpy(DB[numDB]->genre, temp);
        ifs >> DB[numDB]->runtime;
        ifs >> temp;
        DB[numDB]->pic = new char[strlen(temp)+1];
        strcpy(DB[numDB]->pic, temp);
        do {
            ifs >> ch;
        } while (isspace(ch));
        ifs.getline(temp, 255, '\n');
        DB[numDB]->director = new char[strlen(temp)+1];
        strcpy(DB[numDB]->director, temp);
        numDB++;
        ifs.getline(temp, 255, '\n');
    }
}

/**
 * Clears the movie database.
 */
void ClearDB() {
    for (int i=0; i<numDB; i++) {
        delete[] DB[i]->title;
        delete[] DB[i]->director;
        delete[] DB[i]->genre;
        delete[] DB[i]->pic;
        delete DB[i];
    }
    numDB = 0;
}
