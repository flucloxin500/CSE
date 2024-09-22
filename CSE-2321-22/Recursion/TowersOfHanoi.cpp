#include <iostream>
using namespace std;

int towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
   if (n == 0)
   {
      return 0;
   }

   int moves = towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);

   cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;
   moves++;
   moves += towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);

   return moves;
}

int main()
{
   int N;
   cout << "Enter the number of disks: ";
   cin >> N;

   int total_moves = towerOfHanoi(N, 'A', 'B', 'C');
   cout << "Total number of moves: " << total_moves << endl;

   return 0;
}
