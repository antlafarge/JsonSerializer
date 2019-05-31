#pragma once

#include <string>
#include <array>
#include <vector>
#include <list>
#include <forward_list>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <cpprest/json.h>

#define EXPAND(x) x
#define FOR_EACH_0(what, x, ...)
#define FOR_EACH_1(what, x, ...) what(x)
#define FOR_EACH_2(what, x, ...) what(x) EXPAND(FOR_EACH_1(what,  __VA_ARGS__))
#define FOR_EACH_3(what, x, ...) what(x) EXPAND(FOR_EACH_2(what, __VA_ARGS__))
#define FOR_EACH_4(what, x, ...) what(x) EXPAND(FOR_EACH_3(what,  __VA_ARGS__))
#define FOR_EACH_5(what, x, ...) what(x) EXPAND(FOR_EACH_4(what,  __VA_ARGS__))
#define FOR_EACH_6(what, x, ...) what(x) EXPAND(FOR_EACH_5(what,  __VA_ARGS__))
#define FOR_EACH_7(what, x, ...) what(x) EXPAND(FOR_EACH_6(what,  __VA_ARGS__))
#define FOR_EACH_8(what, x, ...) what(x) EXPAND(FOR_EACH_7(what,  __VA_ARGS__))
#define FOR_EACH_9(what, x, ...) what(x) EXPAND(FOR_EACH_8(what,  __VA_ARGS__))
#define FOR_EACH_10(what, x, ...) what(x) EXPAND(FOR_EACH_9(what,  __VA_ARGS__))
#define FOR_EACH_11(what, x, ...) what(x) EXPAND(FOR_EACH_10(what,  __VA_ARGS__))
#define FOR_EACH_12(what, x, ...) what(x) EXPAND(FOR_EACH_11(what,  __VA_ARGS__))
#define FOR_EACH_13(what, x, ...) what(x) EXPAND(FOR_EACH_12(what,  __VA_ARGS__))
#define FOR_EACH_14(what, x, ...) what(x) EXPAND(FOR_EACH_13(what,  __VA_ARGS__))
#define FOR_EACH_15(what, x, ...) what(x) EXPAND(FOR_EACH_14(what,  __VA_ARGS__))
#define FOR_EACH_16(what, x, ...) what(x) EXPAND(FOR_EACH_15(what,  __VA_ARGS__))
#define FOR_EACH_17(what, x, ...) what(x) EXPAND(FOR_EACH_16(what,  __VA_ARGS__))
#define FOR_EACH_18(what, x, ...) what(x) EXPAND(FOR_EACH_17(what,  __VA_ARGS__))
#define FOR_EACH_19(what, x, ...) what(x) EXPAND(FOR_EACH_18(what,  __VA_ARGS__))
#define FOR_EACH_20(what, x, ...) what(x) EXPAND(FOR_EACH_19(what,  __VA_ARGS__))
#define FOR_EACH_21(what, x, ...) what(x) EXPAND(FOR_EACH_20(what,  __VA_ARGS__))
#define FOR_EACH_22(what, x, ...) what(x) EXPAND(FOR_EACH_21(what,  __VA_ARGS__))
#define FOR_EACH_23(what, x, ...) what(x) EXPAND(FOR_EACH_22(what,  __VA_ARGS__))
#define FOR_EACH_24(what, x, ...) what(x) EXPAND(FOR_EACH_23(what,  __VA_ARGS__))
#define FOR_EACH_25(what, x, ...) what(x) EXPAND(FOR_EACH_24(what,  __VA_ARGS__))
#define FOR_EACH_26(what, x, ...) what(x) EXPAND(FOR_EACH_25(what,  __VA_ARGS__))
#define FOR_EACH_27(what, x, ...) what(x) EXPAND(FOR_EACH_26(what,  __VA_ARGS__))
#define FOR_EACH_28(what, x, ...) what(x) EXPAND(FOR_EACH_27(what,  __VA_ARGS__))
#define FOR_EACH_29(what, x, ...) what(x) EXPAND(FOR_EACH_28(what,  __VA_ARGS__))
#define FOR_EACH_30(what, x, ...) what(x) EXPAND(FOR_EACH_29(what,  __VA_ARGS__))
#define FOR_EACH_31(what, x, ...) what(x) EXPAND(FOR_EACH_30(what,  __VA_ARGS__))
#define FOR_EACH_32(what, x, ...) what(x) EXPAND(FOR_EACH_31(what,  __VA_ARGS__))
#define FOR_EACH_33(what, x, ...) what(x) EXPAND(FOR_EACH_32(what,  __VA_ARGS__))
#define FOR_EACH_34(what, x, ...) what(x) EXPAND(FOR_EACH_33(what,  __VA_ARGS__))
#define FOR_EACH_35(what, x, ...) what(x) EXPAND(FOR_EACH_34(what,  __VA_ARGS__))
#define FOR_EACH_36(what, x, ...) what(x) EXPAND(FOR_EACH_35(what,  __VA_ARGS__))
#define FOR_EACH_37(what, x, ...) what(x) EXPAND(FOR_EACH_36(what,  __VA_ARGS__))
#define FOR_EACH_38(what, x, ...) what(x) EXPAND(FOR_EACH_37(what,  __VA_ARGS__))
#define FOR_EACH_39(what, x, ...) what(x) EXPAND(FOR_EACH_38(what,  __VA_ARGS__))
#define FOR_EACH_40(what, x, ...) what(x) EXPAND(FOR_EACH_39(what,  __VA_ARGS__))
#define FOR_EACH_41(what, x, ...) what(x) EXPAND(FOR_EACH_40(what,  __VA_ARGS__))
#define FOR_EACH_42(what, x, ...) what(x) EXPAND(FOR_EACH_41(what,  __VA_ARGS__))
#define FOR_EACH_43(what, x, ...) what(x) EXPAND(FOR_EACH_42(what,  __VA_ARGS__))
#define FOR_EACH_44(what, x, ...) what(x) EXPAND(FOR_EACH_43(what,  __VA_ARGS__))
#define FOR_EACH_45(what, x, ...) what(x) EXPAND(FOR_EACH_44(what,  __VA_ARGS__))
#define FOR_EACH_46(what, x, ...) what(x) EXPAND(FOR_EACH_45(what,  __VA_ARGS__))
#define FOR_EACH_47(what, x, ...) what(x) EXPAND(FOR_EACH_46(what,  __VA_ARGS__))
#define FOR_EACH_48(what, x, ...) what(x) EXPAND(FOR_EACH_47(what,  __VA_ARGS__))
#define FOR_EACH_49(what, x, ...) what(x) EXPAND(FOR_EACH_48(what,  __VA_ARGS__))
#define FOR_EACH_50(what, x, ...) what(x) EXPAND(FOR_EACH_49(what,  __VA_ARGS__))

