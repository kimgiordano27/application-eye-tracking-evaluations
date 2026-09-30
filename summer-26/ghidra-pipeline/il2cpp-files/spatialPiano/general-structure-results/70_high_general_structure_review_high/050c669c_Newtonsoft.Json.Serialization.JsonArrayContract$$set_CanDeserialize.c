/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonArrayContract$$set_CanDeserialize
ENTRY_POINT: 050c669c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonArrayContract__set_CanDeserialize(undefined8 param_1)

{
  ulong uVar1;
  int in_w9;
  long *unaff_x23;
  
  if (in_w9 == 0) {
    thunk_FUN_02f6670c(param_1);
  }
  uVar1 = FUN_050c4b74();
  if ((uVar1 & 1) != 0) {
    FUN_050cd5cc();
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*unaff_x23);
    }
    uVar1 = FUN_050c4c38();
    if ((uVar1 & 1) != 0) {
      return 1;
    }
  }
  FUN_050cd700();
  return 0;
}


