/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_MetadataPropertyHandling
ENTRY_POINT: 05616ed0
PROGRAM: Untangled-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__get_MetadataPropertyHandling(void)

{
  long lVar1;
  undefined8 uVar2;
  int unaff_w21;
  long unaff_x22;
  long *unaff_x24;
  
  lVar1 = *unaff_x24;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x24;
  }
  if (**(char **)(lVar1 + 0xb8) != '\0') {
    uVar2 = FUN_05616f68();
    return uVar2;
  }
  if (unaff_w21 == 0) {
    return 0;
  }
  if (unaff_x22 != 0) {
    uVar2 = thunk_FUN_05597c5c();
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


