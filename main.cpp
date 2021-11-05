#include <iostream>
#include <vector>

// Make a function to swap numbers native to this code. 
void arr_swap(int &a, int &b) {
  int temp_num;
  temp_num = a;
  a = b;
  b = temp_num;
}

/*
* Make a function to sort numbers in a vector with bubble sort.
* std::vector<int> &nums is where the numbers will be.
*/
void sort_numbers (std::vector<int> &nums) {
	// 'k' will be how many items are in nums.
	int k = nums.size();
	
	// Sort the numbers until we reach the end of the vector.
	for (int i = 0; i < k - 1; ++i) { 
		
		// Boolean 'has_been_swapped' by default is false. It becomes true when something is swapped.
		bool has_been_swapped = false;
		
		/*
		* Sort items while j is less than k-i (so that
		* only sorts the items up to the point it already
		* did plus one.
		*/
		for (int j = 0; j < k - i - 1; ++j) {
				/* 
				* If the item in location 'j' is greater than
				* the item in the location one more than 'j',
				* swap the two and make 'has_been_swapped' true.
				*/
				if (nums[j] > nums[j+1]) {
					arr_swap(nums[j], nums[j + 1]);
					has_been_swapped = true;
				}
		}
		
		// Break if there aren't any swaps.
		if(has_been_swapped == false) {
			break;
		}
	} 
} 

// Main function.
int main(int argc, char **argv) {
		// Declare user amount of numbers
		int count;

		std::cout << "How many numbers do you wanna sort? ";
		std::cin >> count;
		
		// Declare nums vector.	
		std::vector<int> nums;

    		// Ask the user each number 'count' times.
		for(int i = 0; i < count; i++) {
			int temp = 0;
      			std::cout << "Number " << i+1 << ": " ;
			std::cin >> temp;
      
      			// Insert the number into nums.
			nums.push_back(temp);
		}

		// Sort the numbers.
		sort_numbers(nums);

		// Print a newline after it is done sorting the numbers.
		std::cout << std::endl;

		// Print the numbers in nums for nums.size() times.
		for (int i = 0; i < nums.size(); i++) {
			std::cout << nums[i] << std::endl;
		}

		// End program.
		return 0;
}
