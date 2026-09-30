/*
FUNCTION_NAME: Unity.Mathematics.uint3$$op_Subtraction
ENTRY_POINT: 058d9158
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


uint Unity_Mathematics_uint3__op_Subtraction(long param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long unaff_x19;
  undefined8 uVar5;
  int unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  long in_stack_000001d0;
  
  FUN_02d6084c(*(undefined8 *)(param_1 + 0x438));
  FUN_02d6084c(PTR_DAT_0675e1b8);
  FUN_02d6084c(OVRPlugin_OVRP_1_37_0_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0xb22) = 1;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar4 = FUN_058576fc(0);
  puVar1 = OVRPlugin_OVRP_1_37_0_TypeInfo;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_0601ea80(*(undefined8 *)puVar1,0);
  }
  if (unaff_w20 < 0) {
    if (*(int *)(unaff_x19 + 0x128) == -1) {
      iVar2 = -(uint)(*(int *)(unaff_x19 + 0x160) < 1);
    }
    else {
      iVar2 = *(int *)(unaff_x19 + 300);
    }
  }
  else {
    iVar2 = FUN_058d9278();
  }
  if (iVar2 == -1) {
    uVar3 = 0;
  }
  else {
    FUN_03799508(unaff_x19 + 0x160,iVar2,*(undefined8 *)OVRPlugin_OVRP_1_36_0_TypeInfo);
    if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar5 = *(undefined8 *)(in_stack_000001d0 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar3 = FUN_0606a004(uVar5,0,0);
  }
  return uVar3 & 1;
}


