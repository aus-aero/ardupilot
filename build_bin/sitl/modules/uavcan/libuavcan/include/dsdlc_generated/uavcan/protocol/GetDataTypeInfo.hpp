/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /ardupilot/modules/uavcan/dsdl/uavcan/protocol/2.GetDataTypeInfo.uavcan
 */

#ifndef UAVCAN_PROTOCOL_GETDATATYPEINFO_HPP_INCLUDED
#define UAVCAN_PROTOCOL_GETDATATYPEINFO_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

#include <uavcan/protocol/DataTypeKind.hpp>

/******************************* Source text **********************************
#
# Get the implementation details of a given data type.
#
# Request is interpreted as follows:
#  - If the field 'name' is empty, the fields 'kind' and 'id' will be used to identify the data type.
#  - If the field 'name' is non-empty, it will be used to identify the data type; the
#    fields 'kind' and 'id' will be ignored.
#

uint16 id                   # Ignored if 'name' is non-empty
DataTypeKind kind           # Ignored if 'name' is non-empty

uint8[<=80] name            # Full data type name, e.g. "uavcan.protocol.GetDataTypeInfo"

---

uint64 signature            # Data type signature; valid only if the data type is known (see FLAG_KNOWN)

uint16 id                   # Valid only if the data type is known (see FLAG_KNOWN)
DataTypeKind kind           # Ditto

uint8 FLAG_KNOWN      = 1   # This data type is defined
uint8 FLAG_SUBSCRIBED = 2   # Subscribed to messages of this type
uint8 FLAG_PUBLISHING = 4   # Publishing messages of this type
uint8 FLAG_SERVING    = 8   # Providing service of this type
uint8 flags

uint8[<=80] name            # Full data type name
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.protocol.GetDataTypeInfo
saturated uint16 id
uavcan.protocol.DataTypeKind kind
saturated uint8[<=80] name
---
saturated uint64 signature
saturated uint16 id
uavcan.protocol.DataTypeKind kind
saturated uint8 flags
saturated uint8[<=80] name
******************************************************************************/

#undef id
#undef kind
#undef name
#undef signature
#undef id
#undef kind
#undef flags
#undef name
#undef FLAG_KNOWN
#undef FLAG_SUBSCRIBED
#undef FLAG_PUBLISHING
#undef FLAG_SERVING

namespace uavcan
{
namespace protocol
{

struct UAVCAN_EXPORT GetDataTypeInfo_
{
    template <int _tmpl>
    struct Request_
    {
        typedef const Request_<_tmpl>& ParameterType;
        typedef Request_<_tmpl>& ReferenceType;

        struct ConstantTypes
        {
        };

        struct FieldTypes
        {
            typedef ::uavcan::IntegerSpec< 16, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > id;
            typedef ::uavcan::protocol::DataTypeKind kind;
            typedef ::uavcan::Array< ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeDynamic, 80 > name;
        };

        enum
        {
            MinBitLen
                = FieldTypes::id::MinBitLen
                + FieldTypes::kind::MinBitLen
                + FieldTypes::name::MinBitLen
        };

        enum
        {
            MaxBitLen
                = FieldTypes::id::MaxBitLen
                + FieldTypes::kind::MaxBitLen
                + FieldTypes::name::MaxBitLen
        };

        // Constants

        // Fields
        typename ::uavcan::StorageType< typename FieldTypes::id >::Type id;
        typename ::uavcan::StorageType< typename FieldTypes::kind >::Type kind;
        typename ::uavcan::StorageType< typename FieldTypes::name >::Type name;

        Request_()
            : id()
            , kind()
            , name()
        {
            ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

    #if UAVCAN_DEBUG
            /*
             * Cross-checking MaxBitLen provided by the DSDL compiler.
             * This check shall never be performed in user code because MaxBitLen value
             * actually depends on the nested types, thus it is not invariant.
             */
            ::uavcan::StaticAssert<671 == MaxBitLen>::check();
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

    };

    template <int _tmpl>
    struct Response_
    {
        typedef const Response_<_tmpl>& ParameterType;
        typedef Response_<_tmpl>& ReferenceType;

        struct ConstantTypes
        {
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > FLAG_KNOWN;
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > FLAG_SUBSCRIBED;
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > FLAG_PUBLISHING;
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > FLAG_SERVING;
        };

