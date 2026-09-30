/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 058312e4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_get_Current
          (void)

{
  long unaff_x20;
  undefined4 unaff_w21;
  long unaff_x26;
  long unaff_x29;
  
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  FUN_03b2ebac();
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return unaff_w21;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


