#include <iostream>
#include <map>
#include <unordered_map>
#include <string.h>
using namespace std;

int main()
{

    // creation
    unordered_map<string, int> umap;

    // insertion

    // 1
    pair<string, int> p1 = make_pair("hlo", 0);
    umap.insert(p1);

    // 2
    pair<string, int> p2("i", 1);
    umap.insert(p2);

    // 3
    umap["am"] = 2;

    // updating key
    umap["am"] = 3;

    // searching
    cout << umap["am"] << endl;
    cout << umap.at("hlo") << endl;

    // unknowing value
    //  cout << umap.at("hlo3") << endl;
    //  cout << umap["am1"] << endl;

    cout << umap["am1"] << endl;    // it basically assigns a 0 key to unknowing value
    cout << umap.at("am1") << endl; // if used before it will give error

    // check size

    cout << umap.size() << endl;

    // check presence
    cout << umap.count("bro") << endl;

    // erase
    umap.erase("code") << endl;
    cout << umap.size() << endl;

    // traversing the whole map
    // accessing the whole map

    for (auto i : umap)
    {
        cout << i.first << "    " << i.second << endl;
    }

    return 0;
}
