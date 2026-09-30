/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingEnabled
ENTRY_POINT: 05bcea2c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 97
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_eyeTrackingEnabled(void)

{
  undefined8 *unaff_x19;
  undefined4 *unaff_x21;
  float fVar1;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  
  FUN_05bceb74(*unaff_x21,unaff_x21[1],unaff_x21[2]);
  if (DAT_075457aa == '\0') {
    FUN_03188a78(PTR_DAT_070c1a80);
    DAT_075457aa = '\x01';
  }
  fVar1 = (float)FUN_069c57a8(uStack0000000000000078,0);
  fVar2 = (float)FUN_069c53ec(uStack000000000000007c,fVar1,unaff_s9,unaff_s10,0);
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *unaff_x19 = 0;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  FUN_069e4d6c(uStack0000000000000020,uStack0000000000000024,in_stack_00000028,
               (unaff_s13 * fVar1 + unaff_s15 * unaff_s10 + unaff_s8 * fVar2) - unaff_s14 * unaff_s9
               ,(unaff_s15 * unaff_s9 + unaff_s14 * unaff_s10 + unaff_s8 * fVar1) -
                unaff_s13 * fVar2,
               (unaff_s14 * fVar2 + unaff_s13 * unaff_s10 + unaff_s8 * unaff_s9) - unaff_s15 * fVar1
               ,((unaff_s8 * unaff_s10 - unaff_s15 * fVar2) - unaff_s14 * fVar1) -
                unaff_s13 * unaff_s9);
  return;
}


