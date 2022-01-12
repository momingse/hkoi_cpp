#include <iostream>
#include <math.h>

using namespace std;

bool is_int(double num){
   long long intpart = num;
   return !(num - intpart > 0);
}

double tri(const unsigned long long c){
    double root1, root2;
    const int a = 1;
    const int b = 1;
    
    root1 = (-a - sqrt(b-8*a*(-c))) / 2;
    root2 = (-a + sqrt(b-8*a*(-c))) / 2;

    return ((is_int(root1) && root1 > 0) || (is_int(root2) && root2 > 0));
}

bool sq(const unsigned long long num){
    long long factor = sqrt(num);
    return (factor * factor == num);
}

int main(){
    unsigned long long num;
    bool bl_tri, bl_sq;

    cin >> num;
      
    bl_sq = sq(num);
    bl_tri = tri(num);

    if (bl_sq && bl_tri)
        cout << "Both" << endl;
    else if (bl_sq)
        cout << "Square" << endl;
    else if (bl_tri)
        cout << "Triangular" << endl;
    else
        cout << "Neither" << endl;

    return 0;
}
