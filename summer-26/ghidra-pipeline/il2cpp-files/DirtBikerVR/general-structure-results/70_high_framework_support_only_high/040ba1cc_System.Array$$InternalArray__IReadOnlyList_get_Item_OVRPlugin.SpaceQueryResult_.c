/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 040ba1cc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_SpaceQueryResult>(ulong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  bVar1 = true;
  do {
    memcpy(&stack0x00000010,(void *)(unaff_x22 + unaff_x21 * *(uint *)(*unaff_x20 + 0x104)),
           (ulong)*(uint *)(*unaff_x20 + 0x104));
    uVar2 = thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
    uVar3 = FUN_07e23c90(&stack0x00000020,uVar2,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10))
    ;
    if ((uVar3 & 1) != 0) {
      return bVar1;
    }
    unaff_x21 = unaff_x21 + 1;
    bVar1 = unaff_x21 < (param_1 & 0xffffffff);
  } while ((param_1 & 0xffffffff) != unaff_x21);
  return bVar1;
}