#ifdef _MSC_VER // Microsoft compilers
#   define ARGS_COUNT(...) EXPAND_ARGS_PRIVATE(ARGS_AUGMENTER(__VA_ARGS__))
#   define ARGS_AUGMENTER(...) unused, __VA_ARGS__
#   define EXPAND_ARGS_PRIVATE(...) EXPAND(ARGS_COUNT_PRIVATE(__VA_ARGS__, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0))
#   define ARGS_COUNT_PRIVATE(_1_, _2_, _3_, _4_, _5_, _6_, _7_, _8_, _9_, _10_, _11_, _12_, _13_, _14_, _15_, _16_, _17_, _18_, _19_, _20_, _21_, _22_, _23_, _24_, _25_, _26_, _27_, _28_, _29_, _30_, _31_, _32_, _33_, _34_, _35_, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, unused, count, ...) count
#else // Non-Microsoft compilers
#   define ARGS_COUNT(...) ARGS_COUNT_PRIVATE(0, ## __VA_ARGS__, 50, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0)
#   define ARGS_COUNT_PRIVATE(_0, _1_, _2_, _3_, _4_, _5_, _6_, _7_, _8_, _9_, _10_, _11_, _12_, _13_, _14_, _15_, _16_, _17_, _18_, _19_, _20_, _21_, _22_, _23_, _24_, _25_, _26_, _27_, _28_, _29_, _30_, _31_, _32_, _33_, _34_, _35_, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, count, ...) count
#endif

