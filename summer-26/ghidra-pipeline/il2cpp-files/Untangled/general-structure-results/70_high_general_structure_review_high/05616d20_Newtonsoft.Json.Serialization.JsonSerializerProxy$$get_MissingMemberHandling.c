/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_MissingMemberHandling
ENTRY_POINT: 05616d20
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
Newtonsoft_Json_Serialization_JsonSerializerProxy__get_MissingMemberHandling
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_06d4f1e0;
  if ((bRam00000000071c2d4b & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d4f1e0);
    FUN_02f07e70(PTR_DAT_06d18908);
    FUN_02f07e70(PTR_DAT_06d18930);
    bRam00000000071c2d4b = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  if (DAT_071c2924 == '\0') {
    FUN_02f07e70(PTR_DAT_06d4f1e0);
    DAT_071c2924 = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *(long *)puVar1;
  }
  if (**(char **)(lVar2 + 0xb8) != '\0') {
    uVar3 = FUN_033970a8(param_1,param_2,param_3,param_4,*(undefined8 *)PTR_DAT_06d18908);
    return uVar3;
  }
  if ((int)param_2 == 0) {
    return 0;
  }
  if (param_5 != 0) {
    uVar3 = thunk_FUN_05597c5c(param_5,param_1,param_2,param_3,param_4,0,0);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


