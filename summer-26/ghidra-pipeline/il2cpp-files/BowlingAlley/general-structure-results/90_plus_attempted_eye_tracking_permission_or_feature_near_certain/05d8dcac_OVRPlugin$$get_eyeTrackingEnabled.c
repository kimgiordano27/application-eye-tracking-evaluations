/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingEnabled
ENTRY_POINT: 05d8dcac
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_eyeTrackingEnabled(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  
  uVar1 = FUN_06c36440(*(undefined4 *)(param_1 + 0x40),0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_05d8dcf8;
    FUN_05d8d544(*(long *)(unaff_x19 + 0x58),100);
  }
  uVar1 = FUN_06c36404(*(undefined4 *)(unaff_x19 + 0x40),0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x58) != 0) {
    FUN_05d8d544(*(long *)(unaff_x19 + 0x58),0);
    return;
  }
LAB_05d8dcf8:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