#define CONCATENATE(x,y) x##y
#define FOR_EACH_(N, what, ...) EXPAND(CONCATENATE(FOR_EACH_, N)(what, __VA_ARGS__))
#define FOR_EACH(what, ...) FOR_EACH_(ARGS_COUNT(__VA_ARGS__), what, __VA_ARGS__)

#define JSON_ADD_FIELD_NAME(A) , #A, A

#define JSON_SERIALIZER(...) \
operator web::json::value() const \
{ \
	web::json::value jsonValue; \
	JsonSerializer::JsonSerializerImpl::serialize(jsonValue FOR_EACH(JSON_ADD_FIELD_NAME, __VA_ARGS__)); \
	return jsonValue; \
} \
void deserializeFromJson(const web::json::value& jsonValue) \
{ \
	JsonSerializer::JsonSerializerImpl::deserialize(jsonValue FOR_EACH(JSON_ADD_FIELD_NAME, __VA_ARGS__)); \
}

const std::string errorSerializationMsg = "Json serialization failed";
const std::string errorDeserializationMsg = "Json deserialization failed";

class JsonSerializer
{
public:

#pragma region serialize

	template<typename TFirstSerializableObject, typename... TSerializableObjects>
	static void serialize(std::ostream& stream, const TFirstSerializableObject& first, const TSerializableObjects& ... others)
	{
		auto jsonValue = JsonSerializerImpl::serializeObject(first);
		jsonValue.serialize(stream);
		JsonSerializer::serialize(stream, others...);
	}

	static void serialize(std::ostream&)
	{
	}

#pragma endregion

#pragma region deserialize
	
	template<typename TFirstSerializableObject, typename... TSerializableObjects>
	static void deserialize(std::istream& stream, TFirstSerializableObject& first, TSerializableObjects& ... others)
	{
		JsonSerializerImpl::deserializeObject(web::json::value::parse(stream), first);
		JsonSerializer::deserialize(stream, others...);
	}

	static void deserialize(std::istream&)
	{
	}

	template<typename TDeserializableObjec>
	static TDeserializableObjec deserializeOne(std::istream& stream)
	{
		TDeserializableObjec object;
		JsonSerializer::deserialize(stream, object);
		return object;
	}

#pragma endregion

#pragma region JsonSerializerImpl

	class JsonSerializerImpl
	{
	public:

#pragma region serialize

		template<typename TString, typename TValue, typename... Args>
		static void serialize(web::json::value& jsonValue, const TString& name, const TValue& value, const Args& ... args)
		{
			jsonValue[utility::conversions::to_string_t(name)] = JsonSerializerImpl::serializeObject(value);
			JsonSerializerImpl::serialize(jsonValue, args...);
		}

		static void serialize(web::json::value&)
		{
		}

#pragma endregion

#pragma region deserialize

		template<typename TString, typename TValue, typename... Args>
		static void deserialize(const web::json::value& jsonValue, const TString& name, TValue& value, Args& ... args)
		{
			JsonSerializerImpl::deserializeObject(jsonValue.at(utility::conversions::to_string_t(name)), value);
			JsonSerializerImpl::deserialize(jsonValue, args...);
		}

		static void deserialize(const web::json::value&)
		{
		}

#pragma endregion

#pragma region serializeObject

		template<typename T>
		static web::json::value serializeObject(const T& serializableObject)
		{
			return web::json::value(serializableObject);
		}

		template<>
		static web::json::value serializeObject<int8_t>(const int8_t& number)
		{
			return web::json::value(static_cast<int32_t>(number));
		}

		template<>
		static web::json::value serializeObject<int16_t>(const int16_t& number)
		{
			return web::json::value(static_cast<int32_t>(number));
		}

		template<>
		static web::json::value serializeObject<uint8_t>(const uint8_t& number)
		{
			return web::json::value(static_cast<uint32_t>(number));
		}

		template<>
		static web::json::value serializeObject<uint16_t>(const uint16_t& number)
		{
			return web::json::value(static_cast<uint32_t>(number));
		}

