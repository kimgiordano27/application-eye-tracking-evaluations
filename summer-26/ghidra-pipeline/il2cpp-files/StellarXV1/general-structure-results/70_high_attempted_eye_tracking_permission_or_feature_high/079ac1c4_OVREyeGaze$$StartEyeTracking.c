/*
FUNCTION_NAME: OVREyeGaze$$StartEyeTracking
ENTRY_POINT: 079ac1c4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;validity_or_gating_hits_1;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__StartEyeTracking(undefined8 *param_1)

{
  ulong uVar1;
  long unaff_x19;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = (*(code *)*param_1)();
  uVar2 = 0;
  uVar3 = 0x3f800000;
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  do {
    if ((*(uint *)(unaff_x19 + 0x30) >> (ulong)(uVar2 & 0x1f) & 1) != 0) {
      FUN_079ac250(uVar3);
      FUN_089cd004();
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 5);
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    FUN_079c677c(*(long *)(unaff_x19 + 0x38),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


