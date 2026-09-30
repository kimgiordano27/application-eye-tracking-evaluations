/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_DateFormatString
ENTRY_POINT: 079d549c
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


void Newtonsoft_Json_JsonSerializer__get_DateFormatString(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int unaff_w19;
  long unaff_x21;
  
  iVar1 = FUN_07a56bec();
  lVar5 = *(long *)(unaff_x21 + 0x10);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
                    /* try { // try from 079d54b4 to 07ad54bb has its CatchHandler @ 079d551c */
  if (*(int *)(lVar5 + 0x1c) <= iVar1 - unaff_w19) {
                    /* try { // try from 079d54bc to 07ad5503 has its CatchHandler @ 079d523c */
    for (lVar5 = *(long *)(lVar5 + 0x10); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x20)) {
      FUN_07a60d64();
    }
    return;
  }
  thunk_FUN_044adef4(PTR_DAT_09f217f8);
  uVar2 = thunk_FUN_0448520c();
  uVar3 = thunk_FUN_044adef4(PTR_DAT_09f25228);
  uVar4 = thunk_FUN_044adef4(PTR_DAT_09f251f8);
  FUN_07996d40(uVar2,uVar3,uVar4,0);
  uVar3 = thunk_FUN_044adef4(PTR_DAT_09f42cf8);
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar2,uVar3);
}


