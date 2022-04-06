#ifndef UNITS_H__
#define UNITS_H__

template <int ... Values>
struct static_vector
{};


template <typename Vector, int Added>
struct push_back
{};

template <int Added, int ... Values>
struct push_back<static_vector<Values ...>, Added>
{
    using type = static_vector<Values ..., Added>;
};


template <typename Vector, size_t Index>
struct at
{};

template <int Head, int ... Tail>
struct at<static_vector<Head, Tail ...>, 0>
{
    static constexpr auto value = Head;
};

template <size_t Index, int Head, int ... Tail>
struct at<static_vector<Head, Tail ...>, Index>
{
    static constexpr auto value = at<static_vector<Tail ...>, Index - 1>::value;
};


template <typename TEnum, typename TPowers>
struct unit {

	TEnum type;
	static_vector v ;
};

template <typename TEnum, TEnum Index>
using basic_unit = 

template <typename TFirstUnit, typename ... TOtherUnits>
using multiplied_unit =

template <typename TDividendUnit, typename TDivisorDimension>
using divided_unit =

template <typename TUnit, typename TValue = double>
struct quantity;

#endif // !UNITS_H__

