/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingEnabled
ENTRY_POINT: 04f6c708
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_6;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


float OVRPlugin__get_eyeTrackingEnabled(void)

{
  long unaff_x20;
  long *unaff_x21;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 in_stack_00000020;
  
  fVar5 = **(float **)(*unaff_x21 + 0xb8);
  fVar1 = (float)FUN_04f6b594();
  fVar2 = (float)FUN_02cdfa10(0);
  fVar2 = fVar2 - (float)(int)(fVar2 / 360.0) * 360.0;
  fVar4 = 360.0;
  if (fVar2 <= 360.0) {
    fVar4 = fVar2;
  }
  fVar3 = 0.0;
  if (0.0 <= fVar2) {
    fVar3 = fVar4;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar4 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
    if ((fVar4 < fVar3) && (fVar5 = fVar1, ABS(fVar3 - fVar4) < ABS(360.0 - fVar3))) {
      fVar5 = (float)FUN_04f6b640();
    }
    fVar4 = (float)FUN_04f6b854();
    return in_stack_00000020._4_4_ + fVar5 * fVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


