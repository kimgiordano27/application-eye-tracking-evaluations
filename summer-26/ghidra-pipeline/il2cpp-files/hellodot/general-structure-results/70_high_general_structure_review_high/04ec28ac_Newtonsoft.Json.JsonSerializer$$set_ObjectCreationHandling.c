/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_ObjectCreationHandling
ENTRY_POINT: 04ec28ac
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


long Newtonsoft_Json_JsonSerializer__set_ObjectCreationHandling(void)

{
  short sVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  undefined4 unaff_w20;
  long *unaff_x23;
  ulong unaff_x24;
  long in_stack_00000008;
  
  if ((unaff_x24 & 1) != 0) {
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    unaff_x19 = FUN_04ec786c();
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar2 = FUN_04ebdab0(unaff_w20);
  if ((uVar2 & 1) != 0) {
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    sVar1 = FUN_04db48b0(unaff_x19,*(int *)(unaff_x19 + 0x10) + -1,0);
    lVar4 = *unaff_x23;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar4);
      lVar4 = *unaff_x23;
    }
    if (*(short *)(*(long *)(lVar4 + 0xb8) + 10) != sVar1) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_02cd038c(lVar4);
      }
      if (*(int *)(*(long *)PTR_DAT_065c9808 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar3 = FUN_04e945d8(*(long *)(*unaff_x23 + 0xb8) + 10,0);
      unaff_x19 = FUN_04db00f0(unaff_x19,uVar3,0);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_065f1670 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar2 = FUN_02ccba1c(unaff_x19,&stack0x00000008);
  if ((uVar2 & 1) == 0) {
    in_stack_00000008 = unaff_x19;
  }
  return in_stack_00000008;
}


