/*
FUNCTION_NAME: VRReady.Scripts.OVR.OVRManagerHelper$$decreaseYAfterCollision
ENTRY_POINT: 01cb92b8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void VRReady_Scripts_OVR_OVRManagerHelper__decreaseYAfterCollision(void)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  void *__dest;
  long *unaff_x24;
  long unaff_x27;
  byte *unaff_x28;
  long unaff_x29;
  long in_stack_00000008;
  long in_stack_00000030;
  
  *unaff_x24 = *unaff_x21;
  while (unaff_x23 = unaff_x23 + 1, unaff_x23 != 4) {
    if (*(byte *)(unaff_x20 + unaff_x23) < 5) {
                    /* WARNING: Could not recover jumptable at 0x01cb92b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)*(byte *)(unaff_x27 + (ulong)*(byte *)(unaff_x20 + unaff_x23)) * 4 +
                0x1cb92b4))();
      return;
    }
  }
  bVar2 = *unaff_x28;
  if ((bVar2 & 1) == 0) {
    if (bVar2 < 4) goto LAB_01cb966c;
    uVar3 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar3 = *(ulong *)(unaff_x28 + 8);
    if (uVar3 < 2) goto LAB_01cb966c;
    in_stack_00000030 = *(long *)(unaff_x28 + 0x10);
  }
  __dest = (void *)*unaff_x21;
  memmove(__dest,(void *)(in_stack_00000030 + 1),uVar3 - 1);
  unaff_x24 = *(long **)(unaff_x29 + -0x30);
  *unaff_x21 = (long)__dest + (uVar3 - 1);
LAB_01cb966c:
  uVar1 = *(uint *)(unaff_x29 + -0x1c) & 0xb0;
  if (uVar1 != 0x10) {
    if (uVar1 == 0x20) {
      in_stack_00000008 = *unaff_x21;
    }
    *unaff_x24 = in_stack_00000008;
  }
  return;
}


