/*
FUNCTION_NAME: OVRPlugin$$get_systemDisplayFrequency
ENTRY_POINT: 03220ec8
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_systemDisplayFrequency(void)

{
  undefined8 uVar1;
  ulong uVar2;
  int in_w8;
  undefined4 uVar3;
  long unaff_x19;
  short unaff_w23;
  long unaff_x25;
  long *unaff_x26;
  undefined8 in_stack_00000010;
  long in_stack_00000098;
  
  uVar3 = 0xf;
  if (0xf < in_w8) {
    uVar3 = 0x11;
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  FUN_03221280(uVar3,&stack0x00000010);
  if (in_stack_00000010._4_4_ == 0x7fffffff) {
    uVar2 = FUN_031c833c(&stack0x00000010,0);
    if (unaff_x19 == 0) {
LAB_03221024:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if ((uVar2 & 1) == 0) {
      uVar1 = *(undefined8 *)(unaff_x19 + 0x70);
    }
    else {
      uVar1 = *(undefined8 *)(unaff_x19 + 0x78);
    }
  }
  else if (in_stack_00000010._4_4_ == -0x80000000) {
    if (unaff_x19 == 0) goto LAB_03221024;
    uVar1 = *(undefined8 *)(unaff_x19 + 0x68);
  }
  else {
    if (unaff_w23 == 0) {
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      FUN_0321f874();
    }
    else {
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      FUN_0321f2f4();
    }
    uVar1 = 0;
  }
  if (*(long *)(unaff_x25 + 0x28) == in_stack_00000098) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


