/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_ContractResolver
ENTRY_POINT: 04d0b8f8
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


int Newtonsoft_Json_JsonSerializerSettings__get_ContractResolver(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  int iStack000000000000000c;
  int in_stack_00000010;
  int iStack0000000000000014;
  undefined8 in_stack_00000018;
  
  FUN_02b3c81c();
  *(undefined1 *)(unaff_x21 + 0x500) = 1;
  puVar1 = PTR_DAT_063301d0;
  iStack0000000000000014 = 0;
  iStack000000000000000c = 0;
  in_stack_00000010 = 0;
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar5 = FUN_04d59bbc(&stack0x00000018,0);
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(lVar7);
  }
  FUN_04d0b164(uVar5);
  FUN_04d0b5d0(in_stack_00000018,&stack0x00000014,&stack0x00000010,&stack0x0000000c);
  iVar4 = iStack0000000000000014;
  iVar3 = in_stack_00000010;
  iVar2 = iStack000000000000000c;
  if (unaff_w19 < 2) {
    if (unaff_w19 != 0) {
      if (unaff_w19 != 1) goto LAB_04d0b9f4;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar2 = FUN_04d0b09c(iVar4,iVar3,iVar2);
      iVar3 = FUN_04d0b09c(iVar4,1,1);
      iVar4 = (iVar2 - iVar3) + 1;
    }
  }
  else {
    iVar4 = in_stack_00000010;
    if ((unaff_w19 != 2) && (iVar4 = iStack000000000000000c, unaff_w19 != 3)) {
LAB_04d0b9f4:
      uVar5 = thunk_FUN_02ba3594(PTR_DAT_0632ff40);
      uVar5 = FUN_04dbdb84(uVar5,0);
      thunk_FUN_02ba3594(PTR_DAT_0631cb60);
      uVar6 = thunk_FUN_02b79644();
      FUN_04d7b3f4(uVar6,uVar5,0);
      uVar5 = thunk_FUN_02ba3594(PTR_DAT_063301f8);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar6,uVar5);
    }
  }
  return iVar4;
}


