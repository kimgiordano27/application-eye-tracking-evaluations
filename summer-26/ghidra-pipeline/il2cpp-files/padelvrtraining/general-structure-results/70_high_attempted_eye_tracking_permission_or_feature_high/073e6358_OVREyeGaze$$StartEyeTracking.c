/*
FUNCTION_NAME: OVREyeGaze$$StartEyeTracking
ENTRY_POINT: 073e6358
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;validity_or_gating_hits_1;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


uint OVREyeGaze__StartEyeTracking(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  uint *unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  undefined4 unaff_w21;
  long unaff_x22;
  undefined8 *unaff_x23;
  
  FUN_03d2d2b0();
  *(undefined1 *)(unaff_x22 + 0x34e) = 1;
  lVar5 = thunk_FUN_03d2ef40(*unaff_x23);
  FUN_071bc31c(lVar5,0);
  puVar1 = PTR_DAT_091a6078;
  if (lVar5 != 0) {
    *(undefined4 *)(lVar5 + 0x10) = unaff_w21;
    puVar3 = PTR_DAT_09220fe8;
    puVar2 = PTR_DAT_09220fe0;
    uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar6 = thunk_FUN_03d2ef40(*(undefined8 *)puVar1);
    FUN_06033dc4(uVar6,lVar5,*(undefined8 *)puVar3,0);
    uVar4 = FUN_04a759bc(uVar7,uVar6,*(undefined8 *)puVar2);
    *unaff_x19 = uVar4;
    return ~uVar4 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


