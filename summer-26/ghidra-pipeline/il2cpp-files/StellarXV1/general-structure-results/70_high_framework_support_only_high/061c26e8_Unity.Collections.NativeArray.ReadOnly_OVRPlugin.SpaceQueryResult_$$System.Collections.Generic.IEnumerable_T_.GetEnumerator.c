/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 061c26e8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (long param_1,long *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = thunk_FUN_040b1560(param_1 + 8,param_4,0);
    if ((long *)*param_2 != (long *)0x0) {
      FUN_0896df44(*(long *)*param_2 + (long)((iVar1 - param_4) * 4),param_3,(long)(param_4 << 2),0)
      ;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


