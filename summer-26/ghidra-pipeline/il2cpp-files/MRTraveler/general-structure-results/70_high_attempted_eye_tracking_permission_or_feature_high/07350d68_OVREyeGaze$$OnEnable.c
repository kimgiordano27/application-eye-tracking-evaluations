/*
FUNCTION_NAME: OVREyeGaze$$OnEnable
ENTRY_POINT: 07350d68
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnEnable(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x19;
  
  FUN_085b7960(*(undefined4 *)(param_1 + 0x2f0),param_2,param_3,0);
  if ((*(long *)(unaff_x19 + 0x40) != 0) &&
     (lVar1 = FUN_085b44a8(*(long *)(unaff_x19 + 0x40),0), lVar1 != 0)) {
    FUN_085b7960(0x3f800000,lVar1,*(undefined4 *)(unaff_x19 + 0x78),0);
    if ((*(long *)(unaff_x19 + 0x40) != 0) &&
       (lVar1 = FUN_085b44a8(*(long *)(unaff_x19 + 0x40),0), lVar1 != 0)) {
      FUN_085b7960(0x3f800000,lVar1,*(undefined4 *)(unaff_x19 + 0x7c),0);
      if ((*(long *)(unaff_x19 + 0x40) != 0) &&
         (lVar1 = FUN_085b44a8(*(long *)(unaff_x19 + 0x40),0), lVar1 != 0)) {
        thunk_FUN_085b6d70(*(undefined4 *)(unaff_x19 + 0x48),*(undefined4 *)(unaff_x19 + 0x4c),
                           *(undefined4 *)(unaff_x19 + 0x50),*(undefined4 *)(unaff_x19 + 0x54),lVar1
                           ,*(undefined4 *)(unaff_x19 + 0x80),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


