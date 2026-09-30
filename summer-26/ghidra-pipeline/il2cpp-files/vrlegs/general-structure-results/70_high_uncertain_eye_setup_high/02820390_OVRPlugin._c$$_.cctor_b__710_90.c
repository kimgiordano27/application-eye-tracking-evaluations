/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__710_90
ENTRY_POINT: 02820390
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_<>c__<_cctor>b__710_90(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int in_w8;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  uint unaff_w21;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 in_stack_00000040;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000098;
  
  if (in_w8 == 0) {
    thunk_FUN_01a58e78();
  }
  lVar1 = FUN_0274322c(&stack0x00000098,0);
  lVar1 = lVar1 - in_stack_00000080;
  in_stack_00000088 = *(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x10);
  lVar2 = FUN_0274322c(&stack0x00000088,0);
  uVar4 = in_stack_00000098;
  if (lVar1 < lVar2) {
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar2 = FUN_0281f99c(uVar4);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*unaff_x26);
    }
    lVar3 = *unaff_x25;
    lVar2 = lVar2 + lVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *unaff_x25;
    }
    in_stack_00000088 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10);
    lVar1 = FUN_0274322c(&stack0x00000088,0);
    if (lVar2 < lVar1) {
      lVar1 = *unaff_x25;
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar1 = *unaff_x25;
      }
      in_stack_00000088 = *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x10);
      lVar2 = FUN_0274322c(&stack0x00000088,0);
    }
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02742a20(&stack0x00000098,lVar2,2,0);
  }
  else {
    in_stack_00000040 = 0;
    FUN_02742a20(&stack0x00000040,lVar1,1,0);
    in_stack_00000088 = in_stack_00000040;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    in_stack_00000098 = FUN_02745234(&stack0x00000088,0);
  }
  uVar4 = in_stack_00000098;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar4 = FUN_0281fa84(uVar4,unaff_w20);
  *unaff_x19 = uVar4;
  return unaff_w21 & 1;
}


