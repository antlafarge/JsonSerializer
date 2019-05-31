#pragma once

#include <sstream>
#include "JsonSerializer.h"

class OJsonStream : public std::ostringstream
{
public:

	template<typename T>
	OJsonStream& operator<<(const T& object)
	{
		JsonSerializer::serialize(*this, object);
		return *this;
	}
};

class IJsonStream : public std::istringstream
{
public:

	IJsonStream() = default;

	IJsonStream(const std::string& json)
		: std::istringstream(json)
	{
	}

	template<typename T>
	IJsonStream& operator>>(T& object)
	{
		JsonSerializer::deserialize(*this, object);
		return *this;
	}
};

class JsonStream : public std::stringstream
{
public:

	JsonStream() = default;

	JsonStream(const std::string& json)
		: std::stringstream(json)
	{
	}

	template<typename T>
	JsonStream& operator<<(const T& object)
	{
		JsonSerializer::serialize(*this, object);
		return *this;
	}

	template<typename T>
	JsonStream& operator>>(T& object)
	{
		JsonSerializer::deserialize(*this, object);
		return *this;
	}
};
