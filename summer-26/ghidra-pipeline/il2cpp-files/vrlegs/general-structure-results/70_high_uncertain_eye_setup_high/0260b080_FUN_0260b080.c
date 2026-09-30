/*
FUNCTION_NAME: FUN_0260b080
ENTRY_POINT: 0260b080
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0260b55c) */

undefined8 FUN_0260b080(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  long *unaff_x24;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  uVar4 = FUN_01ab6d3c(*param_1,*(undefined8 *)PTR_DAT_03cbebe8,*(undefined8 *)PTR_DAT_03cf12d0);
  in_stack_00000008 = uVar4;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar2 = FUN_02786d28(uVar4,0,0);
  puVar1 = PTR_DAT_03cee5f0;
  if ((uVar2 & 1) == 0) goto LAB_0260b52c;
  lVar3 = *(long *)PTR_DAT_03cee5f0;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar1;
  }
  uVar4 = **(undefined8 **)(lVar3 + 0xb8);
  in_stack_00000000._4_1_ = '\0';
  FUN_027e0bd8(uVar4,(long)&stack0x00000000 + 4,0);
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  iVar5 = 0;
  if (lVar3 != 0) {
    iVar5 = 0xb4;
  }
  if (iVar5 == 0xb4) {
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar2 = FUN_0219f8b8();
    if ((uVar2 & 1) == 0) goto LAB_0260b4c4;
    uVar6 = FUN_0279a64c(in_stack_00000008);
    iVar5 = 0xb7;
  }
  else if (iVar5 == 0) {
LAB_0260b4c4:
    uVar6 = 0;
    iVar5 = 0xb9;
  }
  else {
    uVar6 = 0;
  }
  if (in_stack_00000000._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
  }
  if ((iVar5 != 0xb9) && (iVar5 != 0)) {
    return uVar6;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar4 = FUN_01ab6d3c();
  in_stack_00000008 = uVar4;
LAB_0260b52c:
  uVar4 = FUN_0279a64c(uVar4);
  return uVar4;
}


