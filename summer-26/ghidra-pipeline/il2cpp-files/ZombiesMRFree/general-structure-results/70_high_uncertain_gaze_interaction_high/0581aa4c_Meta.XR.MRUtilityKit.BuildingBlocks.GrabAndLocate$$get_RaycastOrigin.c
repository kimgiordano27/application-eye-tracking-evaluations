/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.GrabAndLocate$$get_RaycastOrigin
ENTRY_POINT: 0581aa4c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;pose_vector;ray_interaction
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2
*/


uint Meta_XR_MRUtilityKit_BuildingBlocks_GrabAndLocate__get_RaycastOrigin(void)

{
  ulong uVar1;
  uint in_w3;
  long unaff_x22;
  int unaff_w23;
  
  while( true ) {
    if (*(uint *)(unaff_x22 + 0x18) <= in_w3) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    uVar1 = FUN_06b47584(unaff_x22 + (long)(int)in_w3 * 0x28 + 0x20);
    if ((uVar1 & 1) != 0) break;
    in_w3 = in_w3 - 1;
    if ((int)in_w3 < unaff_w23) {
      return 0xffffffff;
    }
  }
  return in_w3;
}


