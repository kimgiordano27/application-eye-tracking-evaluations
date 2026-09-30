/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.SpaceLocator$$set_RaycastOrigin
ENTRY_POINT: 05b27cec
PROGRAM: vandalizer-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;pose_vector;ray_interaction
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2
*/


undefined1  [16] Meta_XR_MRUtilityKit_BuildingBlocks_SpaceLocator__set_RaycastOrigin(void)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  lVar2 = FUN_0322bef4();
  uVar3 = thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x28));
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_0322bef4(*(long *)(unaff_x20 + 0x20));
  }
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  FUN_05da3e28(&stack0x00000010,uVar3,*(undefined8 *)(unaff_x19 + 0x20),0);
  auVar1._8_8_ = in_stack_00000018;
  auVar1._0_8_ = in_stack_00000010;
  return auVar1;
}


