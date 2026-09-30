/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$SerializeInternal
ENTRY_POINT: 079d7128
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_JsonSerializer__SerializeInternal(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int unaff_w20;
  long unaff_x21;
  
  iVar2 = FUN_07a56bec();
  iVar1 = *(int *)(unaff_x21 + 0x20);
  if (iVar2 - unaff_w20 < iVar1) {
    thunk_FUN_044adef4(PTR_DAT_09f217f8);
    uVar3 = thunk_FUN_0448520c();
    uVar4 = thunk_FUN_044adef4(PTR_DAT_09f25210);
    FUN_0799d598(uVar3,uVar4,0);
    uVar4 = thunk_FUN_044adef4(PTR_DAT_09f42db0);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar3,uVar4);
  }
  if (iVar1 == 0) {
    return;
  }
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    iVar2 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - *(int *)(unaff_x21 + 0x18);
    if (iVar1 <= iVar2) {
      iVar2 = iVar1;
    }
    FUN_07a612b4();
    if (iVar1 - iVar2 < 1) {
      return;
    }
    if (*(long *)(unaff_x21 + 0x10) != 0) {
      FUN_07a612b4(*(long *)(unaff_x21 + 0x10),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


