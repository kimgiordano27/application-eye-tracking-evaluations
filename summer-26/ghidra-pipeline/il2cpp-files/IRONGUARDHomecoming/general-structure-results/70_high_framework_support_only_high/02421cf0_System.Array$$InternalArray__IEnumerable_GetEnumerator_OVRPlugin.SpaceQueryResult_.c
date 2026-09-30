/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 02421cf0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_SpaceQueryResult>(void)

{
  int unaff_w20;
  long *unaff_x21;
  ulong unaff_x22;
  
  if ((unaff_x22 & 1) != 0) {
    if (unaff_w20 < 0x401) {
      unaff_w20 = FUN_04068278(unaff_w20,0);
    }
    else {
      unaff_w20 = unaff_w20 + 0x100;
    }
  }
  if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (unaff_w20 != *(int *)(*unaff_x21 + 0x18)) {
    FUN_0223d1a8();
    return;
  }
  return;
}


