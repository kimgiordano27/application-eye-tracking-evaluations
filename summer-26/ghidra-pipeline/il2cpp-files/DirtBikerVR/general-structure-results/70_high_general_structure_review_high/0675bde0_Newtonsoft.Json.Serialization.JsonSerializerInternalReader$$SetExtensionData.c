/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetExtensionData
ENTRY_POINT: 0675bde0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetExtensionData(void)

{
  uint uVar1;
  int in_w8;
  undefined8 *unaff_x19;
  undefined1 *unaff_x20;
  undefined8 unaff_x26;
  uint unaff_w28;
  
  if (in_w8 == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_0675d708();
  if ((uVar1 & 1) == 0) {
    unaff_x26 = 0;
  }
  if ((uVar1 & 1 & unaff_w28) != 0) {
    unaff_x26 = 0;
    uVar1 = 0;
    *unaff_x20 = 1;
  }
  *unaff_x19 = unaff_x26;
  return uVar1 & 1;
}


