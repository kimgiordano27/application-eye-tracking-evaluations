/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_DateTimeZoneHandling
ENTRY_POINT: 079d8368
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonSerializerSettings__set_DateTimeZoneHandling(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_DAT_09f42e00;
  if ((DAT_0a524d58 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f42e00);
                    /* try { // try from 079d838c to 07ad839b has its CatchHandler @ 079d84b4 */
    DAT_0a524d58 = 1;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
  FUN_079d7c24(lVar3,uVar1);
  if (lVar3 != 0) {
    FUN_07a612b4(*(undefined8 *)(param_1 + 0x10),0,*(undefined8 *)(lVar3 + 0x10),0,
                 *(undefined4 *)(param_1 + 0x20),0);
    FUN_07a612b4(*(undefined8 *)(param_1 + 0x18),0,*(undefined8 *)(lVar3 + 0x18),0,
                 *(undefined4 *)(param_1 + 0x20),0);
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(param_1 + 0x28);
    thunk_FUN_044bb4b4();
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


