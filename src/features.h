#ifndef FEATURES_T_INCLUDE_H
#define FEATURES_T_INCLUDE_H

#include <stdexcept>
#include <unordered_map>
#include <vector>

namespace iron_learning
{
    typedef double feature_t;
    typedef std::size_t size_t;
    typedef std::unordered_map<size_t, feature_t> values_t;


    class features_t
    {
    public:
        features_t() = default;
        features_t(const values_t& values);
        features_t(const std::vector<feature_t>& values);
        features_t(const size_t size, const feature_t value);

        void set(const size_t position, const feature_t value);
        feature_t get(const size_t position);

        size_t dimension();

    private:
        values_t m_values;
        size_t m_position;
    };
}

#endif // FEATURES_T_INCLUDE_H

