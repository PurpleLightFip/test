#include <features.h>

namespace iron_learning
{
        features_t::features_t(const values_t& values)
        {
            m_value = values;
            m_dimension = values.size();
        }

        features_t::features_t(const std::vector<feature_t>& values)
        {
            m_dimension = values.size();

            feature_t value = 0.0;

            for (size_t index = 0; index < m_dimension; ++index)
            {
                value = vector[index];
                if (value != 0)
                    m_values.insert(std::pair<size_t, feature_t>(index, value));
            }
        }

        features_t::features_t(const size_t size, const feature_t value)
        {
            m_dimension = size;

            for (size_t index = 0; index < m_dimension; ++index)
                m_values.insert(std::pair<size_t, feature_t>(index, value));
        }

        void features_t::set(const size position, const feature_t value)
        {
            if (position > m_dimension)
                throw std::out_of_range();

            m_values.insert(std::pair<size_t, feature_t>(position, value));
        }

        feature_t features_t::get(const size position)
        {
            if (position > m_dimension)
                throw std::out_of_range();

            feature_t value = m_values.find(position)->second;

            if (value != 0)
                return value;

            return 0;
        }

        features_t::dimension()
	{
		return m_dimension;
	}
}
