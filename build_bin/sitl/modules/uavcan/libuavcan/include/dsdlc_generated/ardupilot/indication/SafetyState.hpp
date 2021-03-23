/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /ardupilot/libraries/AP_UAVCAN/dsdl/ardupilot/indication/20000.SafetyState.uavcan
 */

#ifndef ARDUPILOT_INDICATION_SAFETYSTATE_HPP_INCLUDED
#define ARDUPILOT_INDICATION_SAFETYSTATE_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
#
# support for Safety LED on UAVCAN

uint8 STATUS_SAFETY_ON           = 0
uint8 STATUS_SAFETY_OFF          = 255

uint8 status
******************************************************************************/

/********************* DSDL signature source definition ***********************
ardupilot.indication.SafetyState
saturated uint8 status
******************************************************************************/

#undef status
#undef STATUS_SAFETY_ON
#undef STATUS_SAFETY_OFF

namespace ardupilot
{
namespace indication
{

template <int _tmpl>
struct UAVCAN_EXPORT SafetyState_
{
    typedef const SafetyState_<_tmpl>& ParameterType;
    typedef SafetyState_<_tmpl>& ReferenceType;

    struct ConstantTypes
    {
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > STATUS_SAFETY_ON;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > STATUS_SAFETY_OFF;
    };

    struct FieldTypes
    {
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > status;
    };

    enum
    {
        MinBitLen
            = FieldTypes::status::MinBitLen
    };

    enum
    {
        MaxBitLen
            = FieldTypes::status::MaxBitLen
    };

    // Constants
    static const typename ::uavcan::StorageType< typename ConstantTypes::STATUS_SAFETY_ON >::Type STATUS_SAFETY_ON; // 0
    static const typename ::uavcan::StorageType< typename ConstantTypes::STATUS_SAFETY_OFF >::Type STATUS_SAFETY_OFF; // 255

    // Fields
    typename ::uavcan::StorageType< typename FieldTypes::status >::Type status;

    SafetyState_()
        : status()
    {
        ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

#if UAVCAN_DEBUG
        /*
         * Cross-checking MaxBitLen provided by the DSDL compiler.
         * This check shall never be performed in user code because MaxBitLen value
         * actually depends on the nested types, thus it is not invariant.
         */
        ::uavcan::StaticAssert<8 == MaxBitLen>::check();
#endif
    }

    bool operator==(ParameterType rhs) const;
    bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

    /**
     * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
     * floating point fields at any depth.
     */
    bool isClose(ParameterType rhs) const;

    static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                      ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                      ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindMessage };
    enum { DefaultDataTypeID = 20000 };

    static const char* getDataTypeFullName()
    {
        return "ardupilot.indication.SafetyState";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

};

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool SafetyState_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        status == rhs.status;
}

template <int _tmpl>
bool SafetyState_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(status, rhs.status);
}

template <int _tmpl>
int SafetyState_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::status::encode(self.status, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int SafetyState_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::status::decode(self.status, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
template <int _tmpl>
::uavcan::DataTypeSignature SafetyState_<_tmpl>::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0xE965701A95A1A6A1ULL);

    FieldTypes::status::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

template <int _tmpl>
const typename ::uavcan::StorageType< typename SafetyState_<_tmpl>::ConstantTypes::STATUS_SAFETY_ON >::Type
    SafetyState_<_tmpl>::STATUS_SAFETY_ON = 0U; // 0

template <int _tmpl>
const typename ::uavcan::StorageType< typename SafetyState_<_tmpl>::ConstantTypes::STATUS_SAFETY_OFF >::Type
    SafetyState_<_tmpl>::STATUS_SAFETY_OFF = 255U; // 255

/*
 * Final typedef
 */
typedef SafetyState_<0> SafetyState;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::ardupilot::indication::SafetyState > _uavcan_gdtr_registrator_SafetyState;

}

} // Namespace indication
} // Namespace ardupilot

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::ardupilot::indication::SafetyState >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::ardupilot::indication::SafetyState::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::ardupilot::indication::SafetyState >::stream(Stream& s, ::ardupilot::indication::SafetyState::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "status: ";
    YamlStreamer< ::ardupilot::indication::SafetyState::FieldTypes::status >::stream(s, obj.status, level + 1);
}

}

namespace ardupilot
{
namespace indication
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::ardupilot::indication::SafetyState::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::ardupilot::indication::SafetyState >::stream(s, obj, 0);
    return s;
}

} // Namespace indication
} // Namespace ardupilot

#endif // ARDUPILOT_INDICATION_SAFETYSTATE_HPP_INCLUDED