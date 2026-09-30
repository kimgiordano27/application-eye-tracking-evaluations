/*
FUNCTION_NAME: OVRManager$$set_colorGamut
ENTRY_POINT: 033687ac
PROGRAM: gunraiders-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_colorGamut(long param_1)

{
  uint in_w9;
  uint in_w10;
  uint in_w11;
  int in_w12;
  int iVar1;
  ulong in_x13;
  long in_x14;
  int in_w15;
  uint uVar2;
  ulong unaff_x19;
  
  while( true ) {
    uVar2 = (uint)unaff_x19;
    in_w10 = in_w10 - 1;
    iVar1 = (int)in_x13;
    unaff_x19 = in_x13 & 0xffffffff;
    *(short *)(in_x14 + 0x20) = (short)in_w15 + 0x30;
    if (uVar2 < 10) {
      return;
    }
    if (in_w9 <= in_w10) break;
    in_x13 = unaff_x19 * in_w11 >> 0x23;
    in_w15 = iVar1 + (uint)(unaff_x19 * in_w11 >> 0x23) * in_w12;
    in_x14 = param_1 + (long)(int)in_w10 * 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


