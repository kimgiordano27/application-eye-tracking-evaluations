/*
FUNCTION_NAME: System.Array.InternalEnumerator<KeyValuePair<OVRSpace,-OVRPlugin.SpaceQueryResult>>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 02ac9f40
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


void System_Array_InternalEnumerator<KeyValuePair<OVRSpace,_OVRPlugin_SpaceQueryResult>>__System_Collections_IEnumerator_Reset
               (long param_1)

{
  long lVar1;
  long *unaff_x20;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_01c72394();
  }
  lVar1 = **(long **)(param_1 + 0xc0);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01c72394(lVar1);
  }
  if (unaff_x20 != (long *)0x0) {
    if ((*(byte *)(*unaff_x20 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(lVar1 + 0x130) * 8 + -8) != lVar1))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748();
    }
  }
  return;
}


