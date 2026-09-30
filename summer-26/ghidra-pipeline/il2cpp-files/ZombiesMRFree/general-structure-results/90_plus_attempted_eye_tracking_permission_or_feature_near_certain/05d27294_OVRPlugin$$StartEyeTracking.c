/*
FUNCTION_NAME: OVRPlugin$$StartEyeTracking
ENTRY_POINT: 05d27294
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 98
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin__StartEyeTracking(undefined8 param_1,undefined8 param_2)

{
  long unaff_x19;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000020;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000040;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  
  uStack000000000000004c = (undefined4)param_2;
  uStack0000000000000050 = (undefined4)((ulong)param_2 >> 0x20);
  uStack0000000000000020 = param_1;
  uStack000000000000002c = uStack000000000000004c;
  uStack0000000000000030 = uStack0000000000000050;
  uStack0000000000000040 = param_1;
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    uStack000000000000000c = uStack000000000000004c;
    FUN_05d408f0(0x3f800000);
    *(undefined1 *)(unaff_x19 + 0x61) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


