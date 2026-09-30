/*
FUNCTION_NAME: VRReady.Scripts.OVR.OVRManagerHelper$$onHeadColliderCollision
ENTRY_POINT: 01cb906c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void VRReady_Scripts_OVR_OVRManagerHelper__onHeadColliderCollision(long param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long in_x9;
  code *pcVar3;
  byte *unaff_x19;
  byte *unaff_x20;
  undefined1 *unaff_x21;
  undefined1 *unaff_x22;
  undefined4 *unaff_x23;
  long *plVar4;
  ulong unaff_x25;
  long unaff_x26;
  byte *unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  plVar4 = *(long **)(param_1 + in_x9 * 8);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c6efd0();
  }
  if ((unaff_x25 & 1) == 0) {
    uVar2 = (**(code **)(*plVar4 + 0x50))(plVar4);
    *unaff_x23 = uVar2;
    pcVar3 = *(code **)(*plVar4 + 0x38);
  }
  else {
    uVar2 = (**(code **)(*plVar4 + 0x58))(plVar4);
    *unaff_x23 = uVar2;
    pcVar3 = *(code **)(*plVar4 + 0x40);
  }
  (*pcVar3)(plVar4);
  if ((*unaff_x27 & 1) != 0) {
    operator_delete(*(void **)(unaff_x27 + 0x10));
  }
  *(undefined8 *)(unaff_x27 + 0x10) = in_stack_00000010;
  *(undefined8 *)(unaff_x27 + 8) = in_stack_00000008;
  *(undefined8 *)unaff_x27 = in_stack_00000000;
  uVar1 = (**(code **)(*plVar4 + 0x18))(plVar4);
  *unaff_x22 = uVar1;
  uVar1 = (**(code **)(*plVar4 + 0x20))(plVar4);
  *unaff_x21 = uVar1;
  (**(code **)(*plVar4 + 0x28))(plVar4);
  if ((*unaff_x20 & 1) != 0) {
    operator_delete(*(void **)(unaff_x20 + 0x10));
  }
  *(undefined8 *)(unaff_x20 + 0x10) = in_stack_00000010;
  *(undefined8 *)(unaff_x20 + 8) = in_stack_00000008;
  *(undefined8 *)unaff_x20 = in_stack_00000000;
  (**(code **)(*plVar4 + 0x30))(plVar4);
  if ((*unaff_x19 & 1) != 0) {
    operator_delete(*(void **)(unaff_x19 + 0x10));
  }
  *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000010;
  *(undefined8 *)(unaff_x19 + 8) = in_stack_00000008;
  *(undefined8 *)unaff_x19 = in_stack_00000000;
  uVar2 = (**(code **)(*plVar4 + 0x48))(plVar4);
  **(undefined4 **)(unaff_x29 + 0x68) = uVar2;
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


