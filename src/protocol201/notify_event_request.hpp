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

SCHEMA_ENUM(EventNotificationEnum,\
    HardWiredNotification,\
    HardWiredMonitor,\
    PreconfiguredMonitor,\
    CustomMonitor);
using EventNotificationEnumType=schema_enum_value<EventNotificationEnum>;

SCHEMA_ENUM(EventTriggerEnum,\
    Alerting,\
    Delta,\
    Periodic);
using EventTriggerEnumType=schema_enum_value<EventTriggerEnum>;

struct EventDataType
{
    schema_string<2500> actualValue;
    optional<int> cause;
    optional<schema_boolean> cleared;
    ComponentType component;
    optional<CustomDataType> customData;
    int eventId;
    EventNotificationEnumType eventNotificationType;
    optional<schema_string<50>> techCode;
    optional<schema_string<500>> techInfo;
    schema_date_time timestamp;
    optional<schema_string<36>> transactionId;
    EventTriggerEnumType trigger;
    VariableType variable;
    optional<int> variableMonitoringId;

    template<typename Archive>
    void serialize(Archive& archive)
    {
        cereal::nvp(archive, "actualValue", actualValue);
        cereal::nvp(archive, "cause", cause);
        cereal::nvp(archive, "cleared", cleared);
        cereal::nvp(archive, "component", component);
        cereal::nvp(archive, "customData", customData);
        cereal::nvp(archive, "eventId", eventId);
        cereal::nvp(archive, "eventNotificationType", eventNotificationType);
        cereal::nvp(archive, "techCode", techCode);
        cereal::nvp(archive, "techInfo", techInfo);
        cereal::nvp(archive, "timestamp", timestamp);
        cereal::nvp(archive, "transactionId", transactionId);
        cereal::nvp(archive, "trigger", trigger);
        cereal::nvp(archive, "variable", variable);
        cereal::nvp(archive, "variableMonitoringId", variableMonitoringId);
    }
};

struct NotifyEventRequest
{
    static const char* action() { return "NotifyEvent"; }

    optional<CustomDataType> customData;
    schema_array<EventDataType,65536,1> eventData;
    schema_date_time generatedAt;
    int seqNo;
    optional<schema_boolean> tbc;

    template<typename Archive>
    void serialize(Archive& archive)
    {
        cereal::nvp(archive, "customData", customData);
        cereal::nvp(archive, "eventData", eventData);
        cereal::nvp(archive, "generatedAt", generatedAt);
        cereal::nvp(archive, "seqNo", seqNo);
        cereal::nvp(archive, "tbc", tbc);
    }
};



} } 

