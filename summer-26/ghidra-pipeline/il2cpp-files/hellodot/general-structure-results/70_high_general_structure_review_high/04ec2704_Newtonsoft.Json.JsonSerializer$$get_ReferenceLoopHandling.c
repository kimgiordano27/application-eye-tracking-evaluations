/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_ReferenceLoopHandling
ENTRY_POINT: 04ec2704
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonSerializer__get_ReferenceLoopHandling(void)

{
  short sVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 unaff_w20;
  long *unaff_x23;
  long in_stack_00000008;
  
  FUN_04dbaed4();
  uVar2 = FUN_04db00f0();
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  lVar3 = FUN_04ec786c(uVar2);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar4 = FUN_04ebdab0(unaff_w20);
  if ((uVar4 & 1) != 0) {
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    sVar1 = FUN_04db48b0(lVar3,*(int *)(lVar3 + 0x10) + -1,0);
    lVar5 = *unaff_x23;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar5);
      lVar5 = *unaff_x23;
    }
    if (*(short *)(*(long *)(lVar5 + 0xb8) + 10) != sVar1) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02cd038c(lVar5);
      }
      if (*(int *)(*(long *)PTR_DAT_065c9808 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar2 = FUN_04e945d8(*(long *)(*unaff_x23 + 0xb8) + 10,0);
      lVar3 = FUN_04db00f0(lVar3,uVar2,0);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_065f1670 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar4 = FUN_02ccba1c(lVar3,&stack0x00000008);
  if ((uVar4 & 1) == 0) {
    in_stack_00000008 = lVar3;
  }
  return in_stack_00000008;
}


