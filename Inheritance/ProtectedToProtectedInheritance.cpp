#include <iostream>
using namespace std;


class human{             

    protected:
    int height;

    public:
    int weight;

    private:
    int age;

    public:

    int getAge(){
        return this->age;
    }

    void setWeight(int w){
        this->weight=w;
    }
};

    // Male is child class

    class male:protected human{            

        public:

        string colour;

        void sleep(){
            cout<<"Male is sleeping";
        }
};

int main(){

    male m1;

    // Ye bhi private hojyega, to access it, getter and setter ka use krna pdega
    cout<<m1.height;
    
    return 0;
}