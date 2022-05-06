#include <iostream>
#include <stdlib.h>
using namespace std;
void level2()//Dillon
{
    char maze2 [10*2][25*2]
    {
        {' ',' ',' ',49,' ',' ',' ',50,' ',' ',' ',51,' ',' ',' ',52,' ',' ',' ',53,' ',' ',' ',54,' ',' ',' ',55,' ',' ',' ',56,' ',' ',' ',57,' ',' ',' ',58},
        {' ',(char) 201,(char) 205,(char) 205,(char) 205,(char) 209,(char) 205,(char) 205,(char) 205,(char) 209,(char) 205,(char) 205,(char) 205,(char) 203,(char) 205,(char) 205,(char) 205,(char) 209,(char) 205,(char) 205,(char) 205,(char) 209,(char) 205,(char) 205,(char) 205,(char) 203,(char) 205,(char) 205,(char) 205,(char) 209,(char) 205,(char) 205,(char) 205,(char) 209,(char) 205,(char) 205,(char) 205,(char) 187},
        {65,(char) 186,' ',' ',' ',(char) 179,' ','7',' ',(char) 179,' ',' ',' ',(char) 186,' ',' ',' ',(char) 179,' ','3',' ',(char) 179,' ',' ',' ',(char) 186,' ',' ',' ',(char) 179,' ',' ',' ',(char) 179,' ','8',' ',(char) 186},
        {' ',(char) 199,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182},
        {66,(char) 186,' ',' ',' ',(char) 179,' ',' ',' ',(char) 179,' ','2',' ',(char) 186,' ',' ',' ',(char) 179,' ',' ',' ',(char) 179,' ',' ',' ',(char) 186,' ',' ',' ',(char) 179,' ','1',' ',(char) 179,' ','4',' ',(char) 186},
        {' ',(char) 199,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182},
        {67,(char) 186,' ','1',' ',(char) 179,' ',' ',' ',(char) 179,' ','8',' ',(char) 186,' ',' ',' ',(char) 179,' ',' ',' ',(char) 179,' ','4',' ',(char) 186,' ','7',' ',(char) 179,' ',' ',' ',(char) 179,' ',' ',' ',(char) 186},
        {' ',(char) 204,(char) 205,(char) 205,(char) 205,(char) 216,(char) 205,(char) 205,(char) 205,(char) 216,(char) 205,(char) 205,(char) 205,(char) 206,(char) 205,(char) 205,(char) 205,(char) 216,(char) 205,(char) 205,(char) 205,(char) 216,(char) 205,(char) 205,(char) 205,(char) 206,(char) 205,(char) 205,(char) 205,(char) 216,(char) 205,(char) 205,(char) 205,(char) 216,(char) 205,(char) 205,(char) 205,(char) 185},
        {68,(char) 186,' ',' ',' ',(char) 179,' ','8',' ',(char) 179,' ',' ',' ',(char) 186,' ',' ',' ',(char) 179,' ',' ',' ',(char) 179,' ','5',' ',(char) 186,' ',' ',' ',(char) 179,' ',' ',' ',(char) 179,' ',' ',' ',(char) 186},
        {' ',(char) 199,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182},
        {69,(char) 186,' ',' ',' ',(char) 179,' ',' ',' ',(char) 179,' ',' ',' ',(char) 186,' ','8',' ',(char) 179,' ','1',' ',(char) 179,' ','2',' ',(char) 186,' ','9',' ',(char) 179,' ',' ',' ',(char) 179,' ',' ',' ',(char) 186},
        {' ',(char) 199,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182},
        {70,(char) 186,' ',' ',' ',(char) 179,' ',' ',' ',(char) 179,' ',' ',' ',(char) 186,' ','4',' ',(char) 179,' ',' ',' ',(char) 179,' ',' ',' ',(char) 186,' ',' ',' ',(char) 179,' ','8',' ',(char) 179,' ',' ',' ',(char) 186},
        {' ',(char) 204,(char) 205,(char) 205,(char) 205,(char) 216,(char) 205,(char) 205,(char) 205,(char) 216,(char) 205,(char) 205,(char) 205,(char) 206,(char) 205,(char) 205,(char) 205,(char) 216,(char) 205,(char) 205,(char) 205,(char) 216,(char) 205,(char) 205,(char) 205,(char) 206,(char) 205,(char) 205,(char) 205,(char) 216,(char) 205,(char) 205,(char) 205,(char) 216,(char) 205,(char) 205,(char) 205,(char) 185},
        {71,(char) 186,' ',' ',' ',(char) 179,' ',' ',' ',(char) 179,' ','5',' ',(char) 186,' ','6',' ',(char) 179,' ',' ',' ',(char) 179,' ',' ',' ',(char) 186,' ','3',' ',(char) 179,' ',' ',' ',(char) 179,' ','9',' ',(char) 186},
        {' ',(char) 199,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182},
        {72,(char) 186,' ','7',' ',(char) 179,' ','2',' ',(char) 179,' ',' ',' ',(char) 186,' ',' ',' ',(char) 179,' ',' ',' ',(char) 179,' ',' ',' ',(char) 186,' ','6',' ',(char) 179,' ',' ',' ',(char) 179,' ',' ',' ',(char) 186},
        {' ',(char) 199,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182},
        {73,(char) 186,' ','6',' ',(char) 179,' ',' ',' ',(char) 179,' ',' ',' ',(char) 186,' ',' ',' ',(char) 179,' ','4',' ',(char) 179,' ',' ',' ',(char) 186,' ',' ',' ',(char) 179,' ','7',' ',(char) 179,' ',' ',' ',(char) 186},
        {' ',(char) 200,(char) 205,(char) 205,(char) 205,(char) 207,(char) 205,(char) 205,(char) 205,(char) 207,(char) 205,(char) 205,(char) 205,(char) 202,(char) 205,(char) 205,(char) 205,(char) 207,(char) 205,(char) 205,(char) 205,(char) 207,(char) 205,(char) 205,(char) 205,(char) 202,(char) 205,(char) 205,(char) 205,(char) 207,(char) 205,(char) 205,(char) 205,(char) 207,(char) 205,(char) 205,(char) 205,(char) 188},
};
for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
    cout << "Enter a number for the empty space going row by row from left to right." << endl;
    cin >> maze2 [2][3];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
    cin >> maze2 [2][11];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
       cin >> maze2 [2][15];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
       cin >> maze2 [2][23];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
       cin >> maze2 [2][27];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
       cin >> maze2 [2][31];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
        cin >> maze2 [4][3];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
        cin >> maze2 [4][7];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
        cin >> maze2 [4][15];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
        cin >> maze2 [4][19];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
        cin >> maze2 [4][23];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
        cin >> maze2 [4][27];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
        cin >> maze2 [6][7];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
        cin >> maze2 [6][15];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
        cin >> maze2 [6][19];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
        cin >> maze2 [6][31];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
        cin >> maze2 [6][35];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
        cin >> maze2 [8][3];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
        cin >> maze2 [8][11];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
        cin >> maze2 [8][15];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
        cin >> maze2 [8][19];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
        cin >> maze2 [8][27];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
        cin >> maze2 [8][31];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
        cin >> maze2 [8][35];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
        cin >> maze2 [10][3];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
        cin >> maze2 [10][7];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
      cin >> maze2 [10][11];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
      cin >> maze2 [10][31];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
      cin >> maze2 [10][35];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
      cin >> maze2 [12][3];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
      cin >> maze2 [12][7];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
      cin >> maze2 [12][11];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
      cin >> maze2 [12][19];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
      cin >> maze2 [12][23];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
      cin >> maze2 [12][27];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
      cin >> maze2 [12][35];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
    cin >> maze2 [14][3];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
    cin >> maze2 [14][7];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
    cin >> maze2 [14][19];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
    cin >> maze2 [14][23];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
    cin >> maze2 [14][31];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
    cin >> maze2 [16][11];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
    cin >> maze2 [16][15];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
    cin >> maze2 [16][19];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
    cin >> maze2 [16][23];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
    cin >> maze2 [16][31];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
    cin >> maze2 [16][35];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
    cin >> maze2 [18][7];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
    cin >> maze2 [18][11];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
    cin >> maze2 [18][15];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
    cin >> maze2 [18][23];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
    cin >> maze2 [18][27];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
    cin >> maze2 [18][35];
         system ("cls");
         for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
}
void level2ans()
{
    cout << " " << endl;
    cout << "Answer key: " << endl;
    cout << " " << endl;
    char maze2[2*10][2*25]
    {//Dillon
    {' ',' ',' ',49,' ',' ',' ',50,' ',' ',' ',51,' ',' ',' ',52,' ',' ',' ',53,' ',' ',' ',54,' ',' ',' ',55,' ',' ',' ',56,' ',' ',' ',57,' ',' ',' ',58},
        {' ',(char) 201,(char) 205,(char) 205,(char) 205,(char) 209,(char) 205,(char) 205,(char) 205,(char) 209,(char) 205,(char) 205,(char) 205,(char) 203,(char) 205,(char) 205,(char) 205,(char) 209,(char) 205,(char) 205,(char) 205,(char) 209,(char) 205,(char) 205,(char) 205,(char) 203,(char) 205,(char) 205,(char) 205,(char) 209,(char) 205,(char) 205,(char) 205,(char) 209,(char) 205,(char) 205,(char) 205,(char) 187},
        {65,(char) 186,' ','5',' ',(char) 179,' ','7',' ',(char) 179,' ','4',' ',(char) 186,' ','1',' ',(char) 179,' ','3',' ',(char) 179,' ','6',' ',(char) 186,' ','2',' ',(char) 179,' ','9',' ',(char) 179,' ','8',' ',(char) 186},
        {' ',(char) 199,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182},
        {66,(char) 186,' ','3',' ',(char) 179,' ','6',' ',(char) 179,' ','2',' ',(char) 186,' ','9',' ',(char) 179,' ','8',' ',(char) 179,' ','7',' ',(char) 186,' ','5',' ',(char) 179,' ','1',' ',(char) 179,' ','4',' ',(char) 186},
        {' ',(char) 199,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182},
        {67,(char) 186,' ','1',' ',(char) 179,' ','9',' ',(char) 179,' ','8',' ',(char) 186,' ','5',' ',(char) 179,' ','2',' ',(char) 179,' ','4',' ',(char) 186,' ','7',' ',(char) 179,' ','6',' ',(char) 179,' ','6',' ',(char) 186},
        {' ',(char) 204,(char) 205,(char) 205,(char) 205,(char) 216,(char) 205,(char) 205,(char) 205,(char) 216,(char) 205,(char) 205,(char) 205,(char) 206,(char) 205,(char) 205,(char) 205,(char) 216,(char) 205,(char) 205,(char) 205,(char) 216,(char) 205,(char) 205,(char) 205,(char) 206,(char) 205,(char) 205,(char) 205,(char) 216,(char) 205,(char) 205,(char) 205,(char) 216,(char) 205,(char) 205,(char) 205,(char) 185},
        {68,(char) 186,' ','9',' ',(char) 179,' ','8',' ',(char) 179,' ','1',' ',(char) 186,' ','7',' ',(char) 179,' ','6',' ',(char) 179,' ','5',' ',(char) 186,' ','4',' ',(char) 179,' ','3',' ',(char) 179,' ','3',' ',(char) 186},
        {' ',(char) 199,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182},
        {69,(char) 186,' ','4',' ',(char) 179,' ','3',' ',(char) 179,' ','7',' ',(char) 186,' ','8',' ',(char) 179,' ','1',' ',(char) 179,' ','2',' ',(char) 186,' ','9',' ',(char) 179,' ','5',' ',(char) 179,' ','5',' ',(char) 186},
        {' ',(char) 199,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182},
        {70,(char) 186,' ','2',' ',(char) 179,' ','5',' ',(char) 179,' ','6',' ',(char) 186,' ','4',' ',(char) 179,' ','9',' ',(char) 179,' ','3',' ',(char) 186,' ','1',' ',(char) 179,' ','8',' ',(char) 179,' ','8',' ',(char) 186},
        {' ',(char) 204,(char) 205,(char) 205,(char) 205,(char) 216,(char) 205,(char) 205,(char) 205,(char) 216,(char) 205,(char) 205,(char) 205,(char) 206,(char) 205,(char) 205,(char) 205,(char) 216,(char) 205,(char) 205,(char) 205,(char) 216,(char) 205,(char) 205,(char) 205,(char) 206,(char) 205,(char) 205,(char) 205,(char) 216,(char) 205,(char) 205,(char) 205,(char) 216,(char) 205,(char) 205,(char) 205,(char) 185},
        {71,(char) 186,' ','8',' ',(char) 179,' ','4',' ',(char) 179,' ','5',' ',(char) 186,' ','6',' ',(char) 179,' ','7',' ',(char) 179,' ','1',' ',(char) 186,' ','3',' ',(char) 179,' ','2',' ',(char) 179,' ','9',' ',(char) 186},
        {' ',(char) 199,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182},
        {72,(char) 186,' ','7',' ',(char) 179,' ','2',' ',(char) 179,' ','9',' ',(char) 186,' ','3',' ',(char) 179,' ','5',' ',(char) 179,' ','8',' ',(char) 186,' ','6',' ',(char) 179,' ','4',' ',(char) 179,' ','1',' ',(char) 186},
        {' ',(char) 199,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182},
        {73,(char) 186,' ','6',' ',(char) 179,' ','1',' ',(char) 179,' ','3',' ',(char) 186,' ','2',' ',(char) 179,' ','4',' ',(char) 179,' ','9',' ',(char) 186,' ','8',' ',(char) 179,' ','7',' ',(char) 179,' ','5',' ',(char) 186},
        {' ',(char) 200,(char) 205,(char) 205,(char) 205,(char) 207,(char) 205,(char) 205,(char) 205,(char) 207,(char) 205,(char) 205,(char) 205,(char) 202,(char) 205,(char) 205,(char) 205,(char) 207,(char) 205,(char) 205,(char) 205,(char) 207,(char) 205,(char) 205,(char) 205,(char) 202,(char) 205,(char) 205,(char) 205,(char) 207,(char) 205,(char) 205,(char) 205,(char) 207,(char) 205,(char) 205,(char) 205,(char) 188},
};
for (int i=0; i<20; i++)
    {
        for (int j=0; j<39; j++)
        {
            cout << maze2[i][j];
        }
        cout << endl;
    }
}
void level1 ()//Melissa
{
        char maze[8][14] =
    {//Dillon
        {' ',' ',' ',49,' ',' ',' ',50,' ',' ',' ',51,' ',' '},
        {' ',(char) 201,(char) 205,(char) 205,(char) 205,(char) 209,(char) 205,(char) 205,(char) 205,(char) 209,(char) 205,(char) 205,(char) 205,(char) 187},
        {65,(char) 186,' ',' ',' ',(char) 179,' ',' ',' ',(char) 179,' ','7',' ',(char) 186},
        {' ',(char) 199,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182},
        {66,(char) 186,' ','3',' ',(char) 179,' ',' ',' ',(char) 179,' ',' ',' ',(char) 186},
        {' ',(char) 199,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182},
        {67,(char) 186,' ','5',' ',(char) 179,' ',' ',' ',(char) 179,' ','8',' ',(char) 186},
        {' ',(char) 200,(char) 205,(char) 205,(char) 205,(char) 207,(char) 205,(char) 205,(char) 205,(char) 207,(char) 205,(char) 205,(char) 205,(char) 188},
    };
       for (int i=0; i<8; i++)
    {
        for (int j=0; j<14; j++)
        {
            cout << maze[i][j];
        }
        cout << endl;
    }
    cout << "Enter a number for the empty space going row by row from left to right." << endl;
    cin >> maze [2][3];
         system ("cls");
         for (int i=0; i<8; i++)
    {
        for (int j=0; j<14; j++)
        {
            cout << maze[i][j];
        }
        cout << endl;
    }
    cin >> maze [2][7];
    system ("cls");
    for (int i=0; i<8; i++)
    {
        for (int j=0; j<14; j++)
        {
            cout << maze[i][j];
        }
        cout << endl;
    }
    cin >> maze [4][7];
    system ("cls");
    for (int i=0; i<8; i++)
    {
        for (int j=0; j<14; j++)
        {
            cout << maze[i][j];
        }
        cout << endl;
    }
    cin >> maze [4][11];
    system ("cls");
    for (int i=0; i<8; i++)
    {
        for (int j=0; j<14; j++)
        {
            cout << maze[i][j];
        }
        cout << endl;
    }
    cin >> maze [6][7];
    system ("cls");
    for (int i=0; i<8; i++)
    {
        for (int j=0; j<14; j++)
        {
            cout << maze[i][j];
        }
        cout << endl;
    }
}
void level1ans ()
{
     cout << " " << endl;
     cout << "Answer key: " << endl;
     cout << " " << endl;
     char maze[8][14] =
    {//Dillon
        {' ',' ',' ',49,' ',' ',' ',50,' ',' ',' ',51,' ',' '},
        {' ',(char) 201,(char) 205,(char) 205,(char) 205,(char) 209,(char) 205,(char) 205,(char) 205,(char) 209,(char) 205,(char) 205,(char) 205,(char) 187},
        {65,(char) 186,' ','1',' ',(char) 179,' ','2',' ',(char) 179,' ','7',' ',(char) 186},
        {' ',(char) 199,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182},
        {66,(char) 186,' ','3',' ',(char) 179,' ','4',' ',(char) 179,' ','9',' ',(char) 186},
        {' ',(char) 199,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 197,(char) 196,(char) 196,(char) 196,(char) 182},
        {67,(char) 186,' ','5',' ',(char) 179,' ','6',' ',(char) 179,' ','8',' ',(char) 186},
        {' ',(char) 200,(char) 205,(char) 205,(char) 205,(char) 207,(char) 205,(char) 205,(char) 205,(char) 207,(char) 205,(char) 205,(char) 205,(char) 188},
    };
       for (int i=0; i<8; i++)
    {
        for (int j=0; j<14; j++)
        {
            cout << maze[i][j];
        }
        cout << endl;
    }
    cout << " " << endl;
    cout << "Answer will vary. As long as each horizontal" << endl;
    cout << "row contains each digit exactly once, each vertical" << endl;
    cout << "column contains each digit exactly once, and each" << endl;
    cout << "subgrid or region contains each digit exactly once, you win!" << endl;
}
int main()
{//Dillon
system("Color F");
int choice;
int level;
cout << "                           (~    _| _ |    " << endl;
cout << "                           _)|_|(_|(_)|<|_|" << endl;
cout << " " << endl;
cout << "                           1 - Instructions" << endl;
cout << "                           2 - Level Select" << endl;
cin >> choice;
if (choice == 1)//Melissa
{
    int choice2;
    system ("cls");
    cout << "                           Instructions" << endl;
    cout << " " << endl;
    cout << "   The objective of sudoku is to enter a digit from 1 through" << endl;
    cout << "9 in each cell in such a way that: 1) each horizontal row" << endl;
    cout << "contains each digit exactly once, 2) each vertical column" << endl;
    cout << "contains each digit exactly once, and 3) each subgrid or region" << endl;
    cout << "contains each digit exactly once." << endl;
    cout << " " << endl;
    cout << "   In each sudoku puzzle, several digits have already been " << endl;
    cout << "entered; these are the givens and may not be changed. The " << endl;
    cout << "player's job is to fill the remainder of the grid with digits" << endl;
    cout << "with respect to the three constraints mentioned earlier." << endl;
    cout << "After finishing a sudoku board, the player can either: " << endl;
    cout << "1) restart or 2) see the answer key board. The player can " << endl;
    cout << "only restart a total of two times during a level. After " << endl;
    cout << "those two retries are used, the answer key board will " << endl;
    cout << "automatically show." << endl;
    cout << " " << endl;
    cout << "1- Level Select" << endl;
    cin >> choice2;
    if (choice2 == 1)
    {
    system ("cls");
    cout << "                           Level Select" << endl;
    cout << " " << endl;
    cout << "                           1- Easy " << endl;
    cout << "                           2- Hard " << endl;
    cin >> level;
    if (level == 1)
    {
    system ("cls");
    level1 ();
    int choice3;
    cout << "Do you want to (1) start over or (2) see the answer key?" << endl;
    cout << "Retries: 2" << endl;
    cin >> choice3;
    if (choice3 == 1)
    {
        system ("cls");
        level1();
        int choice4;
        cout << "Do you want to (1) start over or (2) see the answer key?" << endl;
        cout << "Retries: 1" << endl;
        cin >> choice4;
         if (choice4 == 1)
    {
        system ("cls");
        level1();
        level1ans();
    }
    if (choice4 == 2)
    {
        level1ans();
    }
    }
    if (choice3 == 2)
    {
        level1ans();
    }
    }
    if (level == 2)
    {
    system ("cls");
    level2 ();
    int choice3;
    cout << "Do you want to (1) start over or (2) see the answer key?" << endl;
    cout << "Retries: 2" << endl;
    cin >> choice3;
    if (choice3 == 1)
    {
        system ("cls");
        level2();
        int choice4;
        cout << "Do you want to (1) start over or (2) see the answer key?" << endl;
        cout << "Retries: 1" << endl;
        cin >> choice4;
         if (choice4 == 1)
    {
        system ("cls");
        level2();
        level2ans();
    }
    if (choice4 == 2)
    {
        level2ans();
    }
    }
    if (choice3 == 2)
    {
        level2ans();
    }
}
}
}
if (choice == 2)
{
    system ("cls");
    cout << "                           Level Select" << endl;
    cout << "" << endl;
    cout << "                           1- Easy " << endl;
    cout << "                           2- Hard " << endl;
    cin >> level;
    if (level == 1)
    {
    system ("cls");
    level1 ();
    int choice3;
    cout << "Do you want to (1) start over or (2) see the answer key?" << endl;
    cout << "Retries: 2" << endl;
    cin >> choice3;
    if (choice3 == 1)
    {
        system ("cls");
        level1();
        int choice4;
        cout << "Do you want to (1) start over or (2) see the answer key?" << endl;
        cout << "Retries: 1" << endl;
        cin >> choice4;
         if (choice4 == 1)
    {
        system ("cls");
        level1();
        level1ans();
    }
    if (choice4 == 2)
    {
        level1ans();
    }
    }
    if (choice3 == 2)
    {
        level1ans();
    }
    }
    if (level == 2)
    {
    system ("cls");
    level2 ();
    int choice3;
    cout << "Do you want to (1) start over or (2) see the answer key?" << endl;
    cout << "Retries: 2" << endl;
    cin >> choice3;
    if (choice3 == 1)
    {
        system ("cls");
        level2();
        int choice4;
        cout << "Do you want to (1) start over or (2) see the answer key?" << endl;
        cout << "Retries: 1" << endl;
        cin >> choice4;
         if (choice4 == 1)
    {
        system ("cls");
        level2();
        level2ans();
    }
    if (choice4 == 2)
    {
        level2ans();
    }
    }
    if (choice3 == 2)
    {
        level2ans();
    }
    }
}
}