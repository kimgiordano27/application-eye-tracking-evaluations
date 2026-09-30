/*
FUNCTION_NAME: OVREyeGaze$$.ctor
ENTRY_POINT: 0735137c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze___ctor(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  long unaff_x19;
  undefined4 uVar2;
  
  lVar1 = FUN_085dbb5c();
  if (lVar1 != 0) {
    uVar2 = FUN_085eb894(lVar1,0);
    *(undefined4 *)(unaff_x19 + 0x70) = uVar2;
    *(undefined4 *)(unaff_x19 + 0x74) = param_2;
    *(undefined4 *)(unaff_x19 + 0x78) = param_3;
    FUN_072f4e24();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


