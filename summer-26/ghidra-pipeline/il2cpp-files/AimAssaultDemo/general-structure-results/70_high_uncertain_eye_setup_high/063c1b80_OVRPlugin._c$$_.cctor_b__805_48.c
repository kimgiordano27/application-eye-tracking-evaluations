/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__805_48
ENTRY_POINT: 063c1b80
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__805_48(void)

{
  int in_w8;
  ulong uVar1;
  long unaff_x19;
  void *unaff_x20;
  void *__ptr;
  ulong uVar2;
  long *unaff_x22;
  
  if (in_w8 == 0) {
    thunk_FUN_03798b70();
  }
  free(unaff_x20);
  if (unaff_x19 != 0) {
    if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
      uVar2 = 0;
      uVar1 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
      do {
        if (uVar1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        __ptr = *(void **)(unaff_x19 + 0x20 + uVar2 * 8);
        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        free(__ptr);
        uVar1 = (ulong)*(uint *)(unaff_x19 + 0x18);
        uVar2 = uVar2 + 1;
      } while ((long)uVar2 < (long)(int)*(uint *)(unaff_x19 + 0x18));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


