/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize<UserObject>
ENTRY_POINT: 016a4b00
PROGRAM: vrfs-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


uint Newtonsoft_Json_JsonSerializer__Deserialize<UserObject>
               (wchar_t *param_1,wchar_t *param_2,size_t param_3)

{
  uint uVar1;
  ulong unaff_x19;
  ulong unaff_x20;
  
  uVar1 = wmemcmp(param_1,param_2,param_3);
  if ((uVar1 == 0) && (uVar1 = (uint)(unaff_x19 < unaff_x20), unaff_x20 < unaff_x19)) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