		template<>
		static web::json::value serializeObject<float>(const float& number)
		{
			return web::json::value(static_cast<const double>(number));
		}

		template<>
		static web::json::value serializeObject<std::string>(const std::string& str)
		{
			return web::json::value(utility::conversions::to_string_t(str));
		}

		template<>
		static web::json::value serializeObject<std::wstring>(const std::wstring& str)
		{
			return web::json::value(utility::conversions::to_string_t(str));
		}

		template<typename T, std::size_t TSize>
		static web::json::value serializeObject(const std::array<T, TSize>& array)
		{
			auto jsonArray = web::json::value::array();
			std::size_t i = 0;
			for (auto const& elem : array)
			{
				jsonArray[i] = JsonSerializerImpl::serializeObject(elem);
				i++;
			}
			return jsonArray;
		}

		template<typename T>
		static web::json::value serializeObject(const std::vector<T>& vector)
		{
			auto jsonArray = web::json::value::array();
			std::size_t i = 0;
			for (auto const& elem : vector)
			{
				jsonArray[i] = JsonSerializerImpl::serializeObject(elem);
				i++;
			}
			return jsonArray;
		}

		template<typename T>
		static web::json::value serializeObject(const std::list<T>& list)
		{
			auto jsonArray = web::json::value::array();
			std::size_t i = 0;
			for (auto const& elem : list)
			{
				jsonArray[i] = JsonSerializerImpl::serializeObject(elem);
				i++;
			}
			return jsonArray;
		}

		template<typename T>
		static web::json::value serializeObject(const std::forward_list<T>& list)
		{
			auto jsonArray = web::json::value::array();
			std::size_t i = 0;
			for (auto const& elem : list)
			{
				jsonArray[i] = JsonSerializerImpl::serializeObject(elem);
				i++;
			}
			return jsonArray;
		}

		template<typename T>
		static web::json::value serializeObject(const std::set<T>& set)
		{
			auto jsonArray = web::json::value::array();
			std::size_t i = 0;
			for (auto const& elem : set)
			{
				jsonArray[i] = JsonSerializerImpl::serializeObject(elem);
				i++;
			}
			return jsonArray;
		}

		template<typename T>
		static web::json::value serializeObject(const std::unordered_set<T>& set)
		{
			auto jsonArray = web::json::value::array();
			std::size_t i = 0;
			for (auto const& elem : set)
			{
				jsonArray[i] = JsonSerializerImpl::serializeObject(elem);
				i++;
			}
			return jsonArray;
		}

		template<typename T1, typename T2>
		static web::json::value serializeObject(const std::map<T1, T2>& map)
		{
			web::json::value jsonMap;
			for (auto const& pair : map)
			{
				jsonMap[utility::conversions::to_string_t(pair.first)] = JsonSerializerImpl::serializeObject(pair.second);
			}
			return jsonMap;
		}

		template<typename T1, typename T2>
		static web::json::value serializeObject(const std::unordered_map<T1, T2>& map)
		{
			web::json::value jsonMap;
			for (auto const& pair : map)
			{
				jsonMap[utility::conversions::to_string_t(pair.first)] = JsonSerializerImpl::serializeObject(pair.second);
			}
			return jsonMap;
		}

#pragma endregion

#pragma region deserializeObject

		template<typename TValue>
		static void deserializeObject(const web::json::value& jsonValue, TValue& deserializableObject)
		{
			deserializableObject.deserializeFromJson(jsonValue);
		}

		template<>
		static void deserializeObject<bool>(const web::json::value& jsonValue, bool& boolean)
		{
			if (!jsonValue.is_boolean())
			{
				throw std::runtime_error(errorDeserializationMsg + ": Not a boolean.");
			}

			boolean = jsonValue.as_bool();
		}

		template<>
		static void deserializeObject<int8_t>(const web::json::value& jsonValue, int8_t& number)
		{
			if (!jsonValue.is_number())
			{
				throw std::runtime_error(errorDeserializationMsg + ": Not a number.");
			}

			number = static_cast<int8_t>(jsonValue.as_number().to_int32());
		}

