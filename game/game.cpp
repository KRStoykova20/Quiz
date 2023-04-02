#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Define an array of questions and answers
    string questions[10] = {"Koq ot reakciite e okislitelno-redukcionna?",
                           "Koe ot tvurdeniqta NE e vqrno?",
                           "Koq e stepenta okislenie na elemnta O v suedinenieto  K2Cr2O7?",
                           "Pri okislitelno-redukcionni procesi reduktorite: " ,
                            "Pri elektroliza katodut e?"
                            "V populaciite broqt na individite se opredelq kato?",
                            "Vsichki organizmi v edno ezero obrazuvat? "
                            "Ako edna edna gora bude izsechena, to prez sledvashtite godini na tova mqsto shte se..?"
                            "Koi procesi sa harakterni za biosferata kato makrosistema?"
                            "Kum koq kroq grupa ekologicni faktori sa otnasqt vazduhat i vodata?"
    };
    string answers[10][10] = { {" (A) HCl + KOH -> KCl + H2O\n","(B) CaCO3 -> CaO + CO2\n","(C) Cl2 + H2O -> HCl + HClO\n","(D) H + OH -> H2O\n"},
                             {" (A) metalite imat polozhitelna stepen na okislenie\n", "(B) prostite veshtestvata imat nuleva stepen na okislenie\n", "(C) v peroksidite kislorodat e ot -1 stepen na okislenie\n", "(D) stepenta na okislenie na barii Ba w suedineniqta mu e -2\n"},
                             {" (A) +2\n", "(B) -2\n", "(C) +6\n "," (D) -6\n"},
                                {" (A) ponizhavat aktivnosta si\n", " (B) otdavat elektroni\n", " (C) priemat elektroni\n ", " (D) se reducirat\n"},
                                {" (A) polozhitelno zaredeniqt elektrod\n", " (B) otricatelno zaredeniqt elektrod\n", " (C) elektroneutralniq elektrod\n ", " (D) otricatelniq anod\n"},
                                {" (A) razhdaemost\n", " (B) smurtnost\n", " (C) plustnost\n ", " (D) chislenost\n"},
                                {" (A) populaciq\n", " (B) biocenoza\n", " (C) biotop\n ", " (D) ekosistema\n"},
                                 {" (A) osushtestvi purvichna sukcesiq\n", " (B) osushtestvi vtorichna sukcesiq\n", " (C) obosobi pustinna oblast\n ", " (D) uvelichi azotut vuv vazduha\n"},
                                   {" (A) hranene i dishane\n", " (B) rastezh i razmnozhavane\n", " (C) dvizhenie i migrirane\n ", " (D) krugovrat na veshtestva i potok i energiq\n"},
                                    {" (A) antropogenni\n", " (B) abiotichni\n", " (C) biotichni\n ", " (D) biogenni\n"}
};
    int correct[10] = { 1, 2, 3, 1, 3, 1, 6 ,6, 5, 2};

    // Ask each question and get the user's answer
    for (int i = 0; i < 9; i++) {
        cout << questions[i] << endl;
        for (int j = 0; j < 3; j++) {
            cout << answers[i][j] << " ";
        }
        cout << endl << "Enter your answer (A, B, C, or D): ";
        char choice;
        cin >> choice;

        // Check if the user's answer is correct
        if (choice == 'C' || choice == 'c') {
            if (correct[i] == 1) {
                cout << "Correct!" << endl;
            }
            else {
                cout << "Incorrect." << endl;
            }
        }
        else if (choice == 'D' || choice == 'd') {
            if (correct[i] == 2) {
                cout << "Correct!" << endl;
            }
            else {
                cout << "Incorrect." << endl;
            }
        }
        else if (choice == 'A' || choice == 'a') {
            if (correct[i] == 3) {
                cout << "Correct!" << endl;
            }
            else {
                cout << "Incorrect." << endl;
            }
        }
        else if (choice == 'C' || choice == 'c') {
            if (correct[i] == 4) {
                cout << "Correct!" << endl;
            }
            else {
                cout << "Incorrect." << endl;
            }
        }
        else if (choice == 'A' || choice == 'a') {
            if (correct[i] == 5) {
                cout << "Correct!" << endl;
            }
            else {
                cout << "Incorrect." << endl;
            }
        }
        else if (choice == 'C' || choice == 'c') {
            if (correct[i] == 6) {
                cout << "Correct!" << endl;
            }
            else {
                cout << "Incorrect." << endl;
            }
        }
        else if (choice == 'B' || choice == 'b') {
            if (correct[i] == 7) {
                cout << "Correct!" << endl;
            }
            else {
                cout << "Incorrect." << endl;
            }
        }
        else if (choice == 'B' || choice == 'b') {
            if (correct[i] == 8) { 
                cout << "Correct!" << endl;
            }
            else {
                cout << "Incorrect." << endl;
            }
        }
        else if (choice == 'D' || choice == 'd') {
            if (correct[i] == 9) {
                cout << "Correct!" << endl;
            }
            else {
                cout << "Incorrect." << endl;
            }
        }
        else if (choice == 'B' || choice == 'b') {
            if (correct[i] == 10) {
                cout << "Correct!" << endl;
            }
            else {
                cout << "Incorrect." << endl;
            }
        }
        else {
            cout << "Invalid choice." << endl;
        }

    }

    return 0;
}
