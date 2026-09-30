/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 031ffa50
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (undefined8 param_1,long param_2)

{
  long *unaff_x19;
  
  if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
    param_2 = FUN_01ecaf44(param_2);
  }
  if (unaff_x19 != (long *)0x0) {
    if (*(long *)(*unaff_x19 + 0x40) == *(long *)(param_2 + 0x40)) {
      thunk_FUN_01f11920();
      FUN_031ff904();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


