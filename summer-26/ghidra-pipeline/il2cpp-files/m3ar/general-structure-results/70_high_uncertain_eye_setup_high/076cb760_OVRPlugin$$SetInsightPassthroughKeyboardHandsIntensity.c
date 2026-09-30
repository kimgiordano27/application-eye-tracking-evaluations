/*
FUNCTION_NAME: OVRPlugin$$SetInsightPassthroughKeyboardHandsIntensity
ENTRY_POINT: 076cb760
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetInsightPassthroughKeyboardHandsIntensity(void)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  long lVar3;
  long unaff_x20;
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0406aaec();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0406aaec();
  }
  lVar2 = **(long **)(lVar2 + 0xb8);
  *(long *)(unaff_x19 + 0x20) = lVar2;
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (0 < (int)uVar1) {
      lVar3 = 0;
      do {
        if (uVar1 <= (uint)lVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_04031894();
        }
        if (*(long *)(lVar2 + 0x20 + lVar3 * 8) == 0) goto LAB_076cb7f4;
        FUN_076cb7fc();
        uVar1 = *(uint *)(lVar2 + 0x18);
        lVar3 = lVar3 + 1;
      } while ((int)lVar3 < (int)uVar1);
    }
    return;
  }
LAB_076cb7f4:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


