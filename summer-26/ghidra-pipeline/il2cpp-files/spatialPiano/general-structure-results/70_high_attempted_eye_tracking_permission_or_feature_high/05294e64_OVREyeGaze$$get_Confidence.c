/*
FUNCTION_NAME: OVREyeGaze$$get_Confidence
ENTRY_POINT: 05294e64
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


bool OVREyeGaze__get_Confidence(undefined8 *param_1)

{
  bool bVar1;
  ulong uVar2;
  long unaff_x19;
  undefined8 *unaff_x21;
  float fVar3;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  uStack0000000000000028 = param_1[1];
  uStack0000000000000020 = *param_1;
  uStack0000000000000030 = param_1[2];
  uVar2 = FUN_05293b38();
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    fVar3 = *(float *)(unaff_x19 + 0x128);
    *(ulong *)(unaff_x19 + 0x1a0) =
         CONCAT44((float)((ulong)*(undefined8 *)(unaff_x19 + 0x178) >> 0x20) +
                  fVar3 * *(float *)(unaff_x19 + 0x198),
                  (float)*(undefined8 *)(unaff_x19 + 0x178) + *(float *)(unaff_x19 + 0x194) * fVar3)
    ;
    *(float *)(unaff_x19 + 0x1a8) =
         *(float *)(unaff_x19 + 0x180) + fVar3 * *(float *)(unaff_x19 + 0x19c);
  }
  else {
    FUN_03e2340c();
    unaff_x21[1] = 0;
    *unaff_x21 = 0;
    unaff_x21[3] = 0;
    unaff_x21[2] = 0;
    *(undefined8 *)(unaff_x19 + 0x1a0) = in_stack_00000040;
    *(undefined4 *)(unaff_x19 + 0x1a8) = in_stack_00000048;
  }
  return !bVar1;
}


