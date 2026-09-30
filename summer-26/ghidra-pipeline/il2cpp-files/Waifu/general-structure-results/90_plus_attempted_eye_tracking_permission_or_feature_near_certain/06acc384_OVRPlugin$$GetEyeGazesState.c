/*
FUNCTION_NAME: OVRPlugin$$GetEyeGazesState
ENTRY_POINT: 06acc384
PROGRAM: Waifu-libil2cpp.so
SCORE: 97
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetEyeGazesState(void)

{
  undefined1 in_ZR;
  long lVar1;
  int in_w8;
  uint unaff_w19;
  long unaff_x21;
  ulong unaff_x22;
  int unaff_w23;
  int unaff_w24;
  undefined4 uStack0000000000000000;
  int iStack0000000000000004;
  
  while( true ) {
    iStack0000000000000004 = in_w8;
    if (!(bool)in_ZR) {
      iStack0000000000000004 = unaff_w24;
    }
    uStack0000000000000000 = (undefined4)unaff_x22;
    if (*(long *)(unaff_x21 + 0x30) == 0) break;
    FUN_06abc1ec();
    unaff_x22 = unaff_x22 + 1;
    if (unaff_x22 == 5) {
      return;
    }
    lVar1 = FUN_06acc774();
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    in_w8 = *(int *)(lVar1 + unaff_x22 * 4 + 0x20);
    in_ZR = true;
    if (in_w8 == 1) {
      in_ZR = (unaff_w23 << (ulong)((uint)unaff_x22 & 0x1f) & unaff_w19) == 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


