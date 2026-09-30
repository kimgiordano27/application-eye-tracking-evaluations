/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.GrabAndLocate$$get_RaycastOrigin
ENTRY_POINT: 06e55448
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;pose_vector;ray_interaction
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2
*/


bool Meta_XR_MRUtilityKit_BuildingBlocks_GrabAndLocate__get_RaycastOrigin(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w22;
  uint unaff_w23;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined4 uStack0000000000000018;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  uVar6 = *(undefined4 *)(param_1 + 0x38);
  uStack0000000000000008 = 0;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03d8f26c();
  }
  FUN_05811498(uVar3,uVar4,uVar5,uVar6,&stack0x00000008,uVar1,
               *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x38));
  *(undefined4 *)(unaff_x19 + 0x20) = uStack0000000000000018;
  *(undefined8 *)(unaff_x19 + 0x18) = uStack0000000000000010;
  *(undefined8 *)(unaff_x19 + 0x10) = uStack0000000000000008;
  return unaff_w23 < unaff_w22;
}


