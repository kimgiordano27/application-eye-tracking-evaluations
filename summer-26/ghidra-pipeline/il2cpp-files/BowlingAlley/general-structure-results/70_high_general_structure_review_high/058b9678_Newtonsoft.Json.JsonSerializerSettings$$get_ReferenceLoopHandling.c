/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_ReferenceLoopHandling
ENTRY_POINT: 058b9678
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_JsonSerializerSettings__get_ReferenceLoopHandling(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  int unaff_w19;
  uint unaff_w20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  
  if (unaff_x23 != 0) {
    iVar4 = thunk_FUN_032f8ab8(0);
    unaff_x23 = unaff_x23 + iVar4;
  }
  puVar3 = PTR_DAT_07290a18;
  if (unaff_x22 != 0) {
    iVar4 = thunk_FUN_032f8ab8(0);
    uVar2 = *(undefined4 *)(unaff_x22 + 0x10);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*(long *)puVar3);
    }
    iVar1 = (unaff_w21 - unaff_w19) + 1;
    iVar4 = FUN_058b9298(unaff_x23 + (long)iVar1 * 2,unaff_w19,unaff_x22 + iVar4,uVar2,unaff_w20 & 1
                         ,0);
    iVar1 = iVar1 + iVar4;
    if (iVar4 < 0) {
      iVar1 = -1;
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


