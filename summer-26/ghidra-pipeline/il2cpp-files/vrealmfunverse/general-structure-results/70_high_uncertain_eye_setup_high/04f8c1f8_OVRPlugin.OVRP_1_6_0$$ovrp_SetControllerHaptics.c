/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_SetControllerHaptics
ENTRY_POINT: 04f8c1f8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_6_0__ovrp_SetControllerHaptics(long param_1,long param_2)

{
  long lVar1;
  int in_w9;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  int unaff_w22;
  ulong unaff_x23;
  long unaff_x24;
  
  while( true ) {
    if (in_w9 == 0) {
      thunk_FUN_02b9ad44();
      param_2 = *unaff_x20;
      param_1 = *(long *)(param_2 + 0xb8);
    }
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= (uint)unaff_x23) {
LAB_04f8c268:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    unaff_w22 = unaff_w22 + 1;
    unaff_x23 = (ulong)*(uint *)(lVar1 + unaff_x24 * 4 + 0x20);
    while( true ) {
      if (*(int *)(param_2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        param_2 = *unaff_x20;
      }
      param_1 = *(long *)(param_2 + 0xb8);
      lVar1 = *(long *)(param_1 + 8);
      if (lVar1 == 0) goto LAB_04f8c26c;
      if (*(uint *)(lVar1 + 0x18) <= (uint)unaff_x23) goto LAB_04f8c268;
      unaff_x24 = (long)(int)(uint)unaff_x23;
      if (*(int *)(lVar1 + unaff_x24 * 4 + 0x20) != -1) break;
      if (unaff_x19 == 0) goto LAB_04f8c26c;
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_x21) goto LAB_04f8c268;
      lVar1 = unaff_x21 * 4;
      unaff_x21 = unaff_x21 + 1;
      *(int *)(unaff_x19 + lVar1 + 0x20) = unaff_w22;
      if (unaff_x21 == 0x1a) {
        return;
      }
      unaff_w22 = -1;
      unaff_x23 = unaff_x21 & 0xffffffff;
    }
    in_w9 = *(int *)(param_2 + 0xe4);
  }
LAB_04f8c26c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


