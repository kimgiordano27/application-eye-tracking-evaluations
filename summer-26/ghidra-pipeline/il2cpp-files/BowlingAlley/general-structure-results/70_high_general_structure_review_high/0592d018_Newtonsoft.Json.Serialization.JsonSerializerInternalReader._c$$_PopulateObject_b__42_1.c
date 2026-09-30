/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$<PopulateObject>b__42_1
ENTRY_POINT: 0592d018
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined4
Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__<PopulateObject>b__42_1
          (ushort *param_1)

{
  ulong in_x9;
  ulong uVar1;
  ulong in_x11;
  ulong *unaff_x19;
  int unaff_w21;
  
  while( true ) {
    unaff_w21 = unaff_w21 + -1;
    if (unaff_w21 < 0) {
      *unaff_x19 = in_x11;
      return 1;
    }
    if ((in_x9 & 0xffffffffffff | 0x1999000000000000) < in_x11) break;
    uVar1 = in_x11 * 10;
    in_x11 = uVar1;
    if ((ulong)*param_1 != 0) {
      in_x11 = (uVar1 + *param_1) - 0x30;
      param_1 = param_1 + 1;
      if (in_x11 < uVar1) {
        return 0;
      }
    }
  }
  return 0;
}


