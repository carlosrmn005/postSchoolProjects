#include "Map.h"
//#include <string>



class pair
{
public:
	pair();
	~pair();
};

pair::pair()
{
    KeyType key = "";
    ValueType val = 0;
}

pair::~pair()
{

}

// Create an empty map (i.e., one with no key/value pairs)
Map::Map()
{
    arrOfPairs[0] = { pair::pair() };
}

// Return true if the map is empty, otherwise false.
bool Map::empty() const
{
    return false;
}

// Return the number of key/value pairs in the map.
int Map::size() const
{

    return 0;
}

// If key is not equal to any key currently in the map, and if the
// key/value pair can be added to the map, then do so and return true.
// Otherwise, make no change to the map and return false (indicating
// that either the key is already in the map).
bool Map::insert(const KeyType& key, const ValueType& value)
{
    return false;
}

// If key is equal to a key currently in the map, then make that key no
// longer map to the value it currently maps to, but instead map to
// the value of the second parameter; return true in this case.
// Otherwise, make no change to the map and return false.
bool Map::update(const KeyType& key, const ValueType& value)
{
    return false;
}

// If key is equal to a key currently in the map, then make that key no
// longer map to the value it currently maps to, but instead map to
// the value of the second parameter; return true in this case.
// If key is not equal to any key currently in the map then add it and 
// return true. In fact this function always returns true.
bool Map::insertOrUpdate(const KeyType& key, const ValueType& value)
{
    return true;
}

// If key is equal to a key currently in the map, remove the key/value
// pair with that key from the map and return true.  Otherwise, make
// no change to the map and return false.
bool Map::erase(const KeyType& key)
{
    return false;
}

// Return true if key is equal to a key currently in the map, otherwise
// false.
bool Map::contains(const KeyType& key) const
{
    return false;
}

// If key is equal to a key currently in the map, set value to the
// value in the map that that key maps to, and return true.  Otherwise,
// make no change to the value parameter of this function and return
// false.
bool Map::get(const KeyType& key, ValueType& value) const
{
    return false;
}

// If 0 <= i < size(), copy into the key and value parameters the
// key and value of one of the key/value pairs in the map and return
// true.  Otherwise, leave the key and value parameters unchanged and
// return false.  (See below for details about this function.)
bool Map::get(int i, KeyType& key, ValueType& value) const
{
    return false;
}

// Exchange the contents of this map with the other one.
void Map::swap(Map& other)
{

}

std::string print()
{
    std::string str = " ";
    for (int i = 0; i < length; i++)
    {

    }
}