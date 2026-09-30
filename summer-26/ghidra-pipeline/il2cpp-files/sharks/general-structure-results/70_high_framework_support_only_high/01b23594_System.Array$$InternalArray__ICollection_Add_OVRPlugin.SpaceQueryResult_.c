/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 01b23594
PROGRAM: sharks-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array__InternalArray__ICollection_Add<OVRPlugin_SpaceQueryResult>(void)

{
  uint uVar1;
  undefined8 *puVar2;
  int in_w8;
  undefined8 *unaff_x19;
  long unaff_x20;
  float fStack0000000000000044;
  double in_stack_00000048;
  
  if (in_w8 == 0) {
    thunk_FUN_01843fdc();
  }
  uVar1 = FUN_033beaa4();
  fStack0000000000000044 = (float)in_stack_00000048;
  puVar2 = (undefined8 *)
           FUN_01beb050(&stack0x00000044,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x18));
  *unaff_x19 = *puVar2;
  return uVar1 & 1;
}


