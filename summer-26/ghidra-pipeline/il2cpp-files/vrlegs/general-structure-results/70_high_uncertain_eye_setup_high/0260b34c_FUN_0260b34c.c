/*
FUNCTION_NAME: FUN_0260b34c
ENTRY_POINT: 0260b34c
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

undefined8 FUN_0260b34c(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *unaff_x24;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  uVar3 = thunk_FUN_025bd1c0();
  uVar6 = 0;
  if ((uVar3 & 1) != 0) {
    uVar6 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf1290);
    FUN_02608c0c();
    return uVar6;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar3 = FUN_02786d28(0,0,0);
  puVar1 = PTR_DAT_03cee5f0;
  if ((uVar3 & 1) == 0) goto LAB_0260b52c;
  lVar2 = *(long *)PTR_DAT_03cee5f0;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *(long *)puVar1;
  }
  uVar6 = **(undefined8 **)(lVar2 + 0xb8);
  in_stack_00000000._4_1_ = '\0';
  FUN_027e0bd8(uVar6,(long)&stack0x00000000 + 4,0);
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  iVar4 = 0;
  if (lVar2 != 0) {
    iVar4 = 0xb4;
  }
  if (iVar4 == 0xb4) {
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar3 = FUN_0219f8b8();
    if ((uVar3 & 1) == 0) goto LAB_0260b4c4;
    uVar5 = FUN_0279a64c(in_stack_00000008);
    iVar4 = 0xb7;
  }
  else if (iVar4 == 0) {
LAB_0260b4c4:
    uVar5 = 0;
    iVar4 = 0xb9;
  }
  else {
    uVar5 = 0;
  }
  if (in_stack_00000000._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
  }
  if ((iVar4 != 0xb9) && (iVar4 != 0)) {
    return uVar5;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar6 = FUN_01ab6d3c();
  in_stack_00000008 = uVar6;
LAB_0260b52c:
  uVar6 = FUN_0279a64c(uVar6);
  return uVar6;
}


