#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {

        // find the rook
        int st = 0, ed = 0;
        for (int i = 0; i < 8; ++i)
        {
            for (int j = 0; j < 8; ++j)
            {
                if (board[i][j] == 'R')
                {
                    st = i;
                    ed = j;
                    break;
                }
            }
        }   
        
        // count
        int count = 0;
        int dx[4] = {1, 0, -1, 0};
        int dy[4] = {0, 1, 0, -1};
        for (int x = 0; x < 4; ++x)
        {
            for (int step = 0; ; ++step)
            {
                int rx = st + step * dx[x];
                int ry = ed + step * dy[x];
                if (rx < 0 || rx >= 8 || ry < 0 || ry >= 8 || board[rx][ry] == 'B')
                    break;
                if (board[rx][ry] == 'p')
                {
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};

int main()
{
    Solution sl;
    vector<vector<char> > board;
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
        {
            if (i == 3 && j == 5)
                board[i][j] = 'B';
            else if (i == 1 && j == 5)
                board[i][j] = 'p';
            else
                board[i][j] = '.';
        }
    int x = sl.numRookCaptures(board);
    cout << x << endl;
}