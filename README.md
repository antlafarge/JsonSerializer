# JsonSerializer
Code and macro to easily serialize and deserialize a struct. Based on cpprest JSON parser.

## Prerequisites

Install cpprestsdk  
https://github.com/microsoft/cpprestsdk  
https://www.nuget.org/packages/cpprestsdk.v.141

```cpp
#include "JsonSerializer.h"
```

## Declare a (de)serializable struct

```cpp
struct Sample
{
	double pi = 0.0;
	std::vector<int32_t> fibonacci;
	std::string proverb;

	JSON_SERIALIZER(pi, fibonacci, proverb)
};
```

## Serialize

```cpp
Sample object{ 3.1415926535, { 0,1,1,2,3,5,8,13,21,34 }, "Haste makes waste" };
std::stringstream stream;
JsonSerializer::serialize(stream, object);
std::string json = stream.str();
```

## Deserialize

```cpp
Sample object2;
std::stringstream stream2(json);
JsonSerializer::deserialize(stream2, object2);
```
