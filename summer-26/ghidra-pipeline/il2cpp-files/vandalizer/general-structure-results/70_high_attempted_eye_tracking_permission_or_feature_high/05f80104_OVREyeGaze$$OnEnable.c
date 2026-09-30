/*
FUNCTION_NAME: OVREyeGaze$$OnEnable
ENTRY_POINT: 05f80104
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnEnable(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 uVar3;
  undefined8 *unaff_x23;
  undefined4 uVar4;
  
  FUN_05f2091c();
  uVar3 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar1 = thunk_FUN_0322f04c(uVar3,*unaff_x23);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
  uVar1 = thunk_FUN_0322f04c(uVar3,*unaff_x23);
  thunk_FUN_0329bf60((undefined8 *)(unaff_x19 + 0x28),uVar1);
  lVar2 = FUN_06e5502c();
  if (lVar2 != 0) {
    uVar4 = FUN_06e6b224(lVar2,0);
    *(undefined4 *)(unaff_x19 + 0x68) = uVar4;
    *(undefined4 *)(unaff_x19 + 0x6c) = param_2;
    *(undefined4 *)(unaff_x19 + 0x70) = param_3;
    FUN_05f209c0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


