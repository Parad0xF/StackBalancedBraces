/*
 *  Stack.h
 *  Created by Radu Enachi.
 *
 *
 *
 */

const int MAX_ARRAY = 50;

template <class ItemType>
class Stack
{
private:
	int numItems;
	ItemType anArray[MAX_ARRAY];
	
public:


	Stack() : numItems(0)
	{
	}

	int size() {

		return numItems;
	}
		
	bool isEmpty()
	{
		return (numItems == 0);
	}

	void push(ItemType anItem)
	{
		if (numItems == MAX_ARRAY)
			return;
		else
			anArray[numItems++] = anItem;
	}
	
	ItemType peek()
	{
		return anArray[numItems - 1];
	}
	
	void pop()
	{
		if (numItems == 0)
			return;
		else numItems--;
	}
};