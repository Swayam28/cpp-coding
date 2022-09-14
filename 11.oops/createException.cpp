#include <bits/stdc++.h>
using namespace std;
class derived_exception: public exception{
public:
const char* what() throw(){
    return "selfMade exception";
}
};

int main() {
    derived_exception fd;
    try{
        throw fd;
    }
    catch(derived_exception& e){
        cout<<e.what();
    }
    catch(exception& e){
        cout<<e.what();
    }


    

    return 0;

}
