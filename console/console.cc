#include <iostream>
#include <functions/functions.h>
#include <chrono>
using namespace std;
using namespace SelfWrittenSet;

int main() {
	///*1st task*/

	//double time_count = 0;
	//for (size_t i = 0; i < 100; i++) {
	//	Set<int> a;
	//	vector<int> vec = random(-10000, 10000, 1000, i);
	//	size_t size = vec.size();
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	for (size_t j = 0; j < size; j++) {
	//		a.insert(vec[j]);
	//	}
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}
	//cout << "Average time, 1000 nums: " << time_count / 100 << " seconds" << endl;

	///*Average time, 1000 nums: 0.000131134 seconds*/														

	//---------------------------------------------------------------------------------------------

	//double time_count = 0;
	//for (size_t i = 0; i < 100; i++) {
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	vector<int> vec = random(-10000, 10000, 1000, i);
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}
	//cout << "Average time vector, 1000 nums: " << time_count / 100 << " seconds" << endl;
	// 
	///*Average time vector, 1000 nums: 0.00011154 seconds*/
	// 
	//---------------------------------------------------------------------------------------------

	//double time_count = 0;
	//for (size_t i = 0; i < 100; i++) {
	//	Set<int> a;
	//	vector<int> vec = random(-100000, 100000, 10000, i);
	//	size_t size = vec.size();
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	for (size_t j = 0; j < size; j++) {
	//		a.insert(vec[j]);
	//	}
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}
	//cout << "Average tima, 10000 nums: " << time_count / 100 << " seconds" << endl;

	///*Average tima, 10000 nums: 0.00214797 seconds*/

	//---------------------------------------------------------------------------------------------

	//double time_count = 0;
	//for (size_t i = 0; i < 100; i++) {
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	vector<int> vec = random(-100000, 100000, 10000, i);
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}
	//cout << "Average time vector, 10000 nums: " << time_count / 100 << " seconds" << endl;

	///*Average time vector, 10000 nums: 0.000684934 seconds*/
	 
	//---------------------------------------------------------------------------------------------

	//double time_count = 0;
	//for (size_t i = 0; i < 100; i++) {
	//	Set<int> a;
	//	vector<int> vec = random(-1000000, 1000000, 100000, i);
	//	size_t size = vec.size();
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	for (size_t j = 0; j < size; j++) {
	//		a.insert(vec[j]);
	//	}
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}
	//cout << "Average time, 100000 nums: " << time_count / 100 << " seconds" << endl;

	///*Average time, 100000 nums: 0.0296367 seconds*/
	 
	//---------------------------------------------------------------------------------------------

	//double time_count = 0;
	//for (size_t i = 0; i < 100; i++) {
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	vector<int> vec = random(-1000000, 1000000, 100000, i);
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}

	//cout << "Average time vector, 10000 nums: " << time_count / 100 << " seconds" << endl;

	///*Average time, 100000 nums: 0.00754472 seconds*/

	//---------------------------------------------------------------------------------------------
	///*2nd task*/

	//Set<int> a;
	//double res = 0;
	//vector<int> vec = random(-10000, 10000, 1000, 0);
	//size_t size = vec.size();
	//for (size_t j = 0; j < size; j++) {
	//	a.insert(vec[j]);
	//}
	//auto start_time = std::chrono::high_resolution_clock::now();
	//for (size_t j = 0; j < size; j++) {
	//	a.contains(random(-10000, 10000, j));
	//}
	//auto end = std::chrono::high_resolution_clock::now();
	//res = std::chrono::duration<double>(end - start_time).count();
	//cout << "Average contains time set, 1000 nums: " << res / 1000 << " seconds" << endl;

	///*Average contains time set, 1000 nums: 4.3087e-06 seconds*/
	 
	//---------------------------------------------------------------------------------------------

	//double res = 0;
	//vector<int> vec = random(-10000, 10000, 1000, 0);
	//size_t size = vec.size();
	//auto start_time = std::chrono::high_resolution_clock::now();
	//for (size_t j = 0; j < size; j++) {
	//	int cnt = count(vec.begin(), vec.end(), random(-10000, 10000, j));
	//}
	//auto end = std::chrono::high_resolution_clock::now();
	//res = std::chrono::duration<double>(end - start_time).count();
	//cout << "Average contains time vector, 1000 nums: " << res / 1000 << " seconds" << endl;

	///*Average contains time vector, 1000 nums: 1.2415e-05 seconds*/

	//---------------------------------------------------------------------------------------------

	//Set<int> a;
	//double res = 0;
	//vector<int> vec = random(-100000, 100000, 10000, 0);
	//size_t size = vec.size();
	//for (size_t j = 0; j < size; j++) {
	//	a.insert(vec[j]);
	//}
	//auto start_time = std::chrono::high_resolution_clock::now();
	//for (size_t j = 0; j < 1000; j++) {
	//	a.contains(random(-100000, 100000, j));
	//}
	//auto end = std::chrono::high_resolution_clock::now();
	//res = std::chrono::duration<double>(end - start_time).count();
	//cout << "Average contains time set, 1000 nums: " << res / 1000 << " seconds" << endl;

	///*Average contains time set, 1000 nums: 4.3283e-06 seconds*/

	//---------------------------------------------------------------------------------------------

	//double res = 0;
	//vector<int> vec = random(-100000, 100000, 10000, 0);
	//size_t size = vec.size();
	//auto start_time = std::chrono::high_resolution_clock::now();
	//for (size_t j = 0; j < 1000; j++) {
	//	int cnt = count(vec.begin(), vec.end(), random(-100000, 100000, j));
	//}
	//auto end = std::chrono::high_resolution_clock::now();
	//res = std::chrono::duration<double>(end - start_time).count();
	//cout << "Average contains time vector, 1000 nums: " << res / 1000 << " seconds" << endl;

	///*Average contains time vector, 1000 nums: 1.27661e-05 seconds*/

	//---------------------------------------------------------------------------------------------

	//Set<int> a;
	//double res = 0;
	//vector<int> vec = random(-1000000, 1000000, 100000, 0);
	//size_t size = vec.size();
	//for (size_t j = 0; j < size; j++) {
	//	a.insert(vec[j]);
	//}
	//auto start_time = std::chrono::high_resolution_clock::now();
	//for (size_t j = 0; j < 1000; j++) {
	//	a.contains(random(-1000000, 1000000, j));
	//}
	//auto end = std::chrono::high_resolution_clock::now();
	//res = std::chrono::duration<double>(end - start_time).count();
	//cout << "Average contains time set, 1000 nums: " << res / 1000 << " seconds" << endl;

	///*Average contains time set, 1000 nums: 4.9662e-06 seconds*/
	
	//---------------------------------------------------------------------------------------------

	//double res = 0;
	//vector<int> vec = random(-1000000, 1000000, 100000, 0);
	//size_t size = vec.size();
	//auto start_time = std::chrono::high_resolution_clock::now();
	//for (size_t j = 0; j < 1000; j++) {
	//	int cnt = count(vec.begin(), vec.end(), random(-1000000, 1000000, j));
	//}
	//auto end = std::chrono::high_resolution_clock::now();
	//res = std::chrono::duration<double>(end - start_time).count();
	//cout << "Average contains time vector, 1000 nums: " << res / 1000 << " seconds" << endl;

	///*Average contains time vector, 1000 nums: 8.65763e-05 seconds*/


	///*3 task*/
	
	//---------------------------------------------------------------------------------------------

	//double time_count = 0;
	//for (size_t i = 0; i < 1000; i++) {
	//	Set<int> a;
	//	vector<int> vec = random(-10000, 10000, 1000, i);
	//	size_t size = vec.size();
	//	for (size_t j = 0; j < size; j++) {
	//		a.insert(vec[j]);
	//	}
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	a.insert(random(-1000, 1000, i));
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}
	//cout << "Average time, 1000 nums: "<<time_count / 1000 << " seconds"<< endl;

	///*Average time, 1000 nums:  3.4639e-06 seconds*/

	//---------------------------------------------------------------------------------------------

	//double time_count = 0;
	//for (size_t i = 0; i < 1000; i++) {
	//	Set<int> a;
	//	vector<int> vec = random(-10000, 10000, 1000, i);
	//	size_t size = vec.size();
	//	for (size_t j = 0; j < size; j++) {
	//		a.insert(vec[j]);
	//	}
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	a.erase(random(-1000, 1000, i));
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}
	//cout << "Average time, 1000 nums: " << time_count / 1000 << " seconds" << endl;

	///*Average time, 1000 nums: 3.6972e-06 seconds*/

	//---------------------------------------------------------------------------------------------

	//double time_count = 0;
	//for (size_t i = 0; i < 1000; i++) {
	//	vector<int> vec = random(-10000, 10000, 1000, i);
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	vec.push_back(random(-1000, 1000, i));
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}
	//cout << "Average time, 1000 nums: "<<time_count / 1000 << " seconds"<< endl;

	///*Average time, 1000 nums:  3.0667e-06 seconds*/

	//---------------------------------------------------------------------------------------------

	//
	//double time_count = 0;
	//for (size_t i = 0; i < 1000; i++) {
	//	vector<int> vec = random(-10000, 10000, 1000, i);
	//	size_t size = vec.size();
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	int val = random(-1000, 1000, i);
	//	for (size_t j = 0; j < size; j++) {
	//		if (vec[j] == val) {
	//			vec.erase(vec.begin() + j);
	//			break;
	//		}
	//	}
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}
	//cout << "Average time, 1000 nums: " << time_count / 1000 << " seconds" << endl;

	///*Average time, 1000 nums: 1.28001e-05 seconds*/

	//---------------------------------------------------------------------------------------------
	///*10.000*/

	//double time_count = 0;
	//for (size_t i = 0; i < 1000; i++) {
	//	Set<int> a;
	//	vector<int> vec = random(-100000, 100000, 10000, i);
	//	size_t size = vec.size();
	//	for (size_t j = 0; j < size; j++) {
	//		a.insert(vec[j]);
	//	}
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	a.insert(random(-1000, 1000, i));
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}
	//cout << "Average time, 1000 nums: "<<time_count / 1000 << " seconds"<< endl;

	///*Average time, 1000 nums: 1.00025e-05 seconds*/

	//---------------------------------------------------------------------------------------------

	//double time_count = 0;
	//for (size_t i = 0; i < 1000; i++) {
	//	Set<int> a;
	//	vector<int> vec = random(-100000, 100000, 10000, i);
	//	size_t size = vec.size();
	//	for (size_t j = 0; j < size; j++) {
	//		a.insert(vec[j]);
	//	}
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	a.erase(random(-10000, 10000, i));
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}
	//cout << "Average time, 1000 nums: " << time_count / 1000 << " seconds" << endl;

	///*Average time, 1000 nums: 5.1801e-06 seconds*/

	//---------------------------------------------------------------------------------------------
	//
	//double time_count = 0;
	//for (size_t i = 0; i < 1000; i++) {
	//	vector<int> vec = random(-100000, 100000, 10000, i);
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	vec.push_back(random(-10000, 10000, i));
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}
	//cout << "Average time, 1000 nums: "<<time_count / 1000 << " seconds"<< endl;

	///*Average time, 1000 nums: 1.17133e-05 seconds*/

	//---------------------------------------------------------------------------------------------

	//double time_count = 0;
	//for (size_t i = 0; i < 1000; i++) {
	//	vector<int> vec = random(-100000, 100000, 10000, i);
	//	size_t size = vec.size();
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	int val = random(-10000, 10000, i);
	//	for (size_t j = 0; j < size; j++) {
	//		if (vec[j] == val) {
	//			vec.erase(vec.begin() + j);
	//			break;
	//		}
	//	}
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}
	//cout << "Average time, 1000 nums: " << time_count / 1000 << " seconds" << endl;

	///*Average time, 1000 nums: 3.38853e-05 seconds*/

	//---------------------------------------------------------------------------------------------
	//100.000
	 
	//double time_count = 0;
	//for (size_t i = 0; i < 1000; i++) {
	//	Set<int> a;
	//	vector<int> vec = random(-1000000, 1000000, 100000, i);
	//	size_t size = vec.size();
	//	for (size_t j = 0; j < size; j++) {
	//		a.insert(vec[j]);
	//	}
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	a.insert(random(-10000, 10000, i));
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}
	//cout << "Average time, 1000 nums: "<<time_count / 1000 << " seconds"<< endl;

	///*Average time, 1000 nums: 9.7221e-06 seconds*/

	//---------------------------------------------------------------------------------------------

	//double time_count = 0;
	//for (size_t i = 0; i < 1000; i++) {
	//	Set<int> a;
	//	vector<int> vec = random(-1000000, 1000000, 100000, i);
	//	size_t size = vec.size();
	//	for (size_t j = 0; j < size; j++) {
	//		a.insert(vec[j]);
	//	}
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	a.erase(random(-100000, 100000, i));
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}
	//cout << "Average time, 1000 nums: " << time_count / 1000 << " seconds" << endl;

	///*Average time, 1000 nums: 6.4013e-06 seconds*/

	//---------------------------------------------------------------------------------------------

	//double time_count = 0;
	//for (size_t i = 0; i < 1000; i++) {
	//	vector<int> vec = random(-1000000, 1000000, 100000, i);
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	vec.push_back(random(-100000, 100000, i));
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}
	//cout << "Average time, 1000 nums: "<<time_count / 1000 << " seconds"<< endl;

	///*Average time, 1000 nums: 4.4924e-06 seconds*/

	//---------------------------------------------------------------------------------------------

	//double time_count = 0;
	//for (size_t i = 0; i < 1000; i++) {
	//	vector<int> vec = random(-1000000, 1000000, 100000, i);
	//	size_t size = vec.size();
	//	auto start_time = std::chrono::high_resolution_clock::now();
	//	int val = random(-100000, 100000, i);
	//	for (size_t j = 0; j < size; j++) {
	//		if (vec[j] == val) {
	//			vec.erase(vec.begin() + j);
	//			break;
	//		}
	//	}
	//	auto end = std::chrono::high_resolution_clock::now();
	//	time_count += std::chrono::duration<double>(end - start_time).count();
	//}
	//cout << "Average time, 1000 nums: " << time_count / 1000 << " seconds" << endl;

	///*Average time, 1000 nums: 0.000246729 seconds*/

	std::vector<int> vec = { 3, 2, 2, 4 };
	std::vector<int> result = findUnique(vec);

	std::cout << "Unique elements: " << std::endl;
	for (int num : result) {
		std::cout << num << " ";
	}
	std::cout << std::endl;

	return 0;
}