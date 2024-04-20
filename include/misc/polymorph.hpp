
#pragma once
#include <memory>
#include <string>

template<typename InnerStruct> 
class Polymorph {
    public: 
        
        Polymorph(const Polymorph& other)
            : ptr(other.ptr), cpp_type_info_str(other.cpp_type_info_str) { }

        template<typename ConcreteInnerStruct> 
        Polymorph(const ConcreteInnerStruct& type){ 
                    ptr = std::make_shared<ConcreteInnerStruct>(type); 
                    cpp_type_info_str = typeid(ConcreteInnerStruct).name();
        }

        template<typename ConcreteInnerStruct> 
        bool is() const { 
                return cpp_type_info_str == typeid(ConcreteInnerStruct).name(); 
        }
        
        template<typename ConcreteInnerStruct> 
        const ConcreteInnerStruct& get() const { 
                
                //this function it's in "errors/internal_errors.hpp" but
                //include is impossible because it causes cyclic dependencies
                //between header files and this leads to compilation failure
                void assert_get_operation_is_possible(
                    const std::string& wanted_type, 
                    const std::type_info& type_info
                );
                
                assert_get_operation_is_possible(cpp_type_info_str, typeid(ConcreteInnerStruct)); 
                return *((ConcreteInnerStruct*)(ptr.get()));
        }

        template<typename ConcreteInnerStruct> 
        ConcreteInnerStruct& get() { 
                return const_cast<ConcreteInnerStruct&>(
                    static_cast<const Polymorph&>(*this).get<ConcreteInnerStruct>()
                );
        }

    protected:
        std::shared_ptr<InnerStruct> ptr;
        std::string cpp_type_info_str;
};