#pragma once

#include <glbinding/AbstractFunction.h>

namespace gl {

template <typename ReturnType, typename... Arguments>
class Function : public AbstractFunction
{
public:
    using Signature = ReturnType (*) (Arguments...);

    Function(const char * name);

    ReturnType operator()(Arguments... arguments);
};

} // namespace gl

#include <glbinding/Function.hpp>
