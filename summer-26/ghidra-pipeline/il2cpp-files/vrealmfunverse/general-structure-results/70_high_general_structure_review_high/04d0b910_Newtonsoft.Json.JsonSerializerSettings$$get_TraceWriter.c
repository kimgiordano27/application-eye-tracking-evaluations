/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_TraceWriter
ENTRY_POINT: 04d0b910
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_JsonSerializerSettings__get_TraceWriter(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int unaff_w19;
  long unaff_x21;
  long *plVar6;
  int iStack000000000000000c;
  int iStack0000000000000010;
  int iStack0000000000000014;
  undefined8 in_stack_00000018;
  
  plVar6 = *(long **)(unaff_x21 + 0x1d0);
  iStack000000000000000c = 0;
  iStack0000000000000010 = 0;
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar3 = FUN_04d59bbc(&stack0x00000018,0);
  lVar5 = *plVar6;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(lVar5);
  }
  FUN_04d0b164(uVar3);
  FUN_04d0b5d0(in_stack_00000018,(long)&stack0x00000010 + 4,&stack0x00000010,&stack0x0000000c);
  iVar2 = iStack0000000000000010;
  iVar1 = iStack000000000000000c;
  if (unaff_w19 < 2) {
    if (unaff_w19 != 0) {
      if (unaff_w19 != 1) goto LAB_04d0b9f4;
      if (*(int *)(*plVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar1 = FUN_04d0b09c(iStack0000000000000014,iVar2,iVar1);
      iVar2 = FUN_04d0b09c(iStack0000000000000014,1,1);
      iStack0000000000000014 = (iVar1 - iVar2) + 1;
    }
  }
  else {
    iStack0000000000000014 = iStack0000000000000010;
    if ((unaff_w19 != 2) && (iStack0000000000000014 = iStack000000000000000c, unaff_w19 != 3)) {
LAB_04d0b9f4:
      uVar3 = thunk_FUN_02ba3594(PTR_DAT_0632ff40);
      uVar3 = FUN_04dbdb84(uVar3,0);
      thunk_FUN_02ba3594(PTR_DAT_0631cb60);
      uVar4 = thunk_FUN_02b79644();
      FUN_04d7b3f4(uVar4,uVar3,0);
      uVar3 = thunk_FUN_02ba3594(PTR_DAT_063301f8);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar4,uVar3);
    }
  }
  return iStack0000000000000014;
}


