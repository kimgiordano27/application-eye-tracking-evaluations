/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03531e98
PROGRAM: vrfs-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__get_Item<OVRPlugin_SpaceQueryResult>(long param_1)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
    lVar1 = FUN_015c2790(lVar1);
  }
  if ((*(byte *)(lVar1 + 300) <= *(byte *)(*unaff_x20 + 300)) &&
     (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(lVar1 + 300) * 8 + -8) == lVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160f170();
}


