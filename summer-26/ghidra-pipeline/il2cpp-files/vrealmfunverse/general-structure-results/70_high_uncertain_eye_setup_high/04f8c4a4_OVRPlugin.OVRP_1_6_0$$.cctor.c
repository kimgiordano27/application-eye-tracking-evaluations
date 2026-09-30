/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$.cctor
ENTRY_POINT: 04f8c4a4
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


void OVRPlugin_OVRP_1_6_0___cctor(long param_1)

{
  undefined1 in_CY;
  uint in_w8;
  long lVar1;
  byte in_w9;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  uint unaff_w22;
  
  while (!(bool)in_CY) {
    lVar1 = unaff_x19 + unaff_x21;
    unaff_x21 = unaff_x21 + 1;
    *(byte *)(lVar1 + 0x20) = (in_w9 | (byte)(unaff_w22 >> (ulong)(in_w8 & 0x1f))) & 1;
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      param_1 = *unaff_x20;
    }
    lVar1 = **(long **)(param_1 + 0xb8);
    if (lVar1 == 0) {
LAB_04f8c4d8:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if ((long)*(int *)(lVar1 + 0x18) <= (long)unaff_x21) {
      return;
    }
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      param_1 = *unaff_x20;
      lVar1 = **(long **)(param_1 + 0xb8);
      if (lVar1 == 0) goto LAB_04f8c4d8;
    }
    if (*(uint *)(lVar1 + 0x18) <= unaff_x21) break;
    in_w8 = *(uint *)(lVar1 + unaff_x21 * 4 + 0x20);
    in_w9 = 0x10 < in_w8;
    if (unaff_x19 == 0) goto LAB_04f8c4d8;
    in_CY = *(uint *)(unaff_x19 + 0x18) <= unaff_x21;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


