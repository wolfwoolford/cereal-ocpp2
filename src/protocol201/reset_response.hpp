#pragma once

/**
*
* This file is auto generated using this exact command:
*     ../../generator/20/schema-to-cpp-header2.py
*     --input-dir=../../schemas/201
*     --namespace=lgpl3
*     --namespace=ocpp201
*     --include=<cereal/types/vector.hpp>
*     --include="../cereal/cereal_ext.hpp"
*     --include="../cereal/schema_enum.hpp"
*     --include="../cereal/schema_string.hpp"
*     --include="../cereal/schema_array.hpp"
*     --include="../cereal/schema_date_time.hpp"
*
*/

#include "./common.hpp"

namespace lgpl3 { namespace ocpp201 { 

SCHEMA_ENUM(ResetStatusEnum,\
    Accepted,\
    Rejected,\
    Scheduled);
using ResetStatusEnumType=schema_enum_value<ResetStatusEnum>;

struct ResetResponse
{
    optional<CustomDataType> customData;
    ResetStatusEnumType status;

    template<typename Archive>
    void serialize(Archive& archive)
    {
        cereal::nvp(archive, "customData", customData);
        cereal::nvp(archive, "status", status);
    }
};



} } 

