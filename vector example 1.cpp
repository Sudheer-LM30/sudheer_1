#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void test(std::vector<int> nums) 
{
  std::sort(nums.begin(), nums.end());
	for (int i = 0; i < nums.size() - 1; i++)
	{
		if (nums[i + 1] != (nums[i] + 1))
		{
			cout<<"not consecutive"<<endl;
		}
	}
	cout<<"consecutive";
 }
int main(){
	vector<int> nums = {1, 2, 3, 4, 5, 6};
    for (int x : nums)
        cout << x << " ";
  cout<<endl;
  test(nums);
}

