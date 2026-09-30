/*
FUNCTION_NAME: OVRPlugin$$GetTrackingCalibratedOrigin
ENTRY_POINT: 0531fd9c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


float OVRPlugin__GetTrackingCalibratedOrigin(void)

{
  long unaff_x20;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s11;
  undefined8 in_stack_00000020;
  
  fVar1 = (float)FUN_0531ec70();
  fVar2 = (float)FUN_0526fc7c(0);
  fVar2 = fVar2 - (float)(int)(fVar2 / 360.0) * 360.0;
  fVar4 = 360.0;
  if (fVar2 <= 360.0) {
    fVar4 = fVar2;
  }
  fVar3 = 0.0;
  if (0.0 <= fVar2) {
    fVar3 = fVar4;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar4 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
    if ((fVar4 < fVar3) && (unaff_s11 = fVar1, ABS(fVar3 - fVar4) < ABS(360.0 - fVar3))) {
      unaff_s11 = (float)FUN_0531ed1c();
    }
    fVar4 = (float)FUN_0531ef30();
    return in_stack_00000020._4_4_ + unaff_s11 * fVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


