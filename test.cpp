#include <iostream>
#include "JsonSerializer.h"

struct SampleObject
{
	uint8_t c = 0;

	SampleObject() = default;

	SampleObject(int content)
		: c(content)
	{
	}

	bool operator==(const SampleObject& other) const
	{
		return (c == other.c);
	}

	JSON_SERIALIZER(c)
};

struct BasicData
{
	bool boolean = false;
	int8_t int8 = 0;
	int16_t int16 = 0;
	int32_t int32 = 0;
	int64_t int64 = 0;
	uint8_t uint8 = 0;
	uint16_t uint16 = 0;
	uint32_t uint32 = 0;
	uint64_t uint64 = 0;
	float myFloat = 0.0f;
	double myDouble = 0.0;
	std::string string;
	std::wstring wstring;

	bool operator==(const BasicData& other) const
	{
		return (boolean == other.boolean
			&& int8 == other.int8
			&& int16 == other.int16
			&& int32 == other.int32
			&& int64 == other.int64
			&& uint8 == other.uint8
			&& uint16 == other.uint16
			&& uint32 == other.uint32
			&& uint64 == other.uint64
			&& myFloat == other.myFloat
			&& myDouble == other.myDouble
			&& string == other.string
			&& wstring == other.wstring);
	}

	JSON_SERIALIZER(boolean, int8, int16, int32, int64, uint8, uint16, uint32, uint64, myFloat, myDouble, string, wstring)
};

struct ContainerData
{
	std::array<SampleObject, 2> array = {};
	std::vector<SampleObject> vector;
	std::list<SampleObject> list;
	std::forward_list<SampleObject> forwardList;
	std::set<uint8_t> set;
	std::unordered_set<uint8_t> unorderedSet;
	std::map<std::string, SampleObject> mapString;
	std::unordered_map<std::wstring, SampleObject> uMapWString;

	bool operator==(const ContainerData& other) const
	{
		return (array == other.array
			&& vector == other.vector
			&& list == other.list
			&& forwardList == other.forwardList
			&& set == other.set
			&& unorderedSet == other.unorderedSet
			&& mapString == other.mapString
			&& uMapWString == other.uMapWString);
	}

	JSON_SERIALIZER(array, vector, list, forwardList, set, unorderedSet, mapString, uMapWString)
};

struct GlobalData
{
	BasicData basicData;
	ContainerData containerData;

	bool operator==(const GlobalData& other) const
	{
		return (basicData == other.basicData && containerData == other.containerData);
	}

	JSON_SERIALIZER(basicData, containerData)
};

int main()
{
	GlobalData data1{
		{ true, INT8_MIN, INT16_MIN, INT32_MIN, INT64_MIN, UINT8_MAX, UINT16_MAX, UINT32_MAX, UINT64_MAX, 13.37f, 13.37, "myString", L"myWString" },
		{ {2,1}, {3,2,1}, {4,3,2,1}, {5,4,3,2,1}, {6,5,4,3,2,1}, {7,6,5,4,3,2,1}, {{"B",2},{"A",1}}, {{L"D",4},{L"C",3}} }
	};

	std::stringstream stream;
	JsonSerializer::serialize(stream, data1);
	std::string json1 = stream.str();

	std::cout << "json1 = " << json1 << std::endl << std::endl;

	std::stringstream stream2(json1);
	GlobalData data2;
	JsonSerializer::deserialize(stream2, data2);

	std::stringstream stream3;
	JsonSerializer::serialize(stream3, data2);
	std::string json2 = stream3.str();

	std::cout << "json2 = " << json2 << std::endl << std::endl;

	if (data1 == data2)
	{
		std::cout << "Test succeed" << std::endl;
	}
	else
	{
		std::cout << "Test failed" << std::endl;
	}
}