        struct FieldTypes
        {
            typedef ::uavcan::IntegerSpec< 64, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > signature;
            typedef ::uavcan::IntegerSpec< 16, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > id;
            typedef ::uavcan::protocol::DataTypeKind kind;
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > flags;
            typedef ::uavcan::Array< ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeDynamic, 80 > name;
        };

        enum
        {
            MinBitLen
                = FieldTypes::signature::MinBitLen
                + FieldTypes::id::MinBitLen
                + FieldTypes::kind::MinBitLen
                + FieldTypes::flags::MinBitLen
                + FieldTypes::name::MinBitLen
        };

        enum
        {
            MaxBitLen
                = FieldTypes::signature::MaxBitLen
                + FieldTypes::id::MaxBitLen
                + FieldTypes::kind::MaxBitLen
                + FieldTypes::flags::MaxBitLen
                + FieldTypes::name::MaxBitLen
        };

        // Constants
        static const typename ::uavcan::StorageType< typename ConstantTypes::FLAG_KNOWN >::Type FLAG_KNOWN; // 1
        static const typename ::uavcan::StorageType< typename ConstantTypes::FLAG_SUBSCRIBED >::Type FLAG_SUBSCRIBED; // 2
        static const typename ::uavcan::StorageType< typename ConstantTypes::FLAG_PUBLISHING >::Type FLAG_PUBLISHING; // 4
        static const typename ::uavcan::StorageType< typename ConstantTypes::FLAG_SERVING >::Type FLAG_SERVING; // 8

        // Fields
        typename ::uavcan::StorageType< typename FieldTypes::signature >::Type signature;
        typename ::uavcan::StorageType< typename FieldTypes::id >::Type id;
        typename ::uavcan::StorageType< typename FieldTypes::kind >::Type kind;
        typename ::uavcan::StorageType< typename FieldTypes::flags >::Type flags;
        typename ::uavcan::StorageType< typename FieldTypes::name >::Type name;

        Response_()
            : signature()
            , id()
            , kind()
            , flags()
            , name()
        {
            ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

    #if UAVCAN_DEBUG
            /*
             * Cross-checking MaxBitLen provided by the DSDL compiler.
             * This check shall never be performed in user code because MaxBitLen value
             * actually depends on the nested types, thus it is not invariant.
             */
            ::uavcan::StaticAssert<743 == MaxBitLen>::check();
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

    };

    typedef Request_<0> Request;
    typedef Response_<0> Response;

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindService };
    enum { DefaultDataTypeID = 2 };

