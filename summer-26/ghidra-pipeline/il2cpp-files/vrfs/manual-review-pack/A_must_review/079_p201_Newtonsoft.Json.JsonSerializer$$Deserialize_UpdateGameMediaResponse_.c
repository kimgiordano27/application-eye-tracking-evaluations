/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize<UpdateGameMediaResponse>
ENTRY_POINT: 016a4878
PROGRAM: vrfs-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


long Newtonsoft_Json_JsonSerializer__Deserialize<UpdateGameMediaResponse>
               (wchar_t *param_1,wchar_t param_2)

{
  wchar_t *pwVar1;
  size_t unaff_x19;
  wchar_t *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  while (pwVar1 = wmemchr(param_1,param_2,unaff_x19), pwVar1 != (wchar_t *)0x0) {
    unaff_x23 = unaff_x23 + 4;
    if (unaff_x24 == unaff_x23) {
      return -1;
    }
    if (unaff_x19 == 0) goto LAB_016a489c;
    param_2 = *(wchar_t *)(unaff_x21 + unaff_x23);
    param_1 = unaff_x20;
  }
  unaff_x22 = unaff_x21 + unaff_x23;
LAB_016a489c:
  return unaff_x22 - unaff_x21 >> 2;
}


