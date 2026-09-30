/*
FUNCTION_NAME: RootMotion.AvatarUtility$$GetPostRotation
ENTRY_POINT: 0813b40c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void RootMotion_AvatarUtility__GetPostRotation(float *param_1)

{
  long unaff_x19;
  float fVar1;
  float fVar2;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  float in_s16;
  
  fVar2 = -in_s16;
  if (0.0 <= param_1[2] * *(float *)(unaff_x19 + 0x90) +
             *param_1 * *(float *)(unaff_x19 + 0x88) + param_1[1] * *(float *)(unaff_x19 + 0x8c)) {
    fVar2 = in_s16;
  }
  *(undefined4 *)(unaff_x19 + 0xa0) = unaff_s8;
  *(undefined4 *)(unaff_x19 + 0xa4) = unaff_s9;
  *(undefined4 *)(unaff_x19 + 0xa8) = unaff_s10;
  *(float *)(unaff_x19 + 0xac) = *(float *)(unaff_x19 + 0xac) + fVar2;
  if (*(char *)(unaff_x19 + 0x3c) != '\0') {
    fVar1 = *(float *)(unaff_x19 + 0xac);
    fVar2 = *(float *)(unaff_x19 + 0x44);
    if (fVar1 <= *(float *)(unaff_x19 + 0x44)) {
      fVar2 = fVar1;
    }
    if (fVar1 < *(float *)(unaff_x19 + 0x40)) {
      fVar2 = *(float *)(unaff_x19 + 0x40);
    }
    *(float *)(unaff_x19 + 0xac) = fVar2;
  }
  return;
}


