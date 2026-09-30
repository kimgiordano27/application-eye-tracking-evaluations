/*
FUNCTION_NAME: OVRPlugin$$GetHandTrackingState
ENTRY_POINT: 04f65d1c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetHandTrackingState(long param_1)

{
  ulong uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar1 = FUN_04f60130(uStack0000000000000000,uStack0000000000000004,in_stack_00000008,
                       &stack0x00000010);
  if ((uVar1 & 1) == 0) {
    *(undefined4 *)unaff_x19 = uStack0000000000000000;
    *(undefined4 *)((long)unaff_x19 + 4) = uStack0000000000000004;
    *(undefined4 *)(unaff_x19 + 1) = in_stack_00000008;
  }
  else {
    *unaff_x19 = in_stack_00000010;
    *(undefined4 *)(unaff_x19 + 1) = in_stack_00000018;
    unaff_x22 = unaff_x21;
  }
  uVar2 = *unaff_x22;
  uVar4 = *(undefined8 *)((long)unaff_x22 + 0x14);
  uVar3 = *(undefined8 *)((long)unaff_x22 + 0xc);
  unaff_x20[1] = unaff_x22[1];
  *unaff_x20 = uVar2;
  *(undefined8 *)((long)unaff_x20 + 0x14) = uVar4;
  *(undefined8 *)((long)unaff_x20 + 0xc) = uVar3;
  return;
}


