#include <iostream>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <ctime>
#include <chrono>
#include <thread>


using namespace std;
int main() {

    srand((unsigned) time(NULL));
    vector<string> names{};
    vector<string> membersUP{};
    string currentName{};

    int membersTotal{};

    cout << "How many Participants? \n";
    cin >> membersTotal;
    cout << "Enter their names: \n";
    for (int i{}; i < membersTotal; i++)
    {
        cin >> currentName;
        names.push_back(currentName);
        membersUP.push_back(currentName);
    }

    for (int i{}; i < membersTotal; i++)

    {
        int random =  (rand() % membersUP.size());






        cout << "\n";

        if (random != i)
        {
            ofstream outFile;
            outFile.open(names[i] + ".txt", ios::out );
            int j = 0;
            while (j < membersUP.size()) {
                cout << membersUP[j] << "\n";
                j++;
            }
            cout << membersUP.size() << "      ";
            outFile << membersUP[random] << "\n";
            cout << random << "\n";
            cout << "           " << membersUP[random] << "\n";
            outFile.close();
            membersUP.erase(membersUP.begin() + random);


        }
        else
        {
            --i;
            continue;

        }

    }





}
