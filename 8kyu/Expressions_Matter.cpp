#include <bits/stdc++.h>

using namespace std;

unsigned short int expressionsMatter (unsigned short int a , unsigned short int b , unsigned short int c)
{
    vector<unsigned short int> sums =
    { static_cast<unsigned short int>(a*(b+c)),
     static_cast<unsigned short int>(a*b*c),
     static_cast<unsigned short int>(a+b*c),
     static_cast<unsigned short int>((a+b)*c),
     static_cast<unsigned short int>(a+b+c)};
    sort(sums.begin(), sums.end(),greater<unsigned short int>());
    return sums[0];
}
