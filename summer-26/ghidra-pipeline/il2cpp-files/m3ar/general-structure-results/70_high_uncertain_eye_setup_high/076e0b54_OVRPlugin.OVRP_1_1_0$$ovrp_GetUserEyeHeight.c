/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetUserEyeHeight
ENTRY_POINT: 076e0b54
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetUserEyeHeight(long param_1)

{
  ulong uVar1;
  uint uVar2;
  int in_w9;
  uint in_w10;
  long in_x11;
  long lVar3;
  long unaff_x19;
  uint *unaff_x20;
  
                    /* try { // try from 076e0b54 to 077e0be3 has its CatchHandler @ 076e095c */
  lVar3 = *(long *)(in_x11 + 0x20);
  if (lVar3 != 0) {
    if (*(float *)(lVar3 + 0x10) <= *(float *)(unaff_x19 + 0x7c)) {
      if (*(float *)(unaff_x19 + 0x7c) <= *(float *)(lVar3 + 0x14)) {
        return;
      }
      uVar2 = in_w10 - 1;
      if (in_w9 + 1 <= (int)uVar2) {
        uVar2 = in_w9 + 1;
      }
      *unaff_x20 = uVar2;
      if (in_w10 <= uVar2) goto LAB_076e0bcc;
      uVar1 = (ulong)(int)uVar2;
    }
    else {
      if (in_w9 < 2) {
        in_w9 = 1;
      }
      uVar2 = in_w9 - 1;
      *unaff_x20 = uVar2;
      if (in_w10 <= uVar2) {
LAB_076e0bcc:
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      uVar1 = (ulong)uVar2;
    }
    if (*(long *)(param_1 + uVar1 * 8 + 0x20) != 0) {
      FUN_076dfc50();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


