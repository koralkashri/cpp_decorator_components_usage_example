#ifndef CPP_DECORATOR_COMPONENTS_USAGE_EXAMPLE_COMPONENTS_TOOLS_CONCEPTS_CONCEPTS_H
#define CPP_DECORATOR_COMPONENTS_USAGE_EXAMPLE_COMPONENTS_TOOLS_CONCEPTS_CONCEPTS_H

#include <type_traits>

//namespace components::tools {

    template<typename T, typename Base>
    concept components_tools_Component = std::is_base_of_v<Base, T>;
//}
#endif //CPP_DECORATOR_COMPONENTS_USAGE_EXAMPLE_COMPONENTS_TOOLS_CONCEPTS_CONCEPTS_H