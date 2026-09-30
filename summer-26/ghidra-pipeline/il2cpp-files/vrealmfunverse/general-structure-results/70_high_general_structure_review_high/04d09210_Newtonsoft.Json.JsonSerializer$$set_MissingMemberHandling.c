/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_MissingMemberHandling
ENTRY_POINT: 04d09210
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


uint Newtonsoft_Json_JsonSerializer__set_MissingMemberHandling(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x19;
  char *pcVar3;
  undefined8 in_stack_00000008;
  
  if ((*(byte *)(unaff_x19 + 0x4ea) & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_063140b0);
    FUN_02b3c81c(PTR_DAT_0631a7d0);
    FUN_02b3c81c(PTR_DAT_0631b908);
    FUN_02b3c81c(PTR_DAT_06330160);
    FUN_02b3c81c(PTR_DAT_06330168);
    *(undefined1 *)(unaff_x19 + 0x4ea) = 1;
  }
  pcVar3 = (char *)(param_1 + 0x30);
  if (*pcVar3 == '\0') {
    if (*(long *)(param_1 + 0x20) == 0) {
LAB_04d09304:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar2 = thunk_FUN_04c08854(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50),
                               *(undefined8 *)PTR_DAT_06330168,0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_04d09304;
      uVar1 = thunk_FUN_04c08854(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50),
                                 *(undefined8 *)PTR_DAT_06330160,0);
      uVar1 = uVar1 ^ 1;
    }
    else {
      uVar1 = 0;
    }
    in_stack_00000008._4_2_ = 0;
    FUN_03ad0c14((long)&stack0x00000008 + 4,uVar1 & 1,*(undefined8 *)PTR_DAT_063140b0);
    *(undefined2 *)pcVar3 = in_stack_00000008._4_2_;
  }
  uVar1 = FUN_03ad0c2c(pcVar3,*(undefined8 *)PTR_DAT_0631b908);
  return uVar1 & 1;
}


