/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetContract
ENTRY_POINT: 05de8cd4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetContract
              (double param_1,double *param_2)

{
  double dVar1;
  
                    /* try { // try from 05de8cd4 to 05ee8cd7 has its CatchHandler @ 05de8d48 */
  dVar1 = *param_2;
                    /* try { // try from 05de8cdc to 05ee8ce3 has its CatchHandler @ 05de8d44 */
  if (dVar1 < param_1) {
                    /* try { // try from 05de8ce4 to 05ee8d13 has its CatchHandler @ 05de8b84 */
    return -1;
  }
  if (dVar1 <= param_1) {
    if (dVar1 == param_1) {
      return 0;
    }
                    /* try { // try from 05de8d14 to 05ee8d1b has its CatchHandler @ 05de8d80 */
    if (0x7ff0000000000000 < (ulong)ABS(dVar1)) {
                    /* try { // try from 05de8d1c to 05ee8d1f has its CatchHandler @ 05de8d7c */
                    /* try { // try from 05de8d20 to 05ee8d23 has its CatchHandler @ 05de8d70 */
                    /* try { // try from 05de8d24 to 05ee8d27 has its CatchHandler @ 05de8d6c */
                    /* try { // try from 05de8d28 to 05ee8d2b has its CatchHandler @ 05de8d68 */
                    /* try { // try from 05de8d2c to 05ee8d2f has its CatchHandler @ 05de8d64 */
      return -(uint)((ulong)ABS(param_1) < 0x7ff0000000000001);
    }
  }
  return 1;
}


