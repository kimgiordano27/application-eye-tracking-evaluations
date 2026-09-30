/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_PreserveReferencesHandling
ENTRY_POINT: 05616e64
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_PreserveReferencesHandling
          (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
          ,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x24;
  long *plVar3;
  long unaff_x25;
  
  plVar3 = *(long **)(unaff_x24 + 0x1e0);
  if ((param_1 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d4f1e0);
    FUN_02f07e70(PTR_DAT_06d18930);
    *(undefined1 *)(unaff_x25 + 0xd4c) = 1;
  }
  if (*(int *)(*plVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  if (DAT_071c2924 == '\0') {
    FUN_02f07e70(PTR_DAT_06d4f1e0);
    DAT_071c2924 = '\x01';
  }
  lVar1 = *plVar3;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *plVar3;
  }
  if (**(char **)(lVar1 + 0xb8) != '\0') {
    uVar2 = FUN_05616f68(param_2,param_3,param_4,param_5);
    return uVar2;
  }
  if ((int)param_3 == 0) {
    return 0;
  }
  if (param_6 != 0) {
    uVar2 = thunk_FUN_05597c5c(param_6,param_2,param_3,param_4,param_5,1,0);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


