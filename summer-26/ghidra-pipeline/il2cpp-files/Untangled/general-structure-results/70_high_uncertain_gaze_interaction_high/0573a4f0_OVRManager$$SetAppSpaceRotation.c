/*
FUNCTION_NAME: OVRManager$$SetAppSpaceRotation
ENTRY_POINT: 0573a4f0
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_gaze_interaction_hits_1
*/


void OVRManager__SetAppSpaceRotation(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined4 in_stack_00000000;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  puVar2 = PTR_DAT_06d58d90;
  puVar1 = PTR_DAT_06d58d80;
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar3 = (ulong)&stack0x00000000 | 8;
  UnityEngine_Rendering_DynamicArray_RangeEnumerable_RangeIterator<RendererListResource>__get_Current
            (uVar3,*(undefined8 *)puVar1);
  thunk_FUN_02f411dc(uVar3,0);
  thunk_FUN_02f411dc(&stack0x00000020);
  thunk_FUN_02f411dc(&stack0x00000028,0);
  in_stack_00000000 = 0xffffffff;
  FUN_03503354(uVar3);
  FUN_043b23dc(uVar3,*(undefined8 *)puVar2);
  return;
}


