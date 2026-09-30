/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.GrabAndLocate$$GetRaycastRay
ENTRY_POINT: 06e55780
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;pose_vector;ray_interaction
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;functionality_gaze_interaction_hits_2
*/


undefined1  [16] Meta_XR_MRUtilityKit_BuildingBlocks_GrabAndLocate__GetRaycastRay(long param_1)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  uVar3 = thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x28),&stack0x0000001c);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar5 + 0x135);
  if ((uVar1 & 1) == 0) {
    FUN_03d8f26c(lVar5);
    lVar5 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
  }
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03d8f26c(lVar5);
  }
  uVar4 = thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x30));
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  FUN_07143704(&stack0x00000020,uVar3,uVar4,0);
  auVar2._8_8_ = in_stack_00000028;
  auVar2._0_8_ = in_stack_00000020;
  return auVar2;
}


