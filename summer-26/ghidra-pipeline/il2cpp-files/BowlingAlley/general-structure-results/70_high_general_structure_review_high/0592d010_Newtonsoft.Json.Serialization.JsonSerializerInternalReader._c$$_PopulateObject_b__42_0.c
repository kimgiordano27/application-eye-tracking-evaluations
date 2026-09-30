/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$<PopulateObject>b__42_0
ENTRY_POINT: 0592d010
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined4
Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__<PopulateObject>b__42_0
          (ushort *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x19;
  int unaff_w21;
  
  uVar2 = 0;
  while( true ) {
    unaff_w21 = unaff_w21 + -1;
    if (unaff_w21 < 0) {
      *unaff_x19 = uVar2;
      return 1;
    }
    if (0x1999999999999999 < uVar2) break;
    uVar1 = uVar2 * 10;
    uVar2 = uVar1;
    if ((ulong)*param_1 != 0) {
      uVar2 = (uVar1 + *param_1) - 0x30;
      param_1 = param_1 + 1;
      if (uVar2 < uVar1) {
        return 0;
      }
    }
  }
  return 0;
}


