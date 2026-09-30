/*
FUNCTION_NAME: OVRPlugin$$StopEyeTracking
ENTRY_POINT: 04f6cba8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 79
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin__StopEyeTracking(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x19;
  undefined4 *unaff_x21;
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_s3;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  
  FUN_04f6b0b8(param_1,param_3);
  fVar3 = (float)unaff_x21[1];
  fVar5 = (float)unaff_x21[2];
  uVar1 = FUN_04f6c36c(*unaff_x21,fVar3,fVar5,param_1,param_3);
  fVar4 = fVar3;
  fVar6 = fVar5;
  fVar2 = (float)FUN_04f6d0fc(param_1,param_3);
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *unaff_x19 = 0;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  FUN_05c99d80(uVar1,fVar3,fVar5,
               (fStack0000000000000018 * fVar4 +
               fStack0000000000000010 * in_s3 + fStack000000000000001c * fVar2) -
               fStack0000000000000014 * fVar6,
               (fStack0000000000000010 * fVar6 +
               fStack0000000000000014 * in_s3 + fStack000000000000001c * fVar4) -
               fStack0000000000000018 * fVar2,
               (fStack0000000000000014 * fVar2 +
               fStack0000000000000018 * in_s3 + fStack000000000000001c * fVar6) -
               fStack0000000000000010 * fVar4,
               ((fStack000000000000001c * in_s3 - fStack0000000000000010 * fVar2) -
               fStack0000000000000014 * fVar4) - fStack0000000000000018 * fVar6);
  return;
}


