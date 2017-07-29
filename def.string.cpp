#include <iostream>
using namespace std;
struct Def{

    int string = '\0';

};
void Convert_Record(string catalyst)
{
    char app = '\0';

    for (int index = 0; index < catalyst.length(); ++index){
        app = catalyst[index];
        cout << app;
    }

}
int main()
{
    Def def;
    int type[12];
    char app = '\0';

    for (int index = 0; index < 12; ++index){
        int style[12] = {'\0', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'i'};

        style[index];
        app = style[index];

        def.string = app;
        cout << def.string << endl;

        string input;

        int string;

        string;

        while (input != "exit")
        {
        input = string;
        cin >> input;

        Convert_Record(input);
        }




    }




    return 0;
}
