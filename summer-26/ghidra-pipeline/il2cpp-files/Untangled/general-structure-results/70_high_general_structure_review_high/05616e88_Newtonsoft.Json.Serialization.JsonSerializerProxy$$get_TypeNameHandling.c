/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_TypeNameHandling
ENTRY_POINT: 05616e88
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


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__get_TypeNameHandling(void)

{
  long lVar1;
  undefined8 uVar2;
  int unaff_w21;
  long unaff_x22;
  long *unaff_x24;
  long unaff_x25;
  
  FUN_02f07e70();
  FUN_02f07e70(PTR_DAT_06d18930);
  *(undefined1 *)(unaff_x25 + 0xd4c) = 1;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  if (DAT_071c2924 == '\0') {
    FUN_02f07e70(PTR_DAT_06d4f1e0);
    DAT_071c2924 = '\x01';
  }
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


