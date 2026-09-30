/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXNode
ENTRY_POINT: 027020c0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonConvert__DeserializeXNode(void)

{
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  if (-unaff_x22 < 1) {
    while ((*(short *)(unaff_x20 + 0x10) == 9 || (*(short *)(unaff_x20 + 0x10) == 0x20))) {
      FUN_02702460();
    }
    if (*(int *)(unaff_x20 + 0x18) <= *(int *)(unaff_x20 + 0x14)) {
      *unaff_x19 = -unaff_x22;
      return 1;
    }
  }
  FUN_026fcec8();
  return 0;
}


