/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_ObjectCreationHandling
ENTRY_POINT: 05616db0
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__get_ObjectCreationHandling(void)

{
  undefined8 uVar1;
  int unaff_w21;
  long unaff_x23;
  long *unaff_x24;
  
  thunk_FUN_02f12b58();
  if (**(char **)(*unaff_x24 + 0xb8) != '\0') {
    uVar1 = FUN_033970a8();
    return uVar1;
  }
  if (unaff_w21 != 0) {
    if (unaff_x23 != 0) {
      uVar1 = thunk_FUN_05597c5c();
      return uVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  return 0;
}


