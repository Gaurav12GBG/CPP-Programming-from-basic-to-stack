#include <iostream>
using namespace std;

// Function prototype
void plainToCipher(int key, char str[]);

int main()
{

    int key;
    char str[100];

    cout << "Enter your plain text : " << endl;
    cin >> str;
    cout << "Enter your key : " << endl;
    cin >> key;

    plainToCipher(key, str);

    return 0;
}

void plainToCipher(int key, char str[])
{
    int n = 0, i = 0;
    for (n = 0; str[n] != '\0'; n++)
        ;

    if (key < 0)
    {
        cout << "Invalid Input" << endl;
        return;
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            if (str[i] != ' ')
            {
                if (str[i] >= 65 && str[i] <= 90)
                {
                    if ((int)(str[i] + key) <= 90)

                        str[i] = (int)(str[i] + key);

                    else

                        str[i] = (int)(str[i] + key - 90 + 65 - 1);
                }
                else if (str[i] >= 97 && str[i] <= 122)
                {
                    if ((int)(str[i] + key) <= 122)

                        str[i] = (int)(str[i] + key);

                    else

                        str[i] = (int)(str[i] + key - 122 + 97 - 1);
                }
                else if (str[i] >= 48 && str[i] <= 57)
                {
                    if ((int)(str[i] + key) <= 57)

                        str[i] = (int)(str[i] + key);

                    else

                        str[i] = (int)(str[i] + key - 57 + 48 - 1);
                }
            }
        }
        cout << "Plain text into the cipher text is : " << str << endl;
    }
}