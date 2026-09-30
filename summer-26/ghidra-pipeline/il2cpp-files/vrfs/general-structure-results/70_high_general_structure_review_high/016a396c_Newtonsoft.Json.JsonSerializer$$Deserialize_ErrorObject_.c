/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize<ErrorObject>
ENTRY_POINT: 016a396c
PROGRAM: vrfs-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_JsonSerializer__Deserialize<ErrorObject>(ulong param_1)

{
  size_t __n;
  wchar_t *__s1;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  wchar_t *unaff_x23;
  size_t unaff_x24;
  long unaff_x25;
  ulong unaff_x27;
  
  __s1 = operator_new(param_1);
  if (unaff_x24 != 0) {
    wmemcpy(__s1,unaff_x23,unaff_x24);
  }
  __n = (unaff_x25 - unaff_x22) - unaff_x24;
  if (__n != 0) {
    wmemcpy(__s1 + unaff_x24 + unaff_x21,unaff_x23 + unaff_x24 + unaff_x22,__n);
  }
  if (unaff_x20 != 4) {
    operator_delete(unaff_x23);
  }
  unaff_x19[2] = (ulong)__s1;
  *unaff_x19 = unaff_x27 | 1;
  return;
}


