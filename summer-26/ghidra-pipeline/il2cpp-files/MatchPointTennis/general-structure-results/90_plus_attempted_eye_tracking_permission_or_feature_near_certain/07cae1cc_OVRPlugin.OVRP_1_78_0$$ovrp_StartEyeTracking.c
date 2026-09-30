/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StartEyeTracking
ENTRY_POINT: 07cae1cc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 101
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StartEyeTracking(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  float *pfVar3;
  float fVar4;
  
  pfVar3 = (float *)(unaff_x19 + 0x54);
  fVar4 = *pfVar3 + -1.0;
  if (fVar4 <= 1.0) {
    fVar4 = 1.0;
  }
  *pfVar3 = fVar4;
  FUN_07a5081c(pfVar3,0);
  uVar1 = FUN_078a7764();
  if (*(char *)(unaff_x19 + 0x58) != '\0') {
    FUN_07cab054();
    FUN_07cab50c(uVar1);
    lVar2 = FUN_07cab0c8();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    *(undefined4 *)(lVar2 + 0x3c) = 0x3fc00000;
    *(undefined1 *)(lVar2 + 0x38) = 1;
  }
  return;
}


