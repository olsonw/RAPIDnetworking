/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.9-dev at Mon Apr 10 13:07:17 2017. */

#include "networking_arduino.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t SensorData_fields[4] = {
    PB_FIELD(  1, INT32   , REQUIRED, STATIC  , FIRST, SensorData, sensorId, sensorId, 0),
    PB_FIELD(  2, FLOAT   , OPTIONAL, STATIC  , OTHER, SensorData, value, sensorId, 0),
    PB_FIELD(  3, INT32   , OPTIONAL, STATIC  , OTHER, SensorData, timestamp, value, 0),
    PB_LAST_FIELD
};


/* @@protoc_insertion_point(eof) */
