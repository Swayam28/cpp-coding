#include <bits/stdc++.h>
using namespace std;
class display
{
public:
    display(int x)
    {
        try
        {
            if (x < 0)
            {
                throw x;
            }
            else if (x == 0)
            {
                throw 'x';
            }
            // if(x>1){
            //     throw 1.0;
            // }
            else
            {
                throw 1.0;
            }
        }
        catch (int x)
        {
            cout << "Negative Integer/Integer Exception" << endl;
            throw;
        }
        catch (char x)
        {
            cout << "Character exception/Zero" << endl;
        }
        // catch(double x){
        //     cout<<"Positive Integer/Double Exception"<<endl;
        // }
        catch (...)
        {
            cout << "Reconsider:::::::" << endl;
        }
    }
};
int main()
{

    int x;
    cin >> x;
try{
    display d(x);
}
catch(int){
    cout<<"Main Function";
}
    return 0;
}
