/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$.ctor
ENTRY_POINT: 050d61c0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c___ctor(long *param_1)

{
  int iVar1;
  int unaff_w19;
  int unaff_w20;
  int unaff_w21;
  long unaff_x22;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0xba8);
  if (*(int *)(*param_1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_0346ccf8(unaff_w19,unaff_w20,*puVar2);
  iVar1 = unaff_w21;
  if (unaff_w20 <= unaff_w21) {
    iVar1 = unaff_w20;
  }
  if (unaff_w19 <= unaff_w21) {
    unaff_w19 = iVar1;
  }
  return unaff_w19;
}


