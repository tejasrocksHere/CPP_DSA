//class version
// #include <iostream>
// #include <vector>
// using namespace std;

// class DisjointSet {
//     int n;
//     vector<int> parent, sizeP;

// public:
//     DisjointSet(int _n) : n(_n) {
//         parent.resize(n + 1);
//         sizeP.resize(n + 1, 1);

//         for (int i = 0; i <= n; i++)
//             parent[i] = i;
//     }

//     int findParent(int u) {
//         if (u == parent[u])
//             return u;
//         return parent[u] = findParent(parent[u]);
//     }

//     void Union(int u, int v) {
//         int ultimate_parent_u = findParent(u);
//         int ultimate_parent_v = findParent(v);
//         if (sizeP[ultimate_parent_u] < sizeP[ultimate_parent_v]) {
//             parent[ultimate_parent_u] = ultimate_parent_v;
//             sizeP[ultimate_parent_v] += sizeP[ultimate_parent_u];
//         } else {
//             parent[ultimate_parent_v] = ultimate_parent_u;
//             sizeP[ultimate_parent_u] += sizeP[ultimate_parent_v];
//         }
//     }
// };

// int main() {
//     DisjointSet ds(4); // Creating a DisjointSet with 4 elements
//     ds.Union(1, 2);
//     if (ds.findParent(1) == ds.findParent(2))
//         cout << "Connected\n";
//         if (ds.findParent(2) == ds.findParent(3))
//         cout << "Connected\n";
//     ds.Union(2, 3);

//     return 0;
// }
#include <iostream>
#include <vector>
using namespace std;

vector<int> parent, sizeP;

void init(int n) {
    parent.resize(n + 1);
    sizeP.resize(n + 1, 1);

    for (int i = 0; i <= n; i++)
        parent[i] = i;
}

int findParent(int u) {
    if (u == parent[u])
        return u;
    return parent[u] = findParent(parent[u]);
}

void Union(int u, int v) {
    int ultimate_parent_u = findParent(u);
    int ultimate_parent_v = findParent(v);
    if (sizeP[ultimate_parent_u] < sizeP[ultimate_parent_v]) {
        parent[ultimate_parent_u] = ultimate_parent_v;
        sizeP[ultimate_parent_v] += sizeP[ultimate_parent_u];
    } else {
        parent[ultimate_parent_v] = ultimate_parent_u;
        sizeP[ultimate_parent_u] += sizeP[ultimate_parent_v];
    }
}

int main() {
    int n = 4; // Number of elements
    init(n); // Initialize Disjoint Set with n elements
    Union(1, 2);
    if (findParent(1) == findParent(2))
        cout << "Connected\n";
    Union(2, 3);

    return 0;
}
