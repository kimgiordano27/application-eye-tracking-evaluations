/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 013e0a2c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_SpaceQueryResult>(void)

{
  long lVar1;
  long unaff_x24;
  
  lVar1 = FUN_0122e748();
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  lVar1 = *(long *)(unaff_x24 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0122e748();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0122e748();
  }
  if (**(long **)(lVar1 + 0xb8) != 0) {
    System_Collections_Generic_ObjectComparer<FrameTimeSample>___ctor();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


