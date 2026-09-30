/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$OnSerialized
ENTRY_POINT: 06257c44
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__OnSerialized(long param_1)

{
  int iVar1;
  
                    /* try { // try from 06257c44 to 06357c63 has its CatchHandler @ 06257d44 */
  if (0 < param_1) {
    iVar1 = 3;
    do {
      param_1 = param_1 * 0x10000;
      iVar1 = iVar1 + -1;
    } while (0 < param_1);
                    /* try { // try from 06257c64 to 06357d5b has its CatchHandler @ 06257bb8 */
    return iVar1;
  }
  return 3;
}


