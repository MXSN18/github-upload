#include <iostream>
using namespace std;

int main()
{
    char choice;
    for(;;){
    do{
    cout << "Hilfe fuer:\n";
    cout << "   1. if\n";
    cout << "   2. switch\n";
    cout << "   3. for\n";
    cout << "   4. while\n";
    cout << "   5. do while\n";
    cout << "   6. break\n";
    cout << "   7. continue\n";
    cout << "   8. goto\n";
    cout << "Waehlen sie eine Anweisung!(q, um abzubrechen):";
    cin >> choice;
    } while(choice < '1' || choice > '8' && choice != 'q');
    if(choice == 'q') break;
    cout << "\n\n";
    switch(choice)
    {
        case '1' : 
        cout << "Die Anweisung if:\n\n";
        cout << "if(Bedingung) Anweisung\n";
        cout << "else() Anweisung\n";
        break;
        case '2' :
        cout << "Die Anweisung switch:\n\n";
        cout << "switch(Ausdruck){\n";
        cout << "   case Konstante:\n";
        cout << "       Anweisungsfolge\n";
        cout << "   break;\n";
        cout << "// ...\n";
        cout << "}\n";
        break;
        case '3' :
        cout << "Die for-Schleife:\n";
        cout << "for(Initialsierung; Bedingung, Iteration){\n";
        cout << "   Anweisung;\n";
        cout << "}\n";
        break;
        case '4' :
        cout << "Die while-Schleife:\n";
        cout << "while(Bedingung){\n";
        cout << "   Anweisung;\n";
        cout << "}\n";
        break;
        case '5' :
        cout << "Die do-while-Schleife:\n";
        cout << "do{\n";
        cout << "// Anweisung\n";
        cout << "// ...\n";
        cout << "} while(Bedingung);\n";
        break;
        case '6' :
        cout << "Die break-Anweisung:\n";
        cout << "break;\n";
        break;
        case '7' :
        cout << "Die continue-Anweisung:\n";
        cout << "continue;\n";
        break;
        case '8' :
        cout << "Die goto-Anweisung:\n";
        cout << "goto label;\n"; 
        break;
    }
    cout << "\n";
    }
    return 0;
}