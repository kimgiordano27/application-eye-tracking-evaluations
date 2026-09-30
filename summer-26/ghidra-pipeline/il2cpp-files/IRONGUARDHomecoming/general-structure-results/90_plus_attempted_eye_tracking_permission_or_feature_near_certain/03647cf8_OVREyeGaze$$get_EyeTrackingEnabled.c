/*
FUNCTION_NAME: OVREyeGaze$$get_EyeTrackingEnabled
ENTRY_POINT: 03647cf8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__get_EyeTrackingEnabled(long param_1)

{
  long unaff_x19;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  ulong uStack0000000000000054;
  
  if (param_1 != 0) {
    FUN_03668360(param_1,0);
    _uStack0000000000000040 = *(undefined8 *)(unaff_x19 + 0x44);
    uStack0000000000000054 = *(ulong *)(unaff_x19 + 0x58);
    uStack0000000000000048 = (undefined4)*(undefined8 *)(unaff_x19 + 0x4c);
    uStack000000000000004c = (undefined4)*(undefined8 *)(unaff_x19 + 0x50);
    uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)(unaff_x19 + 0x50) >> 0x20);
    FUN_036672cc(&stack0x00000040,unaff_x19 + 0x60,0);
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_0407d468(uStack0000000000000040,uStack0000000000000044,uStack0000000000000048,
                   *(long *)(unaff_x19 + 0x38),0);
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        FUN_0407d5e8(uStack000000000000004c,uStack0000000000000050,
                     uStack0000000000000054 & 0xffffffff,uStack0000000000000054._4_4_,
                     *(long *)(unaff_x19 + 0x38),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


