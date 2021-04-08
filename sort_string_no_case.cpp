// sorting algorothm used with user's argument
// is how to soert vector<string> without case checking


#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

struct No_case {
    bool operator () (const string& x, const string& y) const
    {
        for (int i=0; i<x.length(); ++i) 
        {
            if ( i == y.length() ) return false;
            char xx = tolower(x[i]);
            char yy = tolower(y[i]);
            if (xx < yy) return true;
            if (yy < xx) return false;
        }
        if (x.length() == y.length()) return false;
        return true;
    }
};

void sort_and_print(vector<string>& vc)
{
    sort(vc.begin(), vc.end(), No_case());
    for (const auto& s : vc) 
        cout << s << "\n";
}

int main(int argc, char* argv[])
{
    vector <string> vc {"Anton", "Dasha", "Michael", "Vlad", "Vasiliy"};
    sort_and_print(vc);
}
