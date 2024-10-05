// Monk and marks
#include <bits/stdc++.h>
using namespace std;
//the comment in this code is another way to write code
int main()
{
    map<int, multiset<string>> marks_map;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int marks;
        string name;
        cin >> name >> marks;
        marks_map[marks].insert(name); // marks[-1*marks].insert(name)
    }
    auto cur_it = --marks_map.end(); //
    while (true)                     // for(auto &marks_students_pr:marks_map)
    {
        auto &students = (*cur_it).second; // marks_students_pr.second
        int marks = (*cur_it).first;       // marks_students_pr.first
        for (auto student : students)
        {
            cout << student << " " << marks << endl;//-1*marks
        }
        if (cur_it == marks_map.begin()) //
            break;                       //
        cur_it--;                        //
    }
}
/*
3
Eve 78
Bob 99
Alice 78
Alice 78*/