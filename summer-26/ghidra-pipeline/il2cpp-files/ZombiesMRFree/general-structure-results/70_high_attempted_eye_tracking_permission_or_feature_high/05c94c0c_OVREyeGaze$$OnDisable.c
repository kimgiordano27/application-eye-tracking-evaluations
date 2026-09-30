/*
FUNCTION_NAME: OVREyeGaze$$OnDisable
ENTRY_POINT: 05c94c0c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 71
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnDisable
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 *unaff_x23;
  undefined4 uVar4;
  
  FUN_02fe925c(*(undefined8 *)(param_4 + 0xb60));
  *(undefined1 *)(unaff_x20 + 0x36b) = 1;
  FUN_05c38dfc();
  uVar3 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar1 = thunk_FUN_03010710(uVar3,*unaff_x23);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
  uVar1 = thunk_FUN_03010710(uVar3,*unaff_x23);
  thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x28),uVar1);
  lVar2 = FUN_068f5d7c();
  if (lVar2 != 0) {
    uVar4 = FUN_06904a04(lVar2,0);
    *(undefined4 *)(unaff_x19 + 0x68) = uVar4;
    *(undefined4 *)(unaff_x19 + 0x6c) = param_2;
    *(undefined4 *)(unaff_x19 + 0x70) = param_3;
    FUN_05c38ea0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


