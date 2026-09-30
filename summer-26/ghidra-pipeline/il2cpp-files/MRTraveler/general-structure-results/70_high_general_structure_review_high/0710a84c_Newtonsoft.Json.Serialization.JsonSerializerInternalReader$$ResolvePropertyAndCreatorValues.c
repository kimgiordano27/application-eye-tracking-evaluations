/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ResolvePropertyAndCreatorValues
ENTRY_POINT: 0710a84c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined4
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolvePropertyAndCreatorValues
          (long param_1,ushort *param_2)

{
  ulong in_x9;
  ulong uVar1;
  ulong in_x11;
  ulong uVar2;
  ulong *unaff_x19;
  int unaff_w21;
  
  while( true ) {
    uVar1 = param_1 * 2;
    uVar2 = uVar1;
    if (in_x11 != 0) {
      uVar2 = (uVar1 + in_x11) - 0x30;
      param_2 = param_2 + 1;
      if (uVar2 < uVar1) {
        return 0;
      }
    }
    unaff_w21 = unaff_w21 + -1;
    if (unaff_w21 < 0) break;
    if (in_x9 < uVar2) {
      return 0;
    }
    in_x11 = (ulong)*param_2;
    param_1 = uVar2 * 5;
  }
  *unaff_x19 = uVar2;
  return 1;
}


