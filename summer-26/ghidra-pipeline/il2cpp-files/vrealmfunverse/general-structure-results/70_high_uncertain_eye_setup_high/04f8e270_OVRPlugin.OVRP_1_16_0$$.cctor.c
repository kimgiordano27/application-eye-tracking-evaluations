/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$.cctor
ENTRY_POINT: 04f8e270
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_OVRP_1_16_0___cctor(long param_1)

{
  uint uVar1;
  int in_w8;
  long lVar2;
  uint *unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  
  if (in_w8 == 0) {
    thunk_FUN_02b9ad44();
    param_1 = *unaff_x21;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0xb8) + 0x10);
  if (lVar2 != 0) {
    if (unaff_w20 < *(uint *)(lVar2 + 0x18)) {
      uVar1 = *(uint *)(lVar2 + (long)(int)unaff_w20 * 4 + 0x20);
      *unaff_x19 = uVar1;
      return ~uVar1 >> 0x1f;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


