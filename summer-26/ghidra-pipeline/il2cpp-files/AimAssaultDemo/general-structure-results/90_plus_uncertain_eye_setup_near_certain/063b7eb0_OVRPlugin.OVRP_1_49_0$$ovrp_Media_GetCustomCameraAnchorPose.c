/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_GetCustomCameraAnchorPose
ENTRY_POINT: 063b7eb0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCustomCameraAnchorPose
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,undefined4 param_4)

{
  long unaff_x19;
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float unaff_s10;
  float unaff_s11;
  float fVar4;
  
  fVar3 = unaff_s11 * unaff_s10;
  param_3 = param_3 * unaff_s10;
  uVar2 = FUN_07599c38();
  *(undefined4 *)(unaff_x19 + 0x98) = uVar2;
  *(float *)(unaff_x19 + 0x9c) = fVar3;
  *(float *)(unaff_x19 + 0xa0) = param_3;
  *(undefined4 *)(unaff_x19 + 0xa4) = param_4;
  if (*(long *)(unaff_x19 + 0x90) != 0) {
    fVar3 = (float)FUN_075ba4b0(*(long *)(unaff_x19 + 0x90),0);
    if (*(long *)(unaff_x19 + 0x90) != 0) {
      fVar4 = *(float *)(unaff_x19 + 0x24);
      FUN_075ba4b0(*(long *)(unaff_x19 + 0x90),0);
      fVar4 = fVar4 * unaff_s10;
      param_3 = param_3 * unaff_s10;
      uVar2 = FUN_07599c38(fVar3 * unaff_s10,0);
      lVar1 = *(long *)(unaff_x19 + 0x90);
      *(undefined4 *)(unaff_x19 + 0xa8) = uVar2;
      *(float *)(unaff_x19 + 0xac) = fVar4;
      *(float *)(unaff_x19 + 0xb0) = param_3;
      *(undefined4 *)(unaff_x19 + 0xb4) = param_4;
      FUN_07599a90(*(undefined4 *)(unaff_x19 + 0x98),*(undefined4 *)(unaff_x19 + 0x9c),
                   *(undefined4 *)(unaff_x19 + 0xa0),*(undefined4 *)(unaff_x19 + 0xa4),0);
      if (lVar1 != 0) {
        FUN_075ba5a4(lVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


