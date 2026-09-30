/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Create
ENTRY_POINT: 061dfb38
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__Create(long param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  
  *(undefined8 *)(param_1 + 0x10) = unaff_x20;
  thunk_FUN_037aeb94();
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x21;
  thunk_FUN_037aeb94();
  if (unaff_x24 != 0) {
    unaff_x23 = (long *)(unaff_x24 + 0x20);
  }
  *unaff_x23 = unaff_x22;
  thunk_FUN_037aeb94();
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


