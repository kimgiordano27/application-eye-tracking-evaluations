/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 021b56d8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__set_Item<OVRPlugin_SpaceQueryResult>(void)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0xf17) = 1;
  lVar1 = *unaff_x19;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar1 = *unaff_x19;
  }
  if (**(long **)(lVar1 + 0xb8) != 0) {
    FUN_021b2850();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


