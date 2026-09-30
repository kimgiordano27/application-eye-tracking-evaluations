/*
FUNCTION_NAME: HVRInputActions$$Disable
ENTRY_POINT: 021892dc
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


/* WARNING: Removing unreachable block (ram,0x021893f8) */

undefined8 HVRInputActions__Disable(void)

{
  long lVar1;
  long in_x10;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000008;
  
  if ((*(byte *)(*(long *)(in_x10 + 0x28) + 0x135) & 1) == 0) {
    FUN_01a46ff8(*(long *)(in_x10 + 0x28));
  }
  if (unaff_x22 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = thunk_FUN_01a89d6c();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0();
    }
  }
  *unaff_x20 = lVar1;
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    FUN_01a46ff8(lVar1);
  }
  if ((unaff_x22 != 0) && (lVar1 = thunk_FUN_01a89d6c(), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6ee0();
  }
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return 1;
}


