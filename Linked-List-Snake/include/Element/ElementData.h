#pragma once

#include <SFML/System/Vector2.hpp>

namespace Element
{
    using namespace sf;

    enum class ElementType
    {
        OBSTACLE,
    };

    struct ElementData
    {
        ElementData(ElementType type, Vector2i pos)
        {
            element_type = type;
            position = pos;
        }

        ElementType element_type;
        Vector2i position;
    };
}