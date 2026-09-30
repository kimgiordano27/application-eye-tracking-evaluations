/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$.cctor
ENTRY_POINT: 0592cf70
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined4 Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c___cctor(ushort *param_1)

{
  uint uVar1;
  uint in_w9;
  uint in_w10;
  uint *unaff_x19;
  int unaff_w21;
  
  while( true ) {
    unaff_w21 = unaff_w21 + -1;
    if (unaff_w21 < 0) {
      *unaff_x19 = in_w10;
      return 1;
    }
    if (in_w9 < in_w10) break;
    uVar1 = in_w10 * 10;
    in_w10 = uVar1;
    if (*param_1 != 0) {
      in_w10 = (uVar1 + *param_1) - 0x30;
      param_1 = param_1 + 1;
      if (in_w10 < uVar1) {
        return 0;
      }
    }
  }
  return 0;
}