		template<>
		static void deserializeObject<int16_t>(const web::json::value& jsonValue, int16_t& number)
		{
			if (!jsonValue.is_number())
			{
				throw std::runtime_error(errorDeserializationMsg + ": Not a number.");
			}

			number = static_cast<int16_t>(jsonValue.as_number().to_int32());
		}

		template<>
		static void deserializeObject<int32_t>(const web::json::value& jsonValue, int32_t& number)
		{
			if (!jsonValue.is_number())
			{
				throw std::runtime_error(errorDeserializationMsg + ": Not a number.");
			}

			number = jsonValue.as_number().to_int32();
		}

		template<>
		static void deserializeObject<int64_t>(const web::json::value& jsonValue, int64_t& number)
		{
			if (!jsonValue.is_number())
			{
				throw std::runtime_error(errorDeserializationMsg + ": Not a number.");
			}

			number = jsonValue.as_number().to_int64();
		}

		template<>
		static void deserializeObject<uint8_t>(const web::json::value& jsonValue, uint8_t& number)
		{
			if (!jsonValue.is_number())
			{
				throw std::runtime_error(errorDeserializationMsg + ": Not a number.");
			}

			number = static_cast<uint8_t>(jsonValue.as_number().to_uint32());
		}

		template<>
		static void deserializeObject<uint16_t>(const web::json::value& jsonValue, uint16_t& number)
		{
			if (!jsonValue.is_number())
			{
				throw std::runtime_error(errorDeserializationMsg + ": Not a number.");
			}

			number = static_cast<uint16_t>(jsonValue.as_number().to_uint32());
		}

		template<>
		static void deserializeObject<uint32_t>(const web::json::value& jsonValue, uint32_t& number)
		{
			if (!jsonValue.is_number())
			{
				throw std::runtime_error(errorDeserializationMsg + ": Not a number.");
			}

			number = jsonValue.as_number().to_uint32();
		}

		template<>
		static void deserializeObject<uint64_t>(const web::json::value& jsonValue, uint64_t& number)
		{
			if (!jsonValue.is_number())
			{
				throw std::runtime_error(errorDeserializationMsg + ": Not a number.");
			}

			number = jsonValue.as_number().to_uint64();
		}

		template<>
		static void deserializeObject<float>(const web::json::value& jsonValue, float& number)
		{
			if (!jsonValue.is_double())
			{
				throw std::runtime_error(errorDeserializationMsg + ": Not a floating point number.");
			}

			number = static_cast<float>(jsonValue.as_double());
		}

		template<>
		static void deserializeObject<double>(const web::json::value& jsonValue, double& number)
		{
			if (!jsonValue.is_double())
			{
				throw std::runtime_error(errorDeserializationMsg + ": Not a floating point number.");
			}

			number = jsonValue.as_double();
		}

		template<>
		static void deserializeObject<std::string>(const web::json::value& jsonValue, std::string& str)
		{
			if (!jsonValue.is_string())
			{
				throw std::runtime_error(errorDeserializationMsg + ": Not a string.");
			}

			str = utility::conversions::to_utf8string(jsonValue.as_string());
		}

		template<>
		static void deserializeObject<std::wstring>(const web::json::value& jsonValue, std::wstring& str)
		{
			if (!jsonValue.is_string())
			{
				throw std::runtime_error(errorDeserializationMsg + ": Not a string.");
			}

			str = utility::conversions::to_utf16string(jsonValue.as_string());
		}

		template<typename T, std::size_t TSize>
		static void deserializeObject(const web::json::value& jsonValue, std::array<T, TSize>& array)
		{
			if (!jsonValue.is_array())
			{
				throw std::runtime_error(errorDeserializationMsg + ": Not an array.");
			}

			auto jsonArray = jsonValue.as_array();
			auto size = std::min(jsonValue.size(), TSize);

			for (std::size_t i = 0; i < size; i++)
			{
				T t;
				JsonSerializerImpl::deserializeObject<T>(jsonArray[i], t);
				array[i] = t;
			}
		}

