/*
FUNCTION_NAME: FUN_03eb7bf0
ENTRY_POINT: 03eb7bf0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_possible_biometrics_hits_2
*/


void FUN_03eb7bf0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = StringLiteral_11930;
  puVar1 = OVRFaceExpressions_TypeInfo;
  if ((DAT_04542e8f & 1) == 0) {
    FUN_01c5d288(OVRExternalComposition_TypeInfo);
    FUN_01c5d288(OVREyeGaze_TypeInfo);
    FUN_01c5d288(StringLiteral_11930);
    FUN_01c5d288(StringLiteral_11931);
    FUN_01c5d288(OVRFaceExpressions_TypeInfo);
    FUN_01c5d288(OVRGLTFAccessor_TypeInfo);
    DAT_04542e8f = 1;
  }
  FUN_03313b6c(param_1,0);
  *(long *)(param_1 + 0x28) = param_2;
  uVar3 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
  FUN_02b1ee9c(uVar3,param_1,*(undefined8 *)puVar2,0);
  puVar2 = StringLiteral_11931;
  puVar1 = OVRGLTFAccessor_TypeInfo;
  if (param_2 != 0) {
    FUN_02305eac(param_2,uVar3,0,*(undefined8 *)OVRExternalComposition_TypeInfo);
    lVar4 = *(long *)(param_1 + 0x28);
    uVar3 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
    FUN_02b1ee9c(uVar3,param_1,*(undefined8 *)puVar2,0);
    if (lVar4 != 0) {
      FUN_02305eac(lVar4,uVar3,0,*(undefined8 *)OVREyeGaze_TypeInfo);
      FUN_03eb7d24(param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


