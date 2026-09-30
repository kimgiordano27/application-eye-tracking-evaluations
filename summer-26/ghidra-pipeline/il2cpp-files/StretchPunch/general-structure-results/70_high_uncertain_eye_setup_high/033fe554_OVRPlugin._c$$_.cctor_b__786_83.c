/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_83
ENTRY_POINT: 033fe554
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_<>c__<_cctor>b__786_83(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long unaff_x21;
  long lVar5;
  long unaff_x23;
  int unaff_w24;
  int unaff_w25;
  
  do {
    if (unaff_w24 < 2) {
      return;
    }
    while( true ) {
      uVar1 = *(uint *)(unaff_x23 + 0x18);
      unaff_w24 = unaff_w24 + -1;
      iVar3 = 0;
      if (uVar1 != 0) {
        iVar3 = unaff_w25 / (int)uVar1;
      }
      uVar2 = unaff_w25 - iVar3 * uVar1;
      unaff_w25 = unaff_w25 + 1;
      if (uVar1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      lVar5 = *(long *)(unaff_x23 + (long)(int)uVar2 * 8 + 0x20);
      thunk_FUN_01da0934();
      if ((lVar5 == 0) || (lVar5 == unaff_x21)) break;
      uVar4 = OVRPlugin_<>c__<_cctor>b__786_106(lVar5);
      if (unaff_w24 < 2) {
        return;
      }
      if ((uVar4 & 1) != 0) {
        return;
      }
    }
  } while( true );
}


