/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetEyeRecommendedResolutionScale
ENTRY_POINT: 04f8c378
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


void OVRPlugin_OVRP_1_6_0__ovrp_GetEyeRecommendedResolutionScale(long param_1)

{
  uint uVar1;
  undefined1 in_w8;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  
  do {
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w22) {
LAB_04f8c3b0:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    lVar2 = (long)(int)unaff_w22;
    unaff_w22 = unaff_w22 + 1;
    *(undefined1 *)(unaff_x20 + lVar2 + 0x20) = in_w8;
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      param_1 = *unaff_x21;
    }
    lVar2 = **(long **)(param_1 + 0xb8);
    if (lVar2 == 0) break;
    if (*(int *)(lVar2 + 0x18) <= (int)unaff_w22) {
      return;
    }
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      param_1 = *unaff_x21;
      lVar2 = **(long **)(param_1 + 0xb8);
      if (lVar2 == 0) break;
    }
    if (*(uint *)(lVar2 + 0x18) <= unaff_w22) goto LAB_04f8c3b0;
    if (unaff_x19 == 0) break;
    uVar1 = *(uint *)(lVar2 + (long)(int)unaff_w22 * 4 + 0x20);
    if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_04f8c3b0;
    in_w8 = *(int *)(unaff_x19 + (long)(int)uVar1 * 4 + 0x20) < 2 && uVar1 != 3;
  } while (unaff_x20 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