		template<typename T>
		static void deserializeObject(const web::json::value& jsonValue, std::vector<T>& vector)
		{
			if (!jsonValue.is_array())
			{
				throw std::runtime_error(errorDeserializationMsg + ": Not an array.");
			}

			auto jsonArray = jsonValue.as_array();
			auto size = jsonArray.size();

			if (vector.size() != size)
			{
				vector.resize(size);
			}

			for (std::size_t i = 0; i < size; i++)
			{
				T t;
				JsonSerializerImpl::deserializeObject<T>(jsonArray[i], t);
				vector[i] = t;
			}
		}

		template<typename T>
		static void deserializeObject(const web::json::value& jsonValue, std::list<T>& list)
		{
			if (!jsonValue.is_array())
			{
				throw std::runtime_error(errorDeserializationMsg + ": Not an array.");
			}

			auto jsonArray = jsonValue.as_array();
			auto size = jsonArray.size();

			if (list.size() != size)
			{
				list.resize(size);
			}

			auto listIt = list.begin();
			for (std::size_t i = 0; i < size; i++)
			{
				T& t = *listIt;
				JsonSerializerImpl::deserializeObject<T>(jsonArray[i], t);
				listIt++;
			}
		}

		template<typename T>
		static void deserializeObject(const web::json::value& jsonValue, std::forward_list<T>& list)
		{
			if (!jsonValue.is_array())
			{
				throw std::runtime_error(errorDeserializationMsg + ": Not an array.");
			}

			auto jsonArray = jsonValue.as_array();
			auto size = jsonArray.size();

			list.resize(size);

			auto listIt = list.begin();
			for (std::size_t i = 0; i < size; i++)
			{
				T& t = *listIt;
				JsonSerializerImpl::deserializeObject<T>(jsonArray[i], t);
				listIt++;
			}
		}

		template<typename T>
		static void deserializeObject(const web::json::value& jsonValue, std::set<T>& set)
		{
			if (!jsonValue.is_array())
			{
				throw std::runtime_error(errorDeserializationMsg + ": Not an array.");
			}

			auto jsonArray = jsonValue.as_array();
			auto size = jsonArray.size();

			for (std::size_t i = 0; i < size; i++)
			{
				T t;
				JsonSerializerImpl::deserializeObject<T>(jsonArray[i], t);
				set.insert(t);
			}
		}

		template<typename T>
		static void deserializeObject(const web::json::value& jsonValue, std::unordered_set<T>& set)
		{
			if (!jsonValue.is_array())
			{
				throw std::runtime_error(errorDeserializationMsg + ": Not an array.");
			}

			auto jsonArray = jsonValue.as_array();
			auto size = jsonArray.size();

			for (std::size_t i = 0; i < size; i++)
			{
				T t;
				JsonSerializerImpl::deserializeObject<T>(jsonArray[i], t);
				set.insert(t);
			}
		}

		template<typename TString, typename T>
		static void deserializeObject(const web::json::value& jsonValue, std::map<TString, T>& map)
		{
			if (!jsonValue.is_object())
			{
				throw std::runtime_error(errorDeserializationMsg + ": Not an object.");
			}

			for (auto const& pair : jsonValue.as_object())
			{
				JsonSerializerImpl::deserializeObject<T>(pair.second, map[JsonSerializerImpl::to_string<TString>(pair.first)]);
			}
		}

		template<typename TString, typename T>
		static void deserializeObject(const web::json::value& jsonValue, std::unordered_map<TString, T>& map)
		{
			if (!jsonValue.is_object())
			{
				throw std::runtime_error(errorDeserializationMsg + ": Not an object.");
			}

			for (auto const& pair : jsonValue.as_object())
			{
				JsonSerializerImpl::deserializeObject<T>(pair.second, map[JsonSerializerImpl::to_string<TString>(pair.first)]);
			}
		}

#pragma endregion

#pragma region string_convert

		// Convert to string type to the templated type

		template<typename T>
		static T to_string(const utility::string_t& string) = delete;

		template<>
		static std::string to_string(const utility::string_t& string)
		{
			return utility::conversions::to_utf8string(string);
		}

		template<>
		static std::wstring to_string(const utility::string_t& string)
		{
			return utility::conversions::to_utf16string(string);
		}

#pragma endregion
	};

#pragma endregion
};
