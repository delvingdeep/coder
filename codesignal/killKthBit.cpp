/*
* Replace kth bit in a integer n to 0
*/

int killKthBit(int n, int k) {
  return n & ~(1 << (k-1));     // bitwise OR 
}
