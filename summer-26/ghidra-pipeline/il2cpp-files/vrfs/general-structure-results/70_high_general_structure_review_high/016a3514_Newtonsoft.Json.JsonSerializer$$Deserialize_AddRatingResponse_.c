/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize<AddRatingResponse>
ENTRY_POINT: 016a3514
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


void Newtonsoft_Json_JsonSerializer__Deserialize<AddRatingResponse>(void)

{
  ulong *unaff_x19;
  ulong unaff_x20;
  ulong unaff_x22;
  long unaff_x23;
  int unaff_w25;
  
  if (unaff_w25 == 0) {
    *(char *)unaff_x19 = (char)((int)unaff_x22 << 1);
  }
  else {
    *unaff_x19 = unaff_x23 + 1U | 1;
    unaff_x19[1] = unaff_x22;
    unaff_x19[2] = unaff_x20;
  }
  return;
}


