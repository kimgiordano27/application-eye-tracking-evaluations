/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteTypeProperty
ENTRY_POINT: 074bf450
PROGRAM: cac-libil2cpp.so
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
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteTypeProperty(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined1 in_NG;
  uint in_w9;
  uint in_w10;
  uint *unaff_x19;
  int unaff_w21;
  
  while( true ) {
    if ((bool)in_NG) {
      *unaff_x19 = in_w10;
      return 1;
    }
    if (in_w9 < in_w10) break;
    uVar1 = *param_1;
    uVar2 = in_w10 * 10;
    in_w10 = uVar2;
    if (uVar1 != 0) {
      param_1 = param_1 + 1;
      in_w10 = (uVar2 + uVar1) - 0x30;
      if (in_w10 < uVar2) {
        return 0;
      }
    }
    unaff_w21 = unaff_w21 + -1;
    in_NG = unaff_w21 < 0;
  }
  return 0;
}


