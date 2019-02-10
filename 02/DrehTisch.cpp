#include <string>
#include <iostream>

using namespace std;

int main(void)
{
    // variablen definition
    int start = 1;
    int ziel;
    int mengenAenderung = 0;
    bool valid = false;
    bool exit = false;
    int menge[8] =
        {
            10,
            10,
            10,
            10,
            10,
            10,
            10,
            10

        };

    while (exit == false)
    {

        // überprüfung der eingabe
        // wenn unter 0 odder über 8 valid = false
        // sonst valid = true und beendung der while schleife
        do
        {
            cout << "Aktuelle Position: " << start << endl;
            cout << "Gib ein Ziel ein! " << endl;
            cin >> ziel;

            if (ziel < 1 || ziel > 8)
            {
                cout << "Fehler,gib neu ein! " << endl;
            }
            else
            {
                valid = true;
            }

            cout << "Aenderung der Memge: "  << endl;
            cin >> mengenAenderung;

        } while (valid == false);

        // validirung reset
        valid == false;

        // hochzählen der positionen
        // nur in eine richtung
        // 1 -> 8
        // von 8 reset auf 1

        int s = start;
        int x = 0;
        do
        {
            // von 8 auf 1
            if (s > 8)
            {
                s = 1;
            }

            if (s < ziel)
            {
                cout << "Position: " << s +1 << endl;

                s++;
            }
            else if (s > ziel)
            {
                for (s; s < 9; s++)
                {
                    cout << "Position: " << s << endl;
                }
            }
            else
            {
                // speichern der neue startposition
                
                menge[s] = menge[s] + mengenAenderung;

                cout << "Menge der Position " << s << ": " << menge[s] << endl;

                start = ziel;
                x = 1;
            }

        } while (x == 0);

        x = 0;

        cout << "Noch einmal (j/n) ?";
        string ausstieg = "";
        cin >> ausstieg;
        if (ausstieg == "n" || ausstieg == "N")
        {
            exit = true;
        }
    }

    return 0;
}