#include <bits/stdc++.h>

using namespace std;

class Card {
private:
    string nameBook;
    string nameAuthor;
    int numberBook;

public:
    Card();
    Card(string nameBook, string nameAuthor, int numberBook);
    void display();
    int getNumBook();
    static void sortCards(vector<Card>& cards);
};

Card::Card(){}
Card::Card(string nameBook, string nameAuthor, int numberBook) {
    this->nameBook = nameBook;
    this->nameAuthor = nameAuthor;
    this->numberBook = numberBook;
}

void Card::display() {
    cout << "Name Book: " << nameBook << endl;
    cout << "Name Author: " << nameAuthor << endl;
    cout << "Number Book: " << numberBook << endl;
}

int Card::getNumBook() {
    return numberBook;
}

static void Card::sortCards(vector<Card>& cards) {
    for (int i = 0; i < cards.size() - 1; i++){
            for(int j = i + 1; j < cards.size(); j++){
                if(cards[i].getNumBook() > cards[j].getNumBook()){
                    swap(cards[i], cards[j]);
                }
            }    
        }   
}
int main(){
    
}