    static const char* getDataTypeFullName()
    {
        return "uavcan.protocol.GetDataTypeInfo";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

private:
    GetDataTypeInfo_(); // Don't create objects of this type. Use Request/Response instead.
};

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool GetDataTypeInfo_::Request_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        id == rhs.id &&
        kind == rhs.kind &&
        name == rhs.name;
}

template <int _tmpl>
bool GetDataTypeInfo_::Request_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(id, rhs.id) &&
        ::uavcan::areClose(kind, rhs.kind) &&
        ::uavcan::areClose(name, rhs.name);
}

template <int _tmpl>
int GetDataTypeInfo_::Request_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::id::encode(self.id, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::kind::encode(self.kind, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::name::encode(self.name, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int GetDataTypeInfo_::Request_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::id::decode(self.id, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::kind::decode(self.kind, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::name::decode(self.name, codec,  tao_mode);
    return res;
}

template <int _tmpl>
bool GetDataTypeInfo_::Response_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        signature == rhs.signature &&
        id == rhs.id &&
        kind == rhs.kind &&
        flags == rhs.flags &&
        name == rhs.name;
}

template <int _tmpl>
bool GetDataTypeInfo_::Response_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(signature, rhs.signature) &&
        ::uavcan::areClose(id, rhs.id) &&
        ::uavcan::areClose(kind, rhs.kind) &&
        ::uavcan::areClose(flags, rhs.flags) &&
        ::uavcan::areClose(name, rhs.name);
}

template <int _tmpl>
int GetDataTypeInfo_::Response_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::signature::encode(self.signature, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::id::encode(self.id, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::kind::encode(self.kind, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::flags::encode(self.flags, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::name::encode(self.name, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int GetDataTypeInfo_::Response_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::signature::decode(self.signature, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::id::decode(self.id, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::kind::decode(self.kind, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::flags::decode(self.flags, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::name::decode(self.name, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
inline ::uavcan::DataTypeSignature GetDataTypeInfo_::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0x88C93DC9F68D24FCULL);

    Request::FieldTypes::id::extendDataTypeSignature(signature);
    Request::FieldTypes::kind::extendDataTypeSignature(signature);
    Request::FieldTypes::name::extendDataTypeSignature(signature);

    Response::FieldTypes::signature::extendDataTypeSignature(signature);
    Response::FieldTypes::id::extendDataTypeSignature(signature);
    Response::FieldTypes::kind::extendDataTypeSignature(signature);
    Response::FieldTypes::flags::extendDataTypeSignature(signature);
    Response::FieldTypes::name::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

template <int _tmpl>
const typename ::uavcan::StorageType< typename GetDataTypeInfo_::Response_<_tmpl>::ConstantTypes::FLAG_KNOWN >::Type
    GetDataTypeInfo_::Response_<_tmpl>::FLAG_KNOWN = 1U; // 1

template <int _tmpl>
const typename ::uavcan::StorageType< typename GetDataTypeInfo_::Response_<_tmpl>::ConstantTypes::FLAG_SUBSCRIBED >::Type
    GetDataTypeInfo_::Response_<_tmpl>::FLAG_SUBSCRIBED = 2U; // 2

template <int _tmpl>
const typename ::uavcan::StorageType< typename GetDataTypeInfo_::Response_<_tmpl>::ConstantTypes::FLAG_PUBLISHING >::Type
    GetDataTypeInfo_::Response_<_tmpl>::FLAG_PUBLISHING = 4U; // 4

template <int _tmpl>
const typename ::uavcan::StorageType< typename GetDataTypeInfo_::Response_<_tmpl>::ConstantTypes::FLAG_SERVING >::Type
    GetDataTypeInfo_::Response_<_tmpl>::FLAG_SERVING = 8U; // 8

/*
 * Final typedef
 */
typedef GetDataTypeInfo_ GetDataTypeInfo;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::uavcan::protocol::GetDataTypeInfo > _uavcan_gdtr_registrator_GetDataTypeInfo;

}

} // Namespace protocol
} // Namespace uavcan

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::protocol::GetDataTypeInfo::Request >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::protocol::GetDataTypeInfo::Request::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::protocol::GetDataTypeInfo::Request >::stream(Stream& s, ::uavcan::protocol::GetDataTypeInfo::Request::ParameterType obj, const int level)
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
    s << "id: ";
    YamlStreamer< ::uavcan::protocol::GetDataTypeInfo::Request::FieldTypes::id >::stream(s, obj.id, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "kind: ";
    YamlStreamer< ::uavcan::protocol::GetDataTypeInfo::Request::FieldTypes::kind >::stream(s, obj.kind, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "name: ";
    YamlStreamer< ::uavcan::protocol::GetDataTypeInfo::Request::FieldTypes::name >::stream(s, obj.name, level + 1);
}

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::protocol::GetDataTypeInfo::Response >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::protocol::GetDataTypeInfo::Response::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::protocol::GetDataTypeInfo::Response >::stream(Stream& s, ::uavcan::protocol::GetDataTypeInfo::Response::ParameterType obj, const int level)
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
    s << "signature: ";
    YamlStreamer< ::uavcan::protocol::GetDataTypeInfo::Response::FieldTypes::signature >::stream(s, obj.signature, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "id: ";
    YamlStreamer< ::uavcan::protocol::GetDataTypeInfo::Response::FieldTypes::id >::stream(s, obj.id, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "kind: ";
    YamlStreamer< ::uavcan::protocol::GetDataTypeInfo::Response::FieldTypes::kind >::stream(s, obj.kind, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "flags: ";
    YamlStreamer< ::uavcan::protocol::GetDataTypeInfo::Response::FieldTypes::flags >::stream(s, obj.flags, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "name: ";
    YamlStreamer< ::uavcan::protocol::GetDataTypeInfo::Response::FieldTypes::name >::stream(s, obj.name, level + 1);
}

}

namespace uavcan
{
namespace protocol
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::protocol::GetDataTypeInfo::Request::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::protocol::GetDataTypeInfo::Request >::stream(s, obj, 0);
    return s;
}

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::protocol::GetDataTypeInfo::Response::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::protocol::GetDataTypeInfo::Response >::stream(s, obj, 0);
    return s;
}

} // Namespace protocol
} // Namespace uavcan

#endif // UAVCAN_PROTOCOL_GETDATATYPEINFO_HPP_INCLUDED