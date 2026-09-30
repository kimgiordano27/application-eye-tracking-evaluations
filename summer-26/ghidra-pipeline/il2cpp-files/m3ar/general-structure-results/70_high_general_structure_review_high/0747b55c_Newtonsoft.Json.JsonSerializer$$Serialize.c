/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Serialize
ENTRY_POINT: 0747b55c
PROGRAM: m3ar-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


long Newtonsoft_Json_JsonSerializer__Serialize(long param_1)

{
  undefined *puVar1;
  undefined1 in_CY;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  int in_stack_00000008;
  
  while (puVar1 = PTR_DAT_08fa11b0, !(bool)in_CY) {
    unaff_w22 = unaff_w22 + 1;
    if (*(int *)(unaff_x20 + 0x10) <= unaff_w22) goto LAB_0747b5bc;
    param_1 = FUN_07363804();
    in_CY = 0x7f < ((uint)param_1 & 0xffff);
  }
  uVar2 = FUN_07367cf4();
  if ((uVar2 & 1) != 0) {
    in_stack_00000008 = unaff_w19 + unaff_w22;
    uVar4 = thunk_FUN_0406db0c(*(undefined8 *)(PTR_DAT_08f65618 + 0x48),&stack0x00000008);
    uVar3 = thunk_FUN_04097b88(PTR_DAT_08fa11c8);
    uVar3 = FUN_0735fe18(uVar3,uVar4,0);
    thunk_FUN_04097b88(PTR_DAT_08f66298);
    uVar4 = thunk_FUN_0406deb8();
    FUN_0744a62c(uVar4,uVar3,0);
    uVar3 = thunk_FUN_04097b88(PTR_DAT_08fa11c0);
                    /* WARNING: Subroutine does not return */
    FUN_04031750(uVar4,uVar3);
  }
  if (*(long *)(unaff_x21 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  uVar3 = FUN_0747bb3c();
  param_1 = FUN_0735c7b4(*(undefined8 *)puVar1,uVar3,0);
  unaff_x20 = param_1;
LAB_0747b5bc:
  FUN_0747be84(param_1,unaff_x20,unaff_w19);
  return unaff_x20;
}


