# JsonSerializer
Code and macro to easily serialize and deserialize a struct. Based on cpprest JSON parser.

## Prerequisites

Install cpprestsdk  
https://github.com/microsoft/cpprestsdk  
https://www.nuget.org/packages/cpprestsdk.v.141

## Declare a de-serializable struct

```cpp
#include "JsonSerializer.h"
```

```cpp
struct Sample
{
	double pi = 0.0;
	std::vector<int32_t> fibonacci;
	std::string proverb;

	JSON_SERIALIZER(pi, fibonacci, proverb)
};
```
You should use the types declared in cstdint  
https://en.cppreference.com/w/cpp/header/cstdint

## Serialize

```cpp
Sample object{ 3.1415926535, { 0,1,1,2,3,5,8,13,21,34 }, "Haste makes waste" };
std::stringstream stream;
JsonSerializer::serialize(stream, object);
std::string json = stream.str();
```
Expected json output (formatted for display) :
```
{
	"fibonacci": [0,1,1,2,3,5,8,13,21,34],
	"pi": 3.1415926535000001,
	"proverb": "Haste makes waste"
}
```

## Deserialize

```cpp
Sample object2;
std::stringstream stream2(json);
JsonSerializer::deserialize(stream2, object2);
```


## Use streams

```cpp
#include "JsonStream.h"
```
#### Serialize
```cpp
Sample object{ 3.1415926535, { 0,1,1,2,3,5,8,13,21,34 }, "Haste makes waste" };
JsonStream stream;
stream << object;
std::string json = stream.str();
```
#### Deserialize
```cpp
JsonStream stream2(json);
Sample object2;
stream2 >> object2;
```
