#pragma once
#include <tuple>
#include <type_traits>

// Global Vars
template<typename... T>
struct GlobalVars
{
	using type = std::tuple<std::add_lvalue_reference<T>...>;
};

template<typename... T>
struct is_GlobalVars
{
	static constexpr bool value = false;
};

template<typename... T>
struct is_GlobalVars<GlobalVars<T...>>
{
	static constexpr bool value = true;
};

template<typename T>
constexpr bool is_GlobalVars_v = is_GlobalVars<T>::value;

// Local Vars
template<typename... T>
struct LocalVars
{
	using type = std::tuple<std::add_lvalue_reference<T>...>;
};


template<typename... T>
struct is_LocalVars
{
	static constexpr bool value = false;
};

template<typename... T>
struct is_LocalVars<LocalVars<T...>>
{
	static constexpr bool value = true;
};

template<typename T>
constexpr bool is_LocalVars_v = is_LocalVars<T>::value;