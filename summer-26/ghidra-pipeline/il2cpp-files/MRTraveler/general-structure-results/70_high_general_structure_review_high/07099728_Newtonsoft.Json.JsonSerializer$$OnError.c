/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$OnError
ENTRY_POINT: 07099728
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonSerializer__OnError(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x19;
  
  if (param_1 == 0) {
    uVar1 = FUN_070996b8();
    if (*(int *)(*(long *)PTR_DAT_08e693f0 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)PTR_DAT_08e693f0);
    }
    lVar2 = FUN_070c45d4(uVar1,0);
    *unaff_x19 = lVar2;
    thunk_FUN_03d233cc();
    param_1 = *unaff_x19;
  }
  return param_1;
}


