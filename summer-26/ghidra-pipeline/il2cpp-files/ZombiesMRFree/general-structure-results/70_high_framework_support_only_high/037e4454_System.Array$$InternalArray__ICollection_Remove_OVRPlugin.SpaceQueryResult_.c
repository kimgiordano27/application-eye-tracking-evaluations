/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 037e4454
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_SpaceQueryResult>
               (ulong param_1,undefined8 param_2)

{
  undefined8 *unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f8ea50);
    *(undefined1 *)(unaff_x22 + 0x7e3) = 1;
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_037d3528(&stack0x00000008,param_2);
  unaff_x19[2] = in_stack_00000018;
  unaff_x19[1] = in_stack_00000010;
  *unaff_x19 = in_stack_00000008;
  return;
}


