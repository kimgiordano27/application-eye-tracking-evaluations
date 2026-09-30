/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.PointAndLocate$$get_RaycastOrigin
ENTRY_POINT: 04e1b9dc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;pose_vector;ray_interaction
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2
*/


uint Meta_XR_MRUtilityKit_BuildingBlocks_PointAndLocate__get_RaycastOrigin
               (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = param_3;
  if ((param_1 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9980);
    *(undefined1 *)(unaff_x21 + 0xe07) = 1;
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar1 = FUN_050b6884(&stack0x00000008,param_4,
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10));
  return uVar1 & 1;
}


