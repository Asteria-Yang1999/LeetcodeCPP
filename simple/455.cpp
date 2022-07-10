/*

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution {
public:
    int findContentChildren(vector<int>& children, vector<int>& cookies) {
        sort(children.begin(), children.end());
        sort(cookies.begin(), cookies.end());
        int child = 0, cookie = 0;
        while (child < children.size() && cookie < cookies.size()) {
        if (children[child] <= cookies[cookie]) ++child;
        ++cookie;
        }
        return child;
    }
};

*/

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int findContentChildren(vector<int>& children, vector<int>& cookies) {
    sort(children.begin(), children.end());
    sort(cookies.begin(), cookies.end());
    int child = 0, cookie = 0;
    while (child < children.size() && cookie < cookies.size()) {
    if (children[child] <= cookies[cookie]) ++child;
    ++cookie;
    }
    return child;
}

int main(){
    vector<int> children = {1,2};
    vector<int> cookies = {2,3};
    int child;
    child = findContentChildren(children, cookies);
    printf("%d",child);
}


