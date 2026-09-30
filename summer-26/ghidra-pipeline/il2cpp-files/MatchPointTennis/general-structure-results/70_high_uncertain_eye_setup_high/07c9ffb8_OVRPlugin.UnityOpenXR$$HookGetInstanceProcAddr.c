/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$HookGetInstanceProcAddr
ENTRY_POINT: 07c9ffb8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_UnityOpenXR__HookGetInstanceProcAddr(void)

{
  uint uVar1;
  long lVar2;
  uint *unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  
  FUN_04447ba8(PTR_DAT_09f4d0a0);
  *(undefined1 *)(unaff_x22 + 0x9df) = 1;
  lVar2 = *unaff_x21;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar2 = *unaff_x21;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar2 != 0) {
    if (unaff_w20 < *(uint *)(lVar2 + 0x18)) {
      uVar1 = *(uint *)(lVar2 + (long)(int)unaff_w20 * 4 + 0x20);
      *unaff_x19 = uVar1;
      return ~uVar1 >> 0x1f;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


