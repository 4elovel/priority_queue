#include <iostream>
#include <queue>

using namespace std;

void print(priority_queue < int> pq) {
	for (size_t i = 0,j = pq.size(); i < j; i++)
	{
		cout << pq.top() << "\n";
		pq.pop();
	}
	cout << endl;
}

int main()
{
	srand(time(NULL));
    priority_queue < int> pq;
	for (size_t i = 0; i < 25; i++)
	{
		pq.push(rand() % 1000);
	}
	print(pq);

